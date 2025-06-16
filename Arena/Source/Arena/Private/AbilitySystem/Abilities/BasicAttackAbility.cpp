#include "AbilitySystem/Abilities/BasicAttackAbility.h"
#include "ArenaGameplayTags.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "AbilitySystem/AbilityTasks/TargetDataUnderMouse.h"
#include "Actor/SimpleBullet.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "Player/BasePlayerState.h"

UBasicAttackAbility::UBasicAttackAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;

	StartupInputTag = FArenaGameplayTags::Get().InputTag_LMB;
	AbilityTags.AddTag(FArenaGameplayTags::Get().Abilities_Attack_Basic);
	DamageType = FArenaGameplayTags::Get().Damage_Physical;
	
	bHasBlueprintActivate = true;
	bHasBlueprintActivateFromEvent = true;
}

void UBasicAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
										  const FGameplayAbilityActorInfo* ActorInfo,
										  const FGameplayAbilityActivationInfo ActivationInfo,
										  const FGameplayEventData* TriggerEventData)
{
	bHasProcessedTargetData = false;
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	RequestTargetData();
}

void UBasicAttackAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                     const FGameplayAbilityActorInfo* ActorInfo,
                                     const FGameplayAbilityActivationInfo ActivationInfo,
                                     bool bReplicateEndAbility,
                                     bool bWasCancelled)
{
	if (CurrentTargetDataTask && IsValid(CurrentTargetDataTask))
	{
		CurrentTargetDataTask->EndTask();
		CurrentTargetDataTask = nullptr;
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UBasicAttackAbility::RequestTargetData()
{
	// 이전 Task 정리
	if (CurrentTargetDataTask && IsValid(CurrentTargetDataTask))
	{
		CurrentTargetDataTask->ValidData.RemoveDynamic(this, &UBasicAttackAbility::OnTargetDataReady);
		CurrentTargetDataTask->EndTask();
		CurrentTargetDataTask = nullptr;
	}

	// 새 Task 생성 및 바인딩
	CurrentTargetDataTask = UTargetDataUnderMouse::CreateTargetDataUnderMouse(this);
	if (CurrentTargetDataTask)
	{
		CurrentTargetDataTask->ValidData.AddDynamic(this, &UBasicAttackAbility::OnTargetDataReady);
		CurrentTargetDataTask->ReadyForActivation();
	}
}

void UBasicAttackAbility::OnTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	// 중복 실행 방지
	if (bHasProcessedTargetData) return;
	bHasProcessedTargetData = true;

	// TargetData에서 위치 추출
	FVector TargetLocation = FVector::ZeroVector;
	if (TargetDataHandle.Num() > 0)
	{
		const FHitResult* HitResult = TargetDataHandle.Get(0)->GetHitResult();
		if (HitResult && HitResult->bBlockingHit)
		{
			TargetLocation = HitResult->ImpactPoint;
		}
		else if (ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo()))
		{
			TargetLocation = Character->GetActorLocation() + Character->GetActorForwardVector() * 1000.0f;
		}
	}
	
	// Task 정리
	if (CurrentTargetDataTask && IsValid(CurrentTargetDataTask))
	{
		CurrentTargetDataTask->ValidData.RemoveDynamic(this, &UBasicAttackAbility::OnTargetDataReady);
		CurrentTargetDataTask->EndTask();
		CurrentTargetDataTask = nullptr;
	}
	
	// 위치 캐싱 후 공격 시퀀스 시작
	CachedTargetLocation = TargetLocation;
	StartAttackSequence(TargetLocation);
}

void UBasicAttackAbility::SpawnProjectile(const FVector& TargetLocation)
{
	// 서버에서만 실행
	if (!GetAvatarActorFromActorInfo()->HasAuthority()) return;

	FVector FinalTargetLocation = !CachedTargetLocation.IsZero() ? CachedTargetLocation : TargetLocation;
	FireBulletAtTarget(FinalTargetLocation);
}

void UBasicAttackAbility::FireBulletAtTarget(const FVector& TargetLocation)
{
	if (!BulletClass) return;

	ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
	if (!Character) return;

	// 총알 생성 위치 및 방향 계산
	FVector MuzzleLocation = GetMuzzleLocation(Character);
	FVector Direction = (TargetLocation - MuzzleLocation);
	Direction.Z = 0.0f;
	Direction.Normalize();

	FTransform SpawnTransform;
	SpawnTransform.SetLocation(MuzzleLocation);
	SpawnTransform.SetRotation(Direction.Rotation().Quaternion());

	// DamageEffectParams 설정
	FDamageEffectParams DamageParams;
	DamageParams.WorldContextObject = this;
	DamageParams.DamageGameplayEffectClass = DamageGameplayEffectClass;
	DamageParams.SourceAbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();

	// Output 스탯 기반 데미지 계산
	float BaseDamage = 10.0f;
	if (APlayerCharacter* PlayerChar = Cast<APlayerCharacter>(Character))
	{
		if (ABasePlayerState* PlayerState = PlayerChar->GetPlayerState<ABasePlayerState>())
		{
			if (UBaseAttributeSet* BaseAS = PlayerState->GetBaseAttributeSet())
			{
				BaseDamage = BaseAS->GetOutput();
			}
		}
	}

	DamageParams.BaseDamage = BaseDamage;
	DamageParams.AbilityLevel = 1.0f;
	DamageParams.DamageType = DamageType;

	// 총알 생성
	ASimpleBullet* Bullet = GetWorld()->SpawnActorDeferred<ASimpleBullet>(
		BulletClass,
		SpawnTransform,
		GetOwningActorFromActorInfo(),
		Cast<APawn>(GetOwningActorFromActorInfo()),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

	if (Bullet)
	{
		Bullet->DamageEffectParams = DamageParams;
		Bullet->FinishSpawning(SpawnTransform);
	}
}

FVector UBasicAttackAbility::GetMuzzleLocation(ACharacter* Character)
{
	if (!Character) return FVector::ZeroVector;

	// 소켓 기반 위치 계산
	if (USkeletalMeshComponent* Mesh = Character->GetMesh())
	{
		if (Mesh->DoesSocketExist(FName("WeaponSocket")))
			return Mesh->GetSocketLocation(FName("WeaponSocket"));
		
		if (Mesh->DoesSocketExist(FName("RightHandSocket")))
			return Mesh->GetSocketLocation(FName("RightHandSocket"));
	}

	// 기본 위치 계산
	FVector CharacterLocation = Character->GetActorLocation();
	FVector ForwardOffset = Character->GetActorForwardVector() * 100.0f;
	FVector HeightOffset = FVector(0, 0, 50.0f);

	return CharacterLocation + ForwardOffset + HeightOffset;
}

void UBasicAttackAbility::FinishAttack()
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}