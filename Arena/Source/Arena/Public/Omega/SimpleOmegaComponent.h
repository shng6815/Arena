#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SimpleOmegaComponent.generated.h"

class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOmegaStateChanged, bool, bIsOmega);

/**
 * 프로토타입용 간단한 오메가 상태 관리 컴포넌트
 * GAS 태그 기반으로 오메가 상태만 관리
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ARENA_API USimpleOmegaComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USimpleOmegaComponent();

	// ======================
	// 기본 오메가 관리
	// ======================

	/** 오메가 상태로 변환 (GAS 태그 추가) */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void ActivateOmega();

	/** 오메가 상태 해제 (GAS 태그 제거) */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void DeactivateOmega();

	/** 현재 오메가 상태인지 확인 (태그 기반) */
	UFUNCTION(BlueprintPure, Category = "Omega")
	bool IsOmega() const;

	/** 오메가를 뺏을 수 있는 상태인지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega")
	bool CanBeStolen() const;

	// ======================
	// 스틸 관련 (간단 버전)
	// ======================

	/** 스틸 쿨다운 시작 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	void StartStealCooldown();

	/** 스틸 쿨다운 중인지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega")
	bool IsStealOnCooldown() const;

	// ======================
	// 전역 오메가 관리
	// ======================

	/** 현재 오메가 플레이어 찾기 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	static AActor* GetCurrentOmegaPlayer(const UObject* WorldContext);

	/** 오메가를 다른 플레이어에게 이전 */
	UFUNCTION(BlueprintCallable, Category = "Omega")
	static bool TransferOmegaTo(AActor* FromActor, AActor* ToActor);

	// ======================
	// 델리게이트
	// ======================

	UPROPERTY(BlueprintAssignable, Category = "Omega")
	FOnOmegaStateChanged OnOmegaStateChanged;

protected:
	virtual void BeginPlay() override;

	// ======================
	// 설정값들 (간단하게)
	// ======================

	/** 스틸 쿨다운 시간 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Omega Settings")
	float StealCooldownDuration = 15.0f;

	/** 초기 스틸 면역 시간 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Omega Settings")
	float InitialStealImmunityTime = 10.0f;

private:
	// ======================
	// 헬퍼 함수들
	// ======================

	/** AbilitySystemComponent 가져오기 */
	UAbilitySystemComponent* GetASC() const;

	/** 태그 변화 감지를 위한 콜백 바인딩 */
	void BindTagCallbacks();

	/** 오메가 상태 태그 변화 콜백 */
	UFUNCTION()
	void OnOmegaTagChanged(const FGameplayTag CallbackTag, int32 NewCount);

	/** 태그 콜백이 바인딩되었는지 여부 */
	bool bTagCallbacksBound = false;
};
