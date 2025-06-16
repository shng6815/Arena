#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "OmegaAbility.generated.h"

class USimpleOmegaComponent;

/**
 * 통합 오메가 어빌리티 - 상황에 따라 변신 or 스틸
 * E키 하나로 모든 오메가 관련 액션 처리
 */
UCLASS()
class ARENA_API UOmegaAbility : public UBaseGameplayAbility
{
	GENERATED_BODY()

public:
	UOmegaAbility();

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	                            const FGameplayAbilityActorInfo* ActorInfo,
	                            const FGameplayAbilityActivationInfo ActivationInfo,
	                            const FGameplayEventData* TriggerEventData) override;

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	                               const FGameplayAbilityActorInfo* ActorInfo,
	                               const FGameplayTagContainer* SourceTags,
	                               const FGameplayTagContainer* TargetTags,
	                               FGameplayTagContainer* OptionalRelevantTags) const override;

	// ======================
	// 설정값들
	// ======================

	/** 스틸 가능 거리 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Omega Settings")
	float StealRange = 300.0f;

	/** 변신 시 크기 배율 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Omega Settings")
	float ScaleMultiplier = 1.3f;

	/** 변신 시 스피드 증가 배율 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Omega Settings")
	float SpeedMultiplier = 1.5f;

	/** 변신 시 체력 회복 여부 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Omega Settings")
	bool bRestoreHealthOnTransform = true;

	/** 체력 회복 퍼센트 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Omega Settings", meta = (EditCondition = "bRestoreHealthOnTransform"))
	float HealthRestorePercent = 0.5f;

protected:
	// ======================
	// 메인 로직
	// ======================

	/** 어빌리티 실행 타입 결정 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void DetermineAndExecuteAction();

	/** 변신 실행 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void ExecuteTransform();

	/** 스틸 실행 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void ExecuteSteal(AActor* TargetPlayer);

	// ======================
	// 변신 관련 함수들
	// ======================

	/** 간단한 외형 변경 */
	UFUNCTION(BlueprintCallable, Category = "Transform")
	void ApplySimpleVisualChanges();

	/** 외형 변경 (Multicast) */
	UFUNCTION(NetMulticast, Reliable)
	void MulticastApplyVisualChanges();

	/** 스탯 강화 적용 */
	UFUNCTION(BlueprintCallable, Category = "Transform")
	void ApplyStatBoosts();

	/** 체력 회복 */
	UFUNCTION(BlueprintCallable, Category = "Transform")
	void RestoreHealth();

	// ======================
	// 스틸 관련 함수들
	// ======================

	/** 근처 스틸 가능한 오메가 플레이어 찾기 */
	UFUNCTION(BlueprintCallable, Category = "Steal")
	AActor* FindStealableOmegaPlayer();

	/** 스틸 가능한 상태인지 확인 */
	UFUNCTION(BlueprintCallable, Category = "Steal")
	bool CanStealFromPlayer(AActor* Player) const;

	/** 거리 체크 */
	UFUNCTION(BlueprintCallable, Category = "Steal")
	bool IsInStealRange(AActor* TargetPlayer) const;

	// ======================
	// 블루프린트 이벤트들
	// ======================

	/** 변신 성공 이벤트 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Omega Events")
	void OnTransformSucceeded();

	/** 스틸 성공 이벤트 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Omega Events")
	void OnStealSucceeded(AActor* StolenFromPlayer, AActor* StolenToPlayer);

	/** 실패 이벤트 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Omega Events")
	void OnActionFailed(const FString& Reason);

private:
	// ======================
	// 헬퍼 함수들
	// ======================

	/** 오메가 컴포넌트 가져오기 */
	USimpleOmegaComponent* GetOmegaComponent() const;

	/** 조건 확인 및 실패 이유 반환 */
	bool CheckBasicConditions(FString& OutFailureReason) const;
};