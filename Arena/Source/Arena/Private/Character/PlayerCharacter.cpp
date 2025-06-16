#include "Character/PlayerCharacter.h"

#include <Components/CapsuleComponent.h>

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/BasePlayerState.h"
#include "Player/BasePlayerController.h"
#include "Net/UnrealNetwork.h"
#include "Omega/SimpleOmegaComponent.h"
#include "AbilitySystem/Abilities/OmegaAbility.h"
#include "Omega/OmegaClassData.h"

APlayerCharacter::APlayerCharacter()
{
	// Camera Setup
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 1200.0f;
	SpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	// ===== 오메가 컴포넌트 생성=====
	OmegaComponent = CreateDefaultSubobject<USimpleOmegaComponent>(TEXT("OmegaComponent"));

	// 플레이어용 Movement 설정
	GetCharacterMovement()->bOrientRotationToMovement = false; // 이동 방향 회전 비활성화
	GetCharacterMovement()->bUseControllerDesiredRotation = true; // Controller 회전 사용!
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// ===== 오메가 이벤트 바인딩=====
	if (OmegaComponent)
	{
		OmegaComponent->OnOmegaStateChanged.AddDynamic(this, &APlayerCharacter::OnOmegaStateChanged);
	}

	// ===== 호스트(Authority) 플레이어가 자동으로 오메가 =====
	if (HasAuthority() && IsLocallyControlled())
	{
		// 약간의 지연 후 오메가 활성화 (다른 초기화가 완료된 후)
		FTimerHandle OmegaInitTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(OmegaInitTimerHandle, [this]()
		{
			if (OmegaComponent && IsValid(this))
			{
				OmegaComponent->ActivateOmega();
				UE_LOG(LogTemp, Warning, TEXT("Host player %s automatically became Omega!"), *GetName());
			}
		}, 1.0f, false);
	}
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	InitAbilityActorInfo();
	InitializeDefaultAttributes();
	AddCharacterAbilities();
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	InitAbilityActorInfo();
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerCharacter, CurrentSpineRotation);
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAnimationData(DeltaTime);
}

void APlayerCharacter::SetSpineRotation(float Rotation)
{
	CurrentSpineRotation = Rotation;

	if (!HasAuthority())
	{
		ServerSetSpineRotation(Rotation);
	}
}

void APlayerCharacter::ServerSetSpineRotation_Implementation(float Rotation)
{
	CurrentSpineRotation = Rotation;
}

void APlayerCharacter::UpdateAnimationData(float DeltaTime)
{
	// Movement 데이터 계산
	FVector Velocity = GetVelocity();
	Velocity.Z = 0.0f; // 수평 속도만

	// 속도 계산 (0~1로 정규화)
	float MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	MovementSpeed = MaxWalkSpeed > 0.0f ? FMath::Clamp(Velocity.Size() / MaxWalkSpeed, 0.0f, 1.0f) : 0.0f;

	// 이동 여부
	bIsMoving = MovementSpeed > 0.1f;

	// 이동 방향 계산 (캐릭터 기준 상대각도)
	if (bIsMoving)
	{
		FVector ForwardVector = GetActorForwardVector();
		FVector VelocityNormalized = Velocity.GetSafeNormal();

		// 캐릭터 Forward 기준으로 속도 벡터의 각도 계산
		float DotProduct = FVector::DotProduct(ForwardVector, VelocityNormalized);
		float CrossProduct = FVector::CrossProduct(ForwardVector, VelocityNormalized).Z;

		MovementDirection = FMath::Atan2(CrossProduct, DotProduct) * 180.0f / PI;
	}
	else
	{
		MovementDirection = 0.0f;
	}
}

void APlayerCharacter::InitAbilityActorInfo()
{
	ABasePlayerState* BasePlayerState = GetPlayerState<ABasePlayerState>();
	if (BasePlayerState)
	{
		AbilitySystemComponent = BasePlayerState->GetAbilitySystemComponent();
		AttributeSet = BasePlayerState->GetAttributeSet();

		if (AbilitySystemComponent)
		{
			AbilitySystemComponent->InitAbilityActorInfo(BasePlayerState, this);
			OnASCRegistered.Broadcast(AbilitySystemComponent);
		}
	}
}

void APlayerCharacter::AddCharacterAbilities()
{
	UE_LOG(LogTemp, Warning, TEXT("PlayerCharacter::AddCharacterAbilities called"));

	// ===== 오메가 어빌리티를 StartupAbilities에 추가 (새로 추가!) =====
	if (OmegaAbilityClass && !StartupAbilities.Contains(OmegaAbilityClass)) {
		StartupAbilities.Add(OmegaAbilityClass);
		UE_LOG(LogTemp, Warning, TEXT("Added OmegaAbilityClass to StartupAbilities"));
	}

	// 기본 어빌리티들 추가 (이제 Omega도 포함됨)
	Super::AddCharacterAbilities();
}

// ===== 오메가 시스템 인터페이스 구현 (새로 추가!) =====

bool APlayerCharacter::IsOmega() const
{
	return OmegaComponent ? OmegaComponent->IsOmega() : false;
}

bool APlayerCharacter::CanBeStolen() const
{
	return OmegaComponent ? OmegaComponent->CanBeStolen() : false;
}

bool APlayerCharacter::IsStealOnCooldown() const
{
	return OmegaComponent ? OmegaComponent->IsStealOnCooldown() : false;
}

void APlayerCharacter::OnOmegaStateChanged(bool bIsOmega)
{
	// 오메가 상태 변화 시 처리할 로직
	if (bIsOmega)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s became Omega!"), *GetName());
		// 여기서 UI 업데이트, 사운드 재생 등 가능
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s lost Omega status - reverting changes"), *GetName());
		
		// 역변신 처리
		RevertOmegaChanges();
	}
}

void APlayerCharacter::RevertOmegaChanges_Implementation()
{
	// OmegaClassData가 있으면 매쉬 기반 역변신
	if (MyOmegaClassData)
	{
		// 외형 복원 (Multicast RPC로 모든 클라이언트에서)
		RevertOmegaVisuals(MyOmegaClassData);
		
		// 스탯 복원 (서버에서만)
		if (HasAuthority())
		{
			RevertOmegaStats();
		}
	}
	else
	{
		// 기본 크기 복원
		RevertDefaultVisualChanges();
	}
}

void APlayerCharacter::RevertOmegaVisuals_Implementation(UOmegaClassData* ClassData)
{
	if (!ClassData) return;
	
	// 원본 메시 복원
	if (ClassData->OriginalMesh)
	{
		GetMesh()->SetSkeletalMesh(ClassData->OriginalMesh);
	}
	
	// 원본 머티리얼들 복원
	for (int32 i = 0; i < ClassData->OriginalMaterials.Num(); i++)
	{
		if (ClassData->OriginalMaterials[i])
		{
			GetMesh()->SetMaterial(i, ClassData->OriginalMaterials[i]);
		}
	}
	
	// 원본 크기 복원
	GetMesh()->SetRelativeScale3D(ClassData->OriginalScale);
	
	// 원본 콜라이더 복원
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (Capsule)
	{
		Capsule->SetCapsuleRadius(ClassData->OriginalCapsuleRadius);
		Capsule->SetCapsuleHalfHeight(ClassData->OriginalCapsuleHeight);
	}
	
	UE_LOG(LogTemp, Log, TEXT("Reverted %s to original visuals"), *GetName());
}

void APlayerCharacter::RevertOmegaStats()
{
	if (!HasAuthority() || !MyOmegaClassData) return;
	
	UAbilitySystemComponent* ASC = GetAbilitySystemComponent();
	if (!ASC) return;
	
	const UAttributeSet* ConstAttributeSet = ASC->GetAttributeSet(UBaseAttributeSet::StaticClass());
	UBaseAttributeSet* OriginAttributeSet = const_cast<UBaseAttributeSet*>(Cast<UBaseAttributeSet>(ConstAttributeSet));
	if (!OriginAttributeSet) return;
	
	// 원본 스탯으로 복원
	if (MyOmegaClassData->OriginalSpeed > 0.0f)
	{
		OriginAttributeSet->SetSpeed(MyOmegaClassData->OriginalSpeed);
		OriginAttributeSet->SetOutput(MyOmegaClassData->OriginalOutput);
		
		UE_LOG(LogTemp, Log, TEXT("Reverted %s stats - Speed: %.1f, Output: %.1f"),
			*GetName(), MyOmegaClassData->OriginalSpeed, MyOmegaClassData->OriginalOutput);
		
		// 원본 데이터 초기화
		MyOmegaClassData->OriginalSpeed = 0.0f;
		MyOmegaClassData->OriginalOutput = 0.0f;
	}
}

void APlayerCharacter::RevertDefaultVisualChanges()
{
	// 기본 크기를 1.0으로 리셋 (임시)
	GetMesh()->SetRelativeScale3D(FVector(1.0f));
	
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (Capsule)
	{
		// 기본 캡슐 크기로 복원
		Capsule->SetCapsuleRadius(42.0f);
		Capsule->SetCapsuleHalfHeight(96.0f);
	}
	
	UE_LOG(LogTemp, Log, TEXT("Reverted %s to default size"), *GetName());
}

// Animation Interface 함수들 - 블루프린트에서 직접 호출 가능
float APlayerCharacter::GetMovementSpeed() const
{
	return MovementSpeed;
}

float APlayerCharacter::GetMovementDirection() const
{
	return MovementDirection;
}

bool APlayerCharacter::IsMoving() const
{
	return bIsMoving;
}
