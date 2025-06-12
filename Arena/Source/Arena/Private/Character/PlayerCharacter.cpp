#include "Character/PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/BasePlayerState.h"
#include "Player/BasePlayerController.h"
#include "Net/UnrealNetwork.h"

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

	// 플레이어용 Movement 설정
	GetCharacterMovement()->bOrientRotationToMovement = false;  // 이동 방향 회전 비활성화
	GetCharacterMovement()->bUseControllerDesiredRotation = true;  // Controller 회전 사용!
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
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