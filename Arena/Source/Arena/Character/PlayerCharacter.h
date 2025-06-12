#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class ARENA_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	// APawn interface
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	// Look System Interface
	UFUNCTION(BlueprintCallable, Category = "Look System")
	void SetSpineRotation(float Rotation);

	UFUNCTION(BlueprintPure, Category = "Look System")
	float GetSpineRotation() const { return CurrentSpineRotation; }

	// Animation Interface - 블루프린트에서 직접 호출할 수 있는 함수들
	UFUNCTION(BlueprintPure, Category = "Animation")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintPure, Category = "Animation") 
	float GetMovementDirection() const;

	UFUNCTION(BlueprintPure, Category = "Animation")
	bool IsMoving() const;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// Camera Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> Camera;

	// Ability System Override
	virtual void InitAbilityActorInfo() override;

private:
	// Look System 상태
	float CurrentSpineRotation = 0.0f;
	
	// Animation 상태 (블루프린트에서 사용)
	float MovementSpeed = 0.0f;
	float MovementDirection = 0.0f;
	bool bIsMoving = false;
	
	// 애니메이션 데이터 업데이트
	void UpdateAnimationData(float DeltaTime);
};