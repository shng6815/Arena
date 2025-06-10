// BasePlayerController.cpp
#include "BasePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"
#include "Arena/Character/PlayerCharacter.h"

ABasePlayerController::ABasePlayerController()
{
	bReplicates = true;
	bShowMouseCursor = false;
	DefaultMouseCursor = EMouseCursor::Default;
}

void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// Set input mode for game
	FInputModeGameOnly InputModeData;
	SetInputMode(InputModeData);
}

void ABasePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
	
	UpdateCameraInput(DeltaTime);
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		// Movement
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Move);
		}

		// Sprint
		if (SprintAction)
		{
			EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ABasePlayerController::SprintStarted);
			EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ABasePlayerController::SprintCompleted);
		}

		// Look (for camera rotation)
		if (LookAction)
		{
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Look);
		}
	}
}

void ABasePlayerController::Move(const FInputActionValue& Value)
{
	// Input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn())
	{
		if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(ControlledPawn))
		{
			// Forward/Right directions relative to camera
			const FRotator Rotation = GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			// Get forward direction
			const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			// Get right direction 
			const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

			// Add movement 
			ControlledPawn->AddMovementInput(ForwardDirection, MovementVector.Y);
			ControlledPawn->AddMovementInput(RightDirection, MovementVector.X);
		}
	}
}

void ABasePlayerController::Look(const FInputActionValue& Value)
{
	if (!bEnableCameraRotation) return;

	// Input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (LookAxisVector.X != 0.0f || LookAxisVector.Y != 0.0f)
	{
		// Add yaw and pitch input to controller
		AddYawInput(LookAxisVector.X * CameraRotationSpeed);
		AddPitchInput(LookAxisVector.Y * CameraRotationSpeed);
	}
}

void ABasePlayerController::SprintStarted()
{
	if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetPawn()))
	{
		PlayerCharacter->Sprint();
	}
}

void ABasePlayerController::SprintCompleted()
{
	if (APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetPawn()))
	{
		PlayerCharacter->StopSprinting();
	}
}

UBaseAbilitySystemComponent* ABasePlayerController::GetASC()
{
	if (BaseAbilitySystemComponent == nullptr)
	{
		BaseAbilitySystemComponent = Cast<UBaseAbilitySystemComponent>(
			UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn())
		);
	}
	return BaseAbilitySystemComponent;
}

void ABasePlayerController::UpdateCameraInput(float DeltaTime)
{
	// Future: Add any camera-specific logic here
	// For now, camera rotation is handled by Look input action
}