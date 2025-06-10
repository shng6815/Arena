// PlayerCharacter.cpp
#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Arena/Player/BasePlayerState.h"
#include "Arena/Player/BasePlayerController.h"
#include "Arena/AbilitySystem/BaseAttributeSet.h"
#include "Net/UnrealNetwork.h"

APlayerCharacter::APlayerCharacter()
{
	// Camera Setup for Quarter View
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

	// Movement Setup
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Don't use controller rotation
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Initialize ability actor info for the Server
	InitAbilityActorInfo();
	InitializeDefaultAttributes();
	AddCharacterAbilities();
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// Initialize ability actor info for the Client
	InitAbilityActorInfo();
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// This will be expanded when we add Enhanced Input
	// For now, just basic setup
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerCharacter, bSprinting);
}

void APlayerCharacter::SetSprinting(bool bIsSprinting)
{
	if (bSprinting != bIsSprinting)
	{
		bSprinting = bIsSprinting;
		UpdateMovementSpeed();

		// Replicate to clients if this is the server
		if (GetLocalRole() == ROLE_Authority)
		{
			OnRep_Sprinting();
		}
	}
}

void APlayerCharacter::OnRep_Sprinting()
{
	UpdateMovementSpeed();
}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	// Implementation will be added when we set up Enhanced Input
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get forward direction
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// Get right direction 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void APlayerCharacter::Sprint()
{
	SetSprinting(true);
}

void APlayerCharacter::StopSprinting()
{
	SetSprinting(false);
}

void APlayerCharacter::InitAbilityActorInfo()
{
	ABasePlayerState* BasePlayerState = GetPlayerState<ABasePlayerState>();
	if (BasePlayerState)
	{
		// Get ASC from PlayerState for multiplayer
		AbilitySystemComponent = BasePlayerState->GetAbilitySystemComponent();
		AttributeSet = BasePlayerState->GetAttributeSet();
		
		if (AbilitySystemComponent)
		{
			AbilitySystemComponent->InitAbilityActorInfo(BasePlayerState, this);
			OnASCRegistered.Broadcast(AbilitySystemComponent);
		}
	}
}

void APlayerCharacter::UpdateMovementSpeed()
{
	// 이제 Speed 어트리뷰트 기반으로 계산!
	float BaseSpeed = GetSpeed(); // AttributeSet에서 가져옴
	
	if (bSprinting)
	{
		BaseSpeed *= SprintMultiplier;
	}
	
	SetSpeed(BaseSpeed); // BaseCharacter의 SetSpeed 호출
}