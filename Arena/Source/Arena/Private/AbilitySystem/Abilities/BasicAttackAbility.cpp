#include "AbilitySystem/Abilities/BasicAttackAbility.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "Actor/SimpleBullet.h"
#include "Character/PlayerCharacter.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"

UBasicAttackAbility::UBasicAttackAbility()
{
	// 어빌리티 기본 설정
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
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
	FireBullet(); // 첫 번째 공격 즉시 실행

	UE_LOG(LogTemp, Warning, TEXT("Active Ability"));

	// 타이머로 연속 공격 설정
	if (AttackRate > 0.0f)
	{
		float AttackInterval = 1.0f / AttackRate;
		GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle,
		                                       this,
		                                       &UBasicAttackAbility::FireBullet,
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
	if (HasAuthority(&ActivationInfo) && AttackTimerHandle.IsValid())
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

void UBasicAttackAbility::FireBullet()
{
    if (!BulletClass)
    {
        UE_LOG(LogTemp, Error, TEXT("BulletClass not set!"));
        return;
    }

    ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
    if (!Character)
    {
        return;
    }

    // 총구 위치와 발사 방향 계산
    FVector MuzzleLocation = GetMuzzleLocation(Character);
    FVector FireDirection = GetFireDirection(Character);

    // 발사 Transform 설정
    FRotator FireRotation = FireDirection.Rotation();
    FTransform SpawnTransform;
    SpawnTransform.SetLocation(MuzzleLocation);
    SpawnTransform.SetRotation(FireRotation.Quaternion());

    // 간단한 스폰 (Deferred 필요 없음)
    ASimpleBullet* Bullet = GetWorld()->SpawnActor<ASimpleBullet>(
        BulletClass,
        SpawnTransform,
        FActorSpawnParameters()
    );

    if (Bullet)
    {
        // 발사자 설정
        Bullet->SetOwner(GetAvatarActorFromActorInfo());
        
        UE_LOG(LogTemp, Log, TEXT("Simple bullet fired!"));
    }
}

FVector UBasicAttackAbility::GetMuzzleLocation(ACharacter* Character)
{
    if (!Character) return FVector::ZeroVector;
    
    // 간단하게 캐릭터 앞쪽에서 발사
    FVector CharacterLocation = Character->GetActorLocation();
    FVector ForwardOffset = Character->GetActorForwardVector() * 100.0f; // 1m 앞
    FVector HeightOffset = FVector(0, 0, 50.0f); // 50cm 위
    
    return CharacterLocation + ForwardOffset + HeightOffset;
}

FVector UBasicAttackAbility::GetFireDirection(ACharacter* Character)
{
    if (APlayerCharacter* PlayerChar = Cast<APlayerCharacter>(Character))
    {
        // Look System 활용
        float SpineRotation = PlayerChar->GetSpineRotation();
        float BodyYaw = Character->GetActorRotation().Yaw;
        float TotalYaw = BodyYaw + SpineRotation;
        
        return FVector(FMath::Cos(FMath::DegreesToRadians(TotalYaw)), 
                      FMath::Sin(FMath::DegreesToRadians(TotalYaw)), 
                      0.0f);
    }
    
    return Character->GetActorForwardVector();
}