#include "AbilitySystem/Abilities/BasicAttackAbility.h"

#include "ArenaGameplayTags.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "AbilitySystem/AbilityTasks/TargetDataUnderMouse.h"
#include "Actor/SimpleBullet.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"

UBasicAttackAbility::UBasicAttackAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;

	StartupInputTag = FArenaGameplayTags::Get().InputTag_LMB;
	AbilityTags.AddTag(FArenaGameplayTags::Get().Abilities_Attack_Basic);
}

void UBasicAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                          const FGameplayAbilityActorInfo* ActorInfo,
                                          const FGameplayAbilityActivationInfo ActivationInfo,
                                          const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	bIsAttacking = true;

	// 첫 번째 공격을 위한 TargetData 요청
	RequestNextAttack();
}

void UBasicAttackAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                     const FGameplayAbilityActorInfo* ActorInfo,
                                     const FGameplayAbilityActivationInfo ActivationInfo,
                                     bool bReplicateEndAbility,
                                     bool bWasCancelled)
{
	bIsAttacking = false;

	// 타이머 정리
	if (HasAuthority(&ActivationInfo) && AttackTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	}

	// 현재 TargetDataTask 정리
	if (CurrentTargetDataTask)
	{
		CurrentTargetDataTask->EndTask();
		CurrentTargetDataTask = nullptr;
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UBasicAttackAbility::InputReleased(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo,
                                        const FGameplayAbilityActivationInfo ActivationInfo)
{
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UBasicAttackAbility::OnTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	FVector TargetLocation = FVector::ZeroVector;

	if (TargetDataHandle.Num() > 0)
	{
		// 현재 커서 위치 받기
		const FHitResult* HitResult = TargetDataHandle.Get(0)->GetHitResult();
		if (HitResult && HitResult->bBlockingHit)
		{
			TargetLocation = HitResult->ImpactPoint;
		}
		else
		{
			// 히트가 없으면 캐릭터 앞쪽으로 기본 설정
			ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
			if (Character)
			{
				TargetLocation = Character->GetActorLocation() + Character->GetActorForwardVector() * 1000.0f;
			}
		}

		// 현재 위치로 총알 발사
		FireBulletAtTarget(TargetLocation);
	}

	// 현재 TargetDataTask 정리
	CurrentTargetDataTask = nullptr;

	// 연속 공격이 활성화되어 있으면 다음 공격 예약
	if (bIsAttacking && AttackRate > 0.0f)
	{
		float AttackInterval = 1.0f / AttackRate;
		GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle,
		                                       [this]()
		                                       {
			                                       if (bIsAttacking)
			                                       {
				                                       // 다음 공격을 위한 새로운 TargetData 요청!
				                                       RequestNextAttack();
			                                       }
		                                       },
		                                       AttackInterval,
		                                       false); // 한 번만 실행
	}
}

void UBasicAttackAbility::RequestNextAttack()
{
	if (!bIsAttacking)
	{
		return;
	}

	// 이전 TargetDataTask가 있으면 정리
	if (CurrentTargetDataTask)
	{
		CurrentTargetDataTask->EndTask();
	}

	// 새로운 TargetData 요청
	CurrentTargetDataTask = UTargetDataUnderMouse::CreateTargetDataUnderMouse(this);
	CurrentTargetDataTask->ValidData.AddDynamic(this, &UBasicAttackAbility::OnTargetDataReady);
	CurrentTargetDataTask->ReadyForActivation();
}

void UBasicAttackAbility::FireBulletAtTarget(const FVector& TargetLocation)
{
	if (!BulletClass)
	{
		return;
	}

	ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
	if (!Character)
	{
		return;
	}

	// 머즐 위치에서 타겟 위치로의 방향 계산
	FVector MuzzleLocation = GetMuzzleLocation(Character);
	FVector Direction = (TargetLocation - MuzzleLocation);
	Direction.Z = 0.0f; // 수평 발사
	Direction.Normalize();

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(MuzzleLocation);
	SpawnTransform.SetRotation(Direction.Rotation().Quaternion());

	ASimpleBullet* Bullet = GetWorld()->SpawnActor<ASimpleBullet>(
		BulletClass, SpawnTransform, FActorSpawnParameters());

	if (Bullet)
	{
		Bullet->SetOwner(GetAvatarActorFromActorInfo());

		// 데미지 설정 (Output 어트리뷰트 기반)
		if (UBaseAttributeSet* BaseAS = Cast<UBaseAttributeSet>(
			GetAbilitySystemComponentFromActorInfo()->GetAvatarActor()->GetComponentByClass(
				UBaseAttributeSet::StaticClass())))
		{
			Bullet->BaseDamage = BaseAS->GetOutput(); // 공격력 = Output 스탯
		}
	}
}

FVector UBasicAttackAbility::GetMuzzleLocation(ACharacter* Character)
{
	if (!Character)
	{
		return FVector::ZeroVector;
	}

	FVector CharacterLocation = Character->GetActorLocation();
	FVector ForwardOffset = Character->GetActorForwardVector() * 100.0f;
	FVector HeightOffset = FVector(0, 0, 50.0f);

	return CharacterLocation + ForwardOffset + HeightOffset;
}
