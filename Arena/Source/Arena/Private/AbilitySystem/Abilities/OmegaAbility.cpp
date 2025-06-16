// OmegaAbility.cpp
#include "AbilitySystem/Abilities/OmegaAbility.h"
#include "ArenaGameplayTags.h"
#include "Omega/SimpleOmegaComponent.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Omega/SimpleOmegaComponent.h"

UOmegaAbility::UOmegaAbility()
{
	UE_LOG(LogTemp, Warning, TEXT("OmegaAbility Constructor called"));
	
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;

	// 태그 설정 (새로운 API 사용)
	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	StartupInputTag = GameplayTags.InputTag_Omega_Transform;
	
	UE_LOG(LogTemp, Warning, TEXT("StartupInputTag set to: %s"), *StartupInputTag.ToString());
	UE_LOG(LogTemp, Warning, TEXT("InputTag_Omega_Transform from GameplayTags: %s"), 
		*GameplayTags.InputTag_Omega_Transform.ToString());
	
	// 새로운 방식으로 Asset Tags 설정
	FGameplayTagContainer AssetTags;
	AssetTags.AddTag(GameplayTags.Abilities_Omega_Transform);
	SetAssetTags(AssetTags);

	// 스틸 쿨다운 중일 때는 사용 불가
	ActivationBlockedTags.AddTag(GameplayTags.Cooldown_Omega_Steal);

	// 기본값 설정
	StealRange = 300.0f;
	ScaleMultiplier = 1.3f;
	SpeedMultiplier = 1.5f;
	bRestoreHealthOnTransform = true;
	HealthRestorePercent = 0.5f;
}

void UOmegaAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                   const FGameplayAbilityActorInfo* ActorInfo,
                                   const FGameplayAbilityActivationInfo ActivationInfo,
                                   const FGameplayEventData* TriggerEventData)
{
	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 기본 조건 확인
	FString FailureReason;
	if (!CheckBasicConditions(FailureReason))
	{
		OnActionFailed(FailureReason);
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	// 상황에 맞는 액션 실행
	DetermineAndExecuteAction();
	
	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

bool UOmegaAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo,
                                       const FGameplayTagContainer* SourceTags,
                                       const FGameplayTagContainer* TargetTags,
                                       FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	// 기본 조건 확인
	FString FailureReason;
	return CheckBasicConditions(FailureReason);
}

// ======================
// 메인 로직
// ======================

void UOmegaAbility::DetermineAndExecuteAction()
{
	USimpleOmegaComponent* MyOmegaComp = GetOmegaComponent();
	if (!MyOmegaComp) 
	{
		OnActionFailed(TEXT("No Omega Component"));
		return;
	}

	// 내가 이미 오메가인가?
	if (MyOmegaComp->IsOmega())
	{
		OnActionFailed(TEXT("Already Omega"));
		return;
	}

	// 근처에 스틸 가능한 오메가 플레이어가 있는가?
	AActor* StealTarget = FindStealableOmegaPlayer();
	if (StealTarget)
	{
		// 스틸 실행
		ExecuteSteal(StealTarget);
	}
	else
	{
		// 현재 오메가 플레이어가 있는지 확인
		AActor* CurrentOmega = USimpleOmegaComponent::GetCurrentOmegaPlayer(this);
		if (CurrentOmega)
		{
			// 오메가 플레이어는 있지만 스틸할 수 없는 상황
			OnActionFailed(FString::Printf(TEXT("Omega player too far or immune (%.1f units away)"), 
				FVector::Dist(GetAvatarActorFromActorInfo()->GetActorLocation(), 
							 CurrentOmega->GetActorLocation())));
		}
		else
		{
			// 아무도 오메가가 아니면 변신
			ExecuteTransform();
		}
	}
}

void UOmegaAbility::ExecuteTransform()
{
	USimpleOmegaComponent* MyOmegaComp = GetOmegaComponent();
	if (!MyOmegaComp) return;

	// 오메가 상태 활성화
	MyOmegaComp->ActivateOmega();

	// 외형 변경
	ApplySimpleVisualChanges();

	// 스탯 강화
	ApplyStatBoosts();

	// 체력 회복
	if (bRestoreHealthOnTransform)
	{
		RestoreHealth();
	}

	UE_LOG(LogTemp, Warning, TEXT("%s transformed to Omega!"), 
		*GetAvatarActorFromActorInfo()->GetName());

	OnTransformSucceeded();
}

void UOmegaAbility::ExecuteSteal(AActor* TargetPlayer)
{
	if (!TargetPlayer) return;

	AActor* MyActor = GetAvatarActorFromActorInfo();
	if (!MyActor) return;

	// 실제 오메가 이전 실행
	bool bSuccess = USimpleOmegaComponent::TransferOmegaTo(TargetPlayer, MyActor);
	
	if (bSuccess)
	{
		// 외형 변경 (변신과 동일)
		ApplySimpleVisualChanges();
		
		// 스탯 강화
		ApplyStatBoosts();

		// 체력 회복
		if (bRestoreHealthOnTransform)
		{
			RestoreHealth();
		}

		OnStealSucceeded(TargetPlayer, MyActor);
		UE_LOG(LogTemp, Warning, TEXT("%s successfully stole Omega from %s!"), 
			*MyActor->GetName(), *TargetPlayer->GetName());
	}
	else
	{
		OnActionFailed(TEXT("Transfer failed"));
		UE_LOG(LogTemp, Error, TEXT("Failed to transfer Omega from %s to %s"), 
			*TargetPlayer->GetName(), *MyActor->GetName());
	}
}

// ======================
// 변신 관련 함수들
// ======================

void UOmegaAbility::ApplySimpleVisualChanges()
{
	ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
	if (!Character || !Character->GetMesh()) return;

	// Multicast RPC로 모든 클라이언트에서 실행
	MulticastApplyVisualChanges();
}

void UOmegaAbility::MulticastApplyVisualChanges_Implementation()
{
	ACharacter* Character = Cast<ACharacter>(GetAvatarActorFromActorInfo());
	if (!Character || !Character->GetMesh()) return;

	// 크기 변경 (모든 클라이언트에서 실행)
	FVector CurrentScale = Character->GetMesh()->GetRelativeScale3D();
	Character->GetMesh()->SetRelativeScale3D(CurrentScale * ScaleMultiplier);

	// 콜라이더도 함께 조정
	UCapsuleComponent* Capsule = Character->GetCapsuleComponent();
	if (Capsule)
	{
		float CurrentRadius = Capsule->GetScaledCapsuleRadius();
		float CurrentHeight = Capsule->GetScaledCapsuleHalfHeight();
		
		Capsule->SetCapsuleRadius(CurrentRadius * ScaleMultiplier);
		Capsule->SetCapsuleHalfHeight(CurrentHeight * ScaleMultiplier);
	}

	UE_LOG(LogTemp, Log, TEXT("Applied visual changes (scale: %.2fx) on %s"), 
		ScaleMultiplier, GetAvatarActorFromActorInfo()->HasAuthority() ? TEXT("Server") : TEXT("Client"));
}

void UOmegaAbility::ApplyStatBoosts()
{
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC) return;

	const UAttributeSet* ConstAttributeSet = ASC->GetAttributeSet(UBaseAttributeSet::StaticClass());
	UBaseAttributeSet* AttributeSet = const_cast<UBaseAttributeSet*>(Cast<UBaseAttributeSet>(ConstAttributeSet));
	if (!AttributeSet) return;

	// 스피드 증가 (간단한 직접 수정 버전)
	float CurrentSpeed = AttributeSet->GetSpeed();
	float NewSpeed = CurrentSpeed * SpeedMultiplier;
	AttributeSet->SetSpeed(NewSpeed);

	// Output도 증가
	float CurrentOutput = AttributeSet->GetOutput();
	float NewOutput = CurrentOutput * SpeedMultiplier;  // 같은 배율 사용
	AttributeSet->SetOutput(NewOutput);

	UE_LOG(LogTemp, Log, TEXT("Applied stat boosts - Speed: %.1f -> %.1f, Output: %.1f -> %.1f"), 
		CurrentSpeed, NewSpeed, CurrentOutput, NewOutput);
}

void UOmegaAbility::RestoreHealth()
{
	UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();
	if (!ASC) return;

	const UAttributeSet* ConstAttributeSet = ASC->GetAttributeSet(UBaseAttributeSet::StaticClass());
	UBaseAttributeSet* AttributeSet = const_cast<UBaseAttributeSet*>(Cast<UBaseAttributeSet>(ConstAttributeSet));
	if (!AttributeSet) return;

	float CurrentDurability = AttributeSet->GetDurability();
	float MaxDurability = AttributeSet->GetMaxDurability();
	float RestoreAmount = MaxDurability * HealthRestorePercent;
	float NewDurability = FMath::Min(CurrentDurability + RestoreAmount, MaxDurability);

	AttributeSet->SetDurability(NewDurability);

	UE_LOG(LogTemp, Log, TEXT("Restored health: %.1f -> %.1f (%.1f%%)"), 
		CurrentDurability, NewDurability, HealthRestorePercent * 100.0f);
}

// ======================
// 스틸 관련 함수들
// ======================

AActor* UOmegaAbility::FindStealableOmegaPlayer()
{
	AActor* MyActor = GetAvatarActorFromActorInfo();
	if (!MyActor) return nullptr;

	// 현재 오메가 플레이어 찾기
	AActor* CurrentOmegaPlayer = USimpleOmegaComponent::GetCurrentOmegaPlayer(this);
	if (!CurrentOmegaPlayer || CurrentOmegaPlayer == MyActor)
	{
		return nullptr; // 오메가 플레이어가 없거나 내가 오메가
	}

	// 거리 체크
	if (!IsInStealRange(CurrentOmegaPlayer))
	{
		return nullptr; // 너무 멀음
	}

	// 스틸 가능한 상태인지 체크
	if (!CanStealFromPlayer(CurrentOmegaPlayer))
	{
		return nullptr; // 스틸 불가능한 상태
	}

	return CurrentOmegaPlayer;
}

bool UOmegaAbility::CanStealFromPlayer(AActor* Player) const
{
	if (!Player) return false;

	USimpleOmegaComponent* OmegaComp = Player->FindComponentByClass<USimpleOmegaComponent>();
	if (!OmegaComp) return false;

	// 오메가 상태이면서 스틸 가능한 상태여야 함
	return OmegaComp->IsOmega() && OmegaComp->CanBeStolen();
}

bool UOmegaAbility::IsInStealRange(AActor* TargetPlayer) const
{
	AActor* MyActor = GetAvatarActorFromActorInfo();
	if (!MyActor || !TargetPlayer) return false;

	float Distance = FVector::Dist(MyActor->GetActorLocation(), TargetPlayer->GetActorLocation());
	return Distance <= StealRange;
}

// ======================
// 헬퍼 함수들
// ======================

USimpleOmegaComponent* UOmegaAbility::GetOmegaComponent() const
{
	AActor* Avatar = GetAvatarActorFromActorInfo();
	if (Avatar)
	{
		return Avatar->FindComponentByClass<USimpleOmegaComponent>();
	}
	return nullptr;
}

bool UOmegaAbility::CheckBasicConditions(FString& OutFailureReason) const
{
	AActor* MyActor = GetAvatarActorFromActorInfo();
	if (!MyActor)
	{
		OutFailureReason = TEXT("No valid avatar");
		return false;
	}

	USimpleOmegaComponent* MyOmegaComp = GetOmegaComponent();
	if (!MyOmegaComp)
	{
		OutFailureReason = TEXT("No Omega Component");
		return false;
	}

	// 스틸 쿨다운 중인지 확인
	if (MyOmegaComp->IsStealOnCooldown())
	{
		OutFailureReason = TEXT("Steal on cooldown");
		return false;
	}

	return true;
}