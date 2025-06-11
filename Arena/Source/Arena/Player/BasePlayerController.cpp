#include "BasePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"
#include "GameFramework/Pawn.h"

ABasePlayerController::ABasePlayerController()
{
	bReplicates = true;
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	
	// 기본 설정
	bEnableCursorRotation = true;
	MinRotationDistance = 50.0f;
}

void ABasePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// Input Mapping Context 설정
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	// 게임과 UI 모드 동시 사용
	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}

void ABasePlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
	
	// 커서 위치 추적
	CursorTrace();
	
	// 회전 처리 (Controller에서!)
	if (bEnableCursorRotation)
	{
		HandleCursorRotation();
	}
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Move);
		}
	}
}

void ABasePlayerController::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn())
	{
		// 월드 좌표 기준으로 이동
		ControlledPawn->AddMovementInput(FVector::ForwardVector, MovementVector.Y);
		ControlledPawn->AddMovementInput(FVector::RightVector, MovementVector.X);
	}
}

void ABasePlayerController::CursorTrace()
{
	// 마우스 커서 아래 월드 위치 추적
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
}

void ABasePlayerController::HandleCursorRotation()
{
	// 로컬 플레이어만 처리
	if (!IsLocalController()) return;
	if (!CursorHit.bBlockingHit) return;
	
	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn) return;

	FVector CursorLocation = CursorHit.ImpactPoint;
	FVector PawnLocation = ControlledPawn->GetActorLocation();
	
	// 거리 체크 (너무 가까우면 회전하지 않음)
	FVector Direction = CursorLocation - PawnLocation;
	Direction.Z = 0.0f; // 수평 회전만
	
	if (Direction.Size() < MinRotationDistance)
	{
		return; // 너무 가까우면 회전하지 않음
	}
	
	if (!Direction.IsNearlyZero())
	{
		// Controller가 회전을 담당!
		FRotator TargetRotation = Direction.Rotation();
		SetControlRotation(TargetRotation);
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