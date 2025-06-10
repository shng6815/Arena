// PlayerCharacter.h
#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UBaseAbilitySystemComponent;
class UBaseAttributeSet;

UCLASS()
class ARENA_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	// APawn interface
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	// Movement
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetSprinting(bool bIsSprinting);

	UFUNCTION(BlueprintPure, Category = "Movement")
	bool IsSprinting() const { return bSprinting; }

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	// Camera Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> Camera;

	// Movement State
	UPROPERTY(ReplicatedUsing = OnRep_Sprinting, BlueprintReadOnly, Category = "Movement")
	bool bSprinting = false;

	// Sprint Speed Multiplier
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float SprintMultiplier = 1.5f;

	// Network
	UFUNCTION()
	void OnRep_Sprinting();

	// Ability System Override
	virtual void InitAbilityActorInfo() override;

private:
	void UpdateMovementSpeed();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void Move(const struct FInputActionValue& Value);
	void Sprint();
	void StopSprinting();
};