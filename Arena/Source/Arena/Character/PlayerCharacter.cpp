#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Arena/Player/BasePlayerState.h"
#include "Arena/Player/BasePlayerController.h"

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

	// 플레이어용 Movement 설정 (회전 관련)
	GetCharacterMovement()->bOrientRotationToMovement = false;  // 이동 방향 회전 비활성화
	GetCharacterMovement()->bUseControllerDesiredRotation = true;  // 컨트롤러 회전 사용
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

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// 입력은 이미 Controller에서 처리됨
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