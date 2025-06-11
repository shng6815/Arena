#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
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

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// Input Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	// Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	// Input Functions
	void Move(const FInputActionValue& Value);

	// 회전 관련 설정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	bool bEnableCursorRotation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	float MinRotationDistance = 50.0f; // 최소 회전 거리

	// Ability System
	UPROPERTY()
	TObjectPtr<UBaseAbilitySystemComponent> BaseAbilitySystemComponent;

	UBaseAbilitySystemComponent* GetASC();

private:
	// 마우스 커서 추적
	FHitResult CursorHit;
	void CursorTrace();
	
	// 회전 처리 (Controller의 책임!)
	void HandleCursorRotation();
};
