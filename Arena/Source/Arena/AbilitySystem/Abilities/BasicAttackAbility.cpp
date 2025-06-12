#include "BasicAttackAbility.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"

UBasicAttackAbility::UBasicAttackAbility()
{
	// 어빌리티 기본 설정
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}

void UBasicAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                          const FGameplayAbilityActorInfo* ActorInfo,
                                          const FGameplayAbilityActivationInfo ActivationInfo,
                                          const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (!HasAuthority(&ActivationInfo)) return;
	
	// 연속 공격 시작
	bIsAttacking = true;
	PerformAttack(); // 첫 번째 공격 즉시 실행

	UE_LOG(LogTemp, Warning, TEXT("Active Ability"));

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
		UE_LOG(LogTemp, Warning, TEXT("End Ability"));
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

	// 캐릭터가 바라보는 방향으로 공격! (Look System 기반)
	FVector AttackDirection = GetAttackDirection(Character);
	if (AttackDirection.IsNearlyZero())
	{
		UE_LOG(LogTemp, Warning, TEXT("Attack direction is zero, using forward vector"));
		AttackDirection = Character->GetActorForwardVector();
	}

	// 공격 범위 설정
	FVector StartLocation = Character->GetActorLocation();
	FVector EndLocation = StartLocation + AttackDirection * AttackRange;

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
		EDrawDebugTrace::ForDuration, // 디버그용으로 일단 표시
		HitResults,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		3.0f
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
	UE_LOG(LogTemp, Log, TEXT("Performing Attack in direction: %s"), *AttackDirection.ToString());

}

FVector UBasicAttackAbility::GetAttackDirection(ACharacter* Character)
{
	if (APlayerCharacter* PlayerChar = Cast<APlayerCharacter>(Character))
	{
		// 캐릭터가 실제로 바라보는 방향 (몸체 + 척추)
		float SpineRotation = PlayerChar->GetSpineRotation();
		float BodyYaw = Character->GetActorRotation().Yaw;
		float TotalYaw = BodyYaw + SpineRotation;
        
		return FVector(FMath::Cos(FMath::DegreesToRadians(TotalYaw)), 
					  FMath::Sin(FMath::DegreesToRadians(TotalYaw)), 
					  0.0f);
	}
    
	// AI나 다른 캐릭터는 Forward 사용
	return Character->GetActorForwardVector();
}