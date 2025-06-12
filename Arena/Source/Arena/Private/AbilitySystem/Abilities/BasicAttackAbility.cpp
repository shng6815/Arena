#include "AbilitySystem/Abilities/BasicAttackAbility.h"
#include "AbilitySystem/AbilityTasks/TargetDataUnderMouse.h"
#include "Actor/SimpleBullet.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"

UBasicAttackAbility::UBasicAttackAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated; // 다시 ServerInitiated!
}

void UBasicAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                          const FGameplayAbilityActorInfo* ActorInfo,
                                          const FGameplayAbilityActivationInfo ActivationInfo,
                                          const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	bIsAttacking = true;

	// AURA 스타일 Target Data Task 생성
	UTargetDataUnderMouse* TargetDataTask = UTargetDataUnderMouse::CreateTargetDataUnderMouse(this);
	TargetDataTask->ValidData.AddDynamic(this, &UBasicAttackAbility::OnTargetDataReady);
	TargetDataTask->ReadyForActivation();

	UE_LOG(LogTemp, Warning, TEXT("BasicAttack Activated - Waiting for target data"));
}

void UBasicAttackAbility::OnTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	UE_LOG(LogTemp, Warning, TEXT("Target Data Ready!"));

	if (TargetDataHandle.Num() > 0)
	{
		// 클라이언트에서 보낸 커서 위치 받기
		const FHitResult* HitResult = TargetDataHandle.Get(0)->GetHitResult();
		if (HitResult && HitResult->bBlockingHit)
		{
			CachedTargetLocation = HitResult->ImpactPoint;
		}
		else
		{
			// 히트가 없으면 캐릭터 앞쪽으로 기본 설정
			ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
			if (Character)
			{
				CachedTargetLocation = Character->GetActorLocation() + Character->GetActorForwardVector() * 1000.0f;
			}
		}

		// 첫 번째 공격 즉시 실행
		FireBulletAtTarget(CachedTargetLocation);

		// 연속 공격 타이머 설정
		if (AttackRate > 0.0f && bIsAttacking)
		{
			float AttackInterval = 1.0f / AttackRate;
			GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle,
			                                       [this]() { 
				                                       if (bIsAttacking) 
					                                       FireBulletAtTarget(CachedTargetLocation); 
			                                       },
			                                       AttackInterval,
			                                       true);
		}
	}
}

void UBasicAttackAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                     const FGameplayAbilityActorInfo* ActorInfo,
                                     const FGameplayAbilityActivationInfo ActivationInfo,
                                     bool bReplicateEndAbility,
                                     bool bWasCancelled)
{
	bIsAttacking = false;

	if (HasAuthority(&ActivationInfo) && AttackTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
		UE_LOG(LogTemp, Warning, TEXT("BasicAttack Ended"));
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UBasicAttackAbility::InputReleased(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo,
                                        const FGameplayAbilityActivationInfo ActivationInfo)
{
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UBasicAttackAbility::FireBulletAtTarget(const FVector& TargetLocation)
{
	if (!BulletClass) return;

	ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
	if (!Character) return;

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
		UE_LOG(LogTemp, Log, TEXT("Bullet fired at target location!"));
	}
}

FVector UBasicAttackAbility::GetMuzzleLocation(ACharacter* Character)
{
	if (!Character) return FVector::ZeroVector;
	
	FVector CharacterLocation = Character->GetActorLocation();
	FVector ForwardOffset = Character->GetActorForwardVector() * 100.0f;
	FVector HeightOffset = FVector(0, 0, 50.0f);
	
	return CharacterLocation + ForwardOffset + HeightOffset;
}