// BasePlayerController.cpp
#include "BasePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"

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
	
	// Future: Add mouse cursor logic here
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
			UE_LOG(LogTemp, Log, TEXT("MoveAction bound successfully"));
		}
	}
}

void ABasePlayerController::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn())
	{
		// 월드 좌표 기준으로 간단하게!
		ControlledPawn->AddMovementInput(FVector::ForwardVector, MovementVector.Y);  // W/S
		ControlledPawn->AddMovementInput(FVector::RightVector, MovementVector.X);    // A/D
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