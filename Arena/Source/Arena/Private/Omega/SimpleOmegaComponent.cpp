// SimpleOmegaComponent.cpp
#include "Omega/SimpleOmegaComponent.h"

#include <AbilitySystemInterface.h>

#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ArenaGameplayTags.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h" // 추가!

USimpleOmegaComponent::USimpleOmegaComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(false); // GAS가 복제를 처리함

	// 기본값 설정
	StealCooldownDuration = 15.0f;
	InitialStealImmunityTime = 10.0f;
}

void USimpleOmegaComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// 태그 콜백 바인딩 (약간의 지연 후)
	FTimerHandle BindTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(BindTimerHandle, this, &USimpleOmegaComponent::BindTagCallbacks, 0.1f, false);
}

// ======================
// 기본 오메가 관리
// ======================

void USimpleOmegaComponent::ActivateOmega()
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC || !GetOwner()->HasAuthority()) return;

	// 이미 다른 플레이어가 오메가인지 확인
	if (AActor* CurrentOmega = GetCurrentOmegaPlayer(this))
	{
		if (CurrentOmega != GetOwner())
		{
			// 기존 오메가 해제
			if (USimpleOmegaComponent* OtherOmega = CurrentOmega->FindComponentByClass<USimpleOmegaComponent>())
			{
				OtherOmega->DeactivateOmega();
			}
		}
	}

	// 오메가 상태 태그 추가
	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	ASC->AddLooseGameplayTag(GameplayTags.State_Omega_Active);

	// 초기 면역 시간 설정 (타이머 사용)
	FTimerHandle ImmunityTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(ImmunityTimerHandle, [this]()
	{
		UAbilitySystemComponent* MyASC = GetASC();
		if (MyASC && IsOmega())
		{
			const FArenaGameplayTags& Tags = FArenaGameplayTags::Get();
			MyASC->AddLooseGameplayTag(Tags.State_Omega_Stealable);
		}
	}, InitialStealImmunityTime, false);

	UE_LOG(LogTemp, Warning, TEXT("%s became Omega!"), *GetOwner()->GetName());
}

void USimpleOmegaComponent::DeactivateOmega()
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC || !GetOwner()->HasAuthority()) return;

	// 오메가 관련 태그들 제거
	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	ASC->RemoveLooseGameplayTag(GameplayTags.State_Omega_Active);
	ASC->RemoveLooseGameplayTag(GameplayTags.State_Omega_Stealable);

	UE_LOG(LogTemp, Warning, TEXT("%s is no longer Omega"), *GetOwner()->GetName());
}

bool USimpleOmegaComponent::IsOmega() const
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC) return false;

	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	return ASC->HasMatchingGameplayTag(GameplayTags.State_Omega_Active);
}

bool USimpleOmegaComponent::CanBeStolen() const
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC) return false;

	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	return ASC->HasMatchingGameplayTag(GameplayTags.State_Omega_Stealable) && 
		   !ASC->HasMatchingGameplayTag(GameplayTags.Cooldown_Omega_Steal);
}

// ======================
// 스틸 관련 (간단 버전)
// ======================

void USimpleOmegaComponent::StartStealCooldown()
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC || !GetOwner()->HasAuthority()) return;

	// 스틸 가능 상태 제거
	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	ASC->RemoveLooseGameplayTag(GameplayTags.State_Omega_Stealable);

	// 쿨다운 태그 추가
	ASC->AddLooseGameplayTag(GameplayTags.Cooldown_Omega_Steal);

	// 쿨다운 타이머 (간단한 버전)
	FTimerHandle CooldownTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(CooldownTimerHandle, [this]()
	{
		UAbilitySystemComponent* MyASC = GetASC();
		if (MyASC)
		{
			const FArenaGameplayTags& Tags = FArenaGameplayTags::Get();
			MyASC->RemoveLooseGameplayTag(Tags.Cooldown_Omega_Steal);
		}
	}, StealCooldownDuration, false);
}

bool USimpleOmegaComponent::IsStealOnCooldown() const
{
	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC) return false;

	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();
	return ASC->HasMatchingGameplayTag(GameplayTags.Cooldown_Omega_Steal);
}

// ======================
// 전역 오메가 관리
// ======================

AActor* USimpleOmegaComponent::GetCurrentOmegaPlayer(const UObject* WorldContext)
{
	if (!WorldContext) return nullptr;

	UWorld* World = WorldContext->GetWorld();
	if (!World) return nullptr;

	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();

	// 모든 액터를 순회하며 오메가 상태 찾기
	for (TActorIterator<AActor> ActorItr(World); ActorItr; ++ActorItr)
	{
		AActor* Actor = *ActorItr;
		if (UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Actor))
		{
			if (ASC->HasMatchingGameplayTag(GameplayTags.State_Omega_Active))
			{
				return Actor;
			}
		}
	}

	return nullptr;
}

bool USimpleOmegaComponent::TransferOmegaTo(AActor* FromActor, AActor* ToActor)
{
	if (!FromActor || !ToActor) return false;

	USimpleOmegaComponent* FromOmega = FromActor->FindComponentByClass<USimpleOmegaComponent>();
	USimpleOmegaComponent* ToOmega = ToActor->FindComponentByClass<USimpleOmegaComponent>();

	if (!FromOmega || !ToOmega) return false;
	if (!FromOmega->IsOmega()) return false;

	// 기존 오메가 해제
	FromOmega->DeactivateOmega();
	FromOmega->StartStealCooldown();

	// 새로운 오메가 활성화
	ToOmega->ActivateOmega();

	UE_LOG(LogTemp, Warning, TEXT("Omega transferred from %s to %s"), 
		*FromActor->GetName(), *ToActor->GetName());

	return true;
}

// ======================
// 헬퍼 함수들
// ======================

UAbilitySystemComponent* USimpleOmegaComponent::GetASC() const
{
	if (AActor* Owner = GetOwner())
	{
		if (IAbilitySystemInterface* ASI = Cast<IAbilitySystemInterface>(Owner))
		{
			return ASI->GetAbilitySystemComponent();
		}
		
		// PlayerState에서 찾기 (PlayerCharacter의 경우)
		if (APawn* Pawn = Cast<APawn>(Owner))
		{
			if (APlayerState* PS = Pawn->GetPlayerState())
			{
				if (IAbilitySystemInterface* PSASI = Cast<IAbilitySystemInterface>(PS))
				{
					return PSASI->GetAbilitySystemComponent();
				}
			}
		}
	}
	return nullptr;
}

void USimpleOmegaComponent::BindTagCallbacks()
{
	if (bTagCallbacksBound) return;

	UAbilitySystemComponent* ASC = GetASC();
	if (!ASC) 
	{
		// ASC가 아직 준비되지 않았다면 다시 시도
		FTimerHandle RetryTimerHandle;
		GetWorld()->GetTimerManager().SetTimer(RetryTimerHandle, this, &USimpleOmegaComponent::BindTagCallbacks, 0.5f, false);
		return;
	}

	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();

	// 오메가 상태 태그 변화 감지
	ASC->RegisterGameplayTagEvent(GameplayTags.State_Omega_Active)
		.AddUObject(this, &USimpleOmegaComponent::OnOmegaTagChanged);

	bTagCallbacksBound = true;
	UE_LOG(LogTemp, Log, TEXT("Simple Omega tag callbacks bound for %s"), *GetOwner()->GetName());
}

void USimpleOmegaComponent::OnOmegaTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	bool bIsNowOmega = NewCount > 0;
	OnOmegaStateChanged.Broadcast(bIsNowOmega);
	
	UE_LOG(LogTemp, Log, TEXT("%s Omega state changed: %s"), 
		*GetOwner()->GetName(), bIsNowOmega ? TEXT("TRUE") : TEXT("FALSE"));
}