#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "BasePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class UBaseAbilitySystemComponent;

UCLASS()
class ARENA_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABasePlayerController();
	virtual void PlayerTick(float DeltaTime) override;

	// 마우스 커서 월드 위치 가져오기
	UFUNCTION(BlueprintPure, Category = "Cursor")
	FVector GetCursorWorldLocation() const { return CursorHit.ImpactPoint; }

	UFUNCTION(BlueprintPure, Category = "Cursor")
	bool GetCursorHitResult() const { return CursorHit.bBlockingHit; }

	// 어빌리티 입력 처리
	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// Input Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	// Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> AttackAction; // 좌클릭 공격

	// Input Functions
	void Move(const FInputActionValue& Value);

	void AttackStarted(const FInputActionValue& Value);
	void AttackHeld(const FInputActionValue& Value);
	void AttackCompleted(const FInputActionValue& Value);

	// Look System Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	bool bEnableLookSystem = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float MinLookDistance = 50.0f; // 최소 Look 거리

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float MaxSpineRotation = 45.0f; // 최대 척추 회전각

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float SpineRotationSpeed = 5.0f; // 척추 회전 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float BodyRotationSpeed = 3.0f; // 몸체 회전 속도

	// Ability System
	UPROPERTY()
	TObjectPtr<UBaseAbilitySystemComponent> BaseAbilitySystemComponent;

	UBaseAbilitySystemComponent* GetASC();

private:
	// 마우스 커서 추적
	FHitResult CursorHit;
	void CursorTrace();

	// Look System
	float CurrentSpineRotation = 0.0f; // 현재 척추 회전각
	void UpdateLookSystem(float DeltaTime);
	FVector GetMouseWorldPosition() const;

	// Utility Functions
	static float NormalizeAngle(float Angle);
	static float AngleDifference(float From, float To);
	static float LerpAngle(float Current, float Target, float DeltaTime, float Speed);
};
