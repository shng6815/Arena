#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USimpleOmegaComponent; // 추가!
class UOmegaClassData; // 추가!

UCLASS()
class ARENA_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	// 기존 함수들...
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Look System Interface
	UFUNCTION(BlueprintCallable, Category = "Look System")
	void SetSpineRotation(float Rotation);

	UFUNCTION(BlueprintPure, Category = "Look System")
	float GetSpineRotation() const { return CurrentSpineRotation; }

	// Animation Interface
	UFUNCTION(BlueprintPure, Category = "Animation")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintPure, Category = "Animation") 
	float GetMovementDirection() const;

	UFUNCTION(BlueprintPure, Category = "Animation")
	bool IsMoving() const;

	// ===== 오메가 시스템 인터페이스 (새로 추가!) =====
	
	/** 오메가 상태인지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega")
	bool IsOmega() const;

	/** 오메가를 뺏을 수 있는 상태인지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega")
	bool CanBeStolen() const;

	/** 스틸 쿨다운 중인지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega")
	bool IsStealOnCooldown() const;

	/** 오메가 컴포넌트 가져오기 */
	UFUNCTION(BlueprintPure, Category = "Omega")
	USimpleOmegaComponent* GetOmegaComponent() const { return OmegaComponent; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// Camera Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<UCameraComponent> Camera;
	
	// ===== 오메가 시스템 컴포넌트 (새로 추가!) =====
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Omega")
	TObjectPtr<USimpleOmegaComponent> OmegaComponent;

	// ===== 오메가 어빌리티 클래스 (새로 추가!) =====
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Omega Abilities")
	TSubclassOf<UGameplayAbility> OmegaAbilityClass;

	// ===== 오메가 직업별 데이터 (새로 추가!) =====
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Omega Class Data")
	TObjectPtr<UOmegaClassData> MyOmegaClassData;

	UFUNCTION(Server, Reliable)
	void ServerSetSpineRotation(float Rotation);

	// Ability System Override
	virtual void InitAbilityActorInfo() override;

	// ===== 오메가 시스템 오버라이드 (새로 추가!) =====
	virtual void AddCharacterAbilities() override;

private:
	// Look System 상태
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Look System", meta = (AllowPrivateAccess = "true"))
	float CurrentSpineRotation = 0.0f;
	
	// Animation 상태
	float MovementSpeed = 0.0f;
	float MovementDirection = 0.0f;
	bool bIsMoving = false;
	
	void UpdateAnimationData(float DeltaTime);

	// ===== 오메가 이벤트 핸들러들 (새로 추가!) =====
	
	/** 오메가 상태 변화 시 호출 */
	UFUNCTION()
	void OnOmegaStateChanged(bool bIsOmega);

	/** 오메가 변화 복원 (Multicast) */
	UFUNCTION(NetMulticast, Reliable)
	void RevertOmegaChanges();
	
	/** 외형 복원 (Multicast) */
	UFUNCTION(NetMulticast, Reliable)
	void RevertOmegaVisuals(UOmegaClassData* ClassData);

	/** 스탯 복원 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void RevertOmegaStats();

	/** 기본 외형 복원 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void RevertDefaultVisualChanges();
};