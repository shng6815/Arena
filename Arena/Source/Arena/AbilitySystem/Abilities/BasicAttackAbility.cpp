#include "BasicAttackAbility.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"

UBasicAttackAbility::UBasicAttackAbility()
{
	// 어빌리티 기본 설정
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;

	// 일단 하드코딩으로 태그 설정 (나중에 리팩토링)
	AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Attack.Basic")));
	StartupInputTag = FGameplayTag::RequestGameplayTag(FName("InputTag.LMB"));
}

void UBasicAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                          const FGameplayAbilityActorInfo* ActorInfo,
                                          const FGameplayAbilityActivationInfo ActivationInfo,
                                          const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	// 연속 공격 시작
	bIsAttacking = true;
	PerformAttack(); // 첫 번째 공격 즉시 실행

	// 타이머로 연속 공격 설정
	if (AttackRate > 0.0f)
	{
		float AttackInterval = 1.0f / AttackRate;
		GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle,
		                                       this,
		                                       &UBasicAttackAbility::PerformAttack,
		                                       AttackInterval,
		                                       true); // 반복
	}
}

void UBasicAttackAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                     const FGameplayAbilityActorInfo* ActorInfo,
                                     const FGameplayAbilityActivationInfo ActivationInfo,
                                     bool bReplicateEndAbility,
                                     bool bWasCancelled)
{
	// 공격 중단
	bIsAttacking = false;

	// 타이머 정리
	if (AttackTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UBasicAttackAbility::InputReleased(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo,
                                        const FGameplayAbilityActivationInfo ActivationInfo)
{
	// 마우스 뗐을 때 - 어빌리티 종료
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UBasicAttackAbility::PerformAttack()
{
	if (!bIsAttacking)
	{
		return;
	}

	// 캐릭터 가져오기
	ACharacter* Character = CastChecked<ACharacter>(GetAvatarActorFromActorInfo());
	if (!Character)
	{
		return;
	}

	// 공격 범위 설정
	FVector StartLocation = Character->GetActorLocation();
	FVector ForwardVector = Character->GetActorForwardVector();
	FVector EndLocation = StartLocation + ForwardVector * AttackRange;

	// 구체 트레이스로 적 탐지
	TArray<FHitResult> HitResults;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(Character);

	bool bHit = UKismetSystemLibrary::SphereTraceMulti(
		GetWorld(),
		StartLocation,
		EndLocation,
		AttackRadius,
		UEngineTypes::ConvertToTraceType(ECC_Pawn),
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForOneFrame, // 디버그용으로 일단 표시
		HitResults,
		true
	);

	// 맞은 대상 처리
	if (bHit)
	{
		for (const FHitResult& Hit : HitResults)
		{
			if (AActor* HitActor = Hit.GetActor())
			{
				// 일단 간단하게 로그만 출력
				UE_LOG(LogTemp, Warning, TEXT("Hit Actor: %s"), *HitActor->GetName());

				// 나중에 데미지 시스템 추가
				// ApplyDamageToTarget(HitActor);
			}
		}
	}

	// 공격 애니메이션/이펙트는 나중에 추가
	UE_LOG(LogTemp, Log, TEXT("Performing Attack!"));
}
