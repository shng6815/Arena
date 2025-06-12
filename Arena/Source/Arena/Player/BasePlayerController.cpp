#include "BasePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Arena/AbilitySystem/BaseAbilitySystemComponent.h"
#include "Arena/Character/PlayerCharacter.h"
#include "GameFramework/Pawn.h"

ABasePlayerController::ABasePlayerController()
{
	bReplicates = true;
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
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
	
	// Look System 처리 (로컬 플레이어만)
	if (bEnableLookSystem && IsLocalController())
	{
		UpdateLookSystem(DeltaTime);
	}
}

void ABasePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		// Move
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ABasePlayerController::Move);
		}

		// Attack
		if (AttackAction)
		{
			EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ABasePlayerController::AttackStarted);
			EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &ABasePlayerController::AttackHeld);
			EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Completed, this, &ABasePlayerController::AttackCompleted);
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

void ABasePlayerController::AttackStarted(const FInputActionValue& Value)
{
	// 마우스 버튼 처음 눌렀을 때 - Pressed만 호출
	AbilityInputTagPressed(FGameplayTag::RequestGameplayTag(FName("InputTag.LMB")));
}

void ABasePlayerController::AttackHeld(const FInputActionValue& Value)
{
	// 마우스 버튼 누르고 있는 동안 - Held 호출 (연속 공격!)
	AbilityInputTagHeld(FGameplayTag::RequestGameplayTag(FName("InputTag.LMB")));
}

void ABasePlayerController::AttackCompleted(const FInputActionValue& Value)
{
	// 마우스 버튼 뗐을 때 - Released 호출
	AbilityInputTagReleased(FGameplayTag::RequestGameplayTag(FName("InputTag.LMB")));
}

void ABasePlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (GetASC())
	{
		GetASC()->AbilityInputTagPressed(InputTag);
	}
}

void ABasePlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (GetASC())
	{
		GetASC()->AbilityInputTagReleased(InputTag);
	}
}

void ABasePlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	if (GetASC())
	{
		GetASC()->AbilityInputTagHeld(InputTag);
	}
}

void ABasePlayerController::CursorTrace()
{
	// 마우스 커서 아래 월드 위치 추적
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
}

void ABasePlayerController::UpdateLookSystem(float DeltaTime)
{
	APlayerCharacter* PlayerChar = Cast<APlayerCharacter>(GetPawn());
	if (!PlayerChar) return;

	FVector MousePos = GetMouseWorldPosition();
	FVector CharacterPos = PlayerChar->GetActorLocation();
	
	FVector Direction = MousePos - CharacterPos;
	Direction.Z = 0.0f;
	
	// 최소 거리 체크
	if (Direction.Size2D() < MinLookDistance)
	{
		return;
	}
	
	Direction.Normalize();
	float TargetYaw = Direction.Rotation().Yaw;
	float CurrentYaw = GetControlRotation().Yaw; // Controller 회전 기준!
	float AngleToTarget = AngleDifference(CurrentYaw, TargetYaw);
	
	// 척추 회전 계산
	float TargetSpineRotation = FMath::Clamp(AngleToTarget, -MaxSpineRotation, MaxSpineRotation);
	CurrentSpineRotation = LerpAngle(CurrentSpineRotation, TargetSpineRotation, DeltaTime, SpineRotationSpeed);
	
	// 척추 회전을 PlayerCharacter에 적용
	PlayerChar->SetSpineRotation(CurrentSpineRotation);
	
	// 몸체 회전 (척추 한계를 넘어설 때) - Controller 회전 사용!
	if (FMath::Abs(AngleToTarget) > MaxSpineRotation)
	{
		float ExcessAngle = AngleToTarget - FMath::Sign(AngleToTarget) * MaxSpineRotation;
		float TargetBodyYaw = NormalizeAngle(CurrentYaw + ExcessAngle);
		float NewBodyYaw = LerpAngle(CurrentYaw, TargetBodyYaw, DeltaTime, BodyRotationSpeed);
		
		// 멀티플레이어 안전한 Controller 회전!
		SetControlRotation(FRotator(0, NewBodyYaw, 0));
	}
}

FVector ABasePlayerController::GetMouseWorldPosition() const
{
	if (!CursorHit.bBlockingHit) 
	{
		APawn* ControlledPawn = GetPawn();
		return ControlledPawn ? ControlledPawn->GetActorLocation() : FVector::ZeroVector;
	}
	
	FVector MouseWorldPos = CursorHit.ImpactPoint;
	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn) return MouseWorldPos;
	
	FVector CharacterLocation = ControlledPawn->GetActorLocation();
	
	// Z축 보정
	MouseWorldPos.Z = CharacterLocation.Z;
	
	// 최대 거리 제한 (1000 유닛)
	FVector DiffVector = MouseWorldPos - CharacterLocation;
	DiffVector.Z = 0.0f;
	if (DiffVector.Size() > 1000.0f)
	{
		DiffVector.Normalize();
		MouseWorldPos = CharacterLocation + DiffVector * 1000.0f;
	}
	
	return MouseWorldPos;
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

// Utility Functions
float ABasePlayerController::NormalizeAngle(float Angle)
{
	Angle = FMath::Fmod(Angle, 360.0f);
	if (Angle > 180.0f) Angle -= 360.0f;
	else if (Angle < -180.0f) Angle += 360.0f;
	return Angle;
}

float ABasePlayerController::AngleDifference(float From, float To)
{
	From = NormalizeAngle(From);
	To = NormalizeAngle(To);
	
	float Difference = To - From;
	if (Difference > 180.0f) Difference -= 360.0f;
	else if (Difference < -180.0f) Difference += 360.0f;
	
	return Difference;
}

float ABasePlayerController::LerpAngle(float Current, float Target, float DeltaTime, float Speed)
{
	if (Speed <= 0.0f) return Target;
	
	float Diff = AngleDifference(Current, Target);
	if (FMath::Abs(Diff) < 0.01f) return Target;
	
	float DeltaMove = Diff * FMath::Clamp(DeltaTime * Speed, 0.0f, 1.0f);
	return NormalizeAngle(Current + DeltaMove);
}