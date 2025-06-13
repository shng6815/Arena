
#pragma once

#include "Input/ArenaInputComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "BasePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class UBaseAbilitySystemComponent;
class UArenaInputConfig;

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

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// Input Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	// Input Config (태그 기반!)
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UArenaInputConfig> InputConfig;

	// Basic Movement Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	// 태그 기반 어빌리티 입력 핸들러
	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

	// Basic Input Functions
	void Move(const FInputActionValue& Value);

	// Look System Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	bool bEnableLookSystem = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float MinLookDistance = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float MaxSpineRotation = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float SpineRotationSpeed = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Look System")
	float BodyRotationSpeed = 3.0f;

	// Ability System
	UPROPERTY()
	TObjectPtr<UBaseAbilitySystemComponent> BaseAbilitySystemComponent;

	UBaseAbilitySystemComponent* GetASC();

private:
	// 마우스 커서 추적
	FHitResult CursorHit;
	void CursorTrace();

	// Look System
	float CurrentSpineRotation = 0.0f;
	void UpdateLookSystem(float DeltaTime);
	FVector GetMouseWorldPosition() const;

	// Utility Functions
	static float NormalizeAngle(float Angle);
	static float AngleDifference(float From, float To);
	static float LerpAngle(float Current, float Target, float DeltaTime, float Speed);
};