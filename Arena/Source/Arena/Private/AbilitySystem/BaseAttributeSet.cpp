// BaseAttributeSet.cpp
#include "AbilitySystem/BaseAttributeSet.h"
#include "ArenaGameplayTags.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interaction/CombatInterface.h"
#include "Net/UnrealNetwork.h"

UBaseAttributeSet::UBaseAttributeSet()
{
	// 게임 스탯 기본값 설정
	InitDurability(100.0f); // 내구도 (체력)
	InitMaxDurability(100.0f); // 최대 내구도
	InitSpeed(600.0f); // 속도
	InitShield(50.0f); // 실드 (방어력 수치)
	InitMaxShield(50.0f); // 최대 실드
	InitOutput(10.0f); // 출력 (공격력)
	InitIncomingDamage(0.0f); // 들어오는 데미지 (기본값 0)

	// AURA처럼 태그와 어트리뷰트 매핑 설정! (핵심 추가!)
	const FArenaGameplayTags& GameplayTags = FArenaGameplayTags::Get();

	TagsToAttributes.Add(GameplayTags.Attributes_Core_Durability, GetDurabilityAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Core_MaxDurability, GetMaxDurabilityAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Core_Speed, GetSpeedAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Core_Shield, GetShieldAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Core_MaxShield, GetMaxShieldAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Core_Output, GetOutputAttribute);
	TagsToAttributes.Add(GameplayTags.Attributes_Meta_IncomingDamage, GetIncomingDamageAttribute);
}

void UBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 핵심 스탯들 복제 설정
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Durability, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxDurability, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Speed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Shield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxShield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Output, COND_None, REPNOTIFY_Always);
}

void UBaseAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// 스탯 범위 제한
	if (Attribute == GetDurabilityAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxDurability());
	}
	else if (Attribute == GetSpeedAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f); // 속도는 0 이하로 내려가면 안됨
	}
	else if (Attribute == GetShieldAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxShield());
	}
	else if (Attribute == GetOutputAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f); // 출력도 0 이하로 내려가면 안됨
	}
}

void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FEffectProperties Props;
	SetEffectProperties(Data, Props);

	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		HandleIncomingDamage(Props);
	}

	// 이펙트 적용 후 스탯 재조정 (기본적인 클램핑만)
	if (Data.EvaluatedData.Attribute == GetDurabilityAttribute())
	{
		SetDurability(FMath::Clamp(GetDurability(), 0.0f, GetMaxDurability()));
	}
	else if (Data.EvaluatedData.Attribute == GetShieldAttribute())
	{
		SetShield(FMath::Clamp(GetShield(), 0.0f, GetMaxShield()));
	}
	else if (Data.EvaluatedData.Attribute == GetSpeedAttribute())
	{
		SetSpeed(FMath::Max(GetSpeed(), 0.0f));

		// 캐릭터 이동 속도에 실시간 반영
		if (Props.TargetCharacter && Props.TargetCharacter->GetCharacterMovement())
		{
			Props.TargetCharacter->GetCharacterMovement()->MaxWalkSpeed = GetSpeed();
		}
	}
	else if (Data.EvaluatedData.Attribute == GetOutputAttribute())
	{
		SetOutput(FMath::Max(GetOutput(), 0.0f));
	}
}

void UBaseAttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const
{
	// 기본적인 이펙트 프로퍼티 설정 (향후 확장용)
	Props.EffectContextHandle = Data.EffectSpec.GetContext();
	Props.SourceASC = Props.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if (IsValid(Props.SourceASC) && Props.SourceASC->AbilityActorInfo.IsValid() && Props.SourceASC->AbilityActorInfo->
		AvatarActor.IsValid())
	{
		Props.SourceAvatarActor = Props.SourceASC->AbilityActorInfo->AvatarActor.Get();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();
		if (Props.SourceController == nullptr && Props.SourceAvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController();
			}
		}
		if (Props.SourceController)
		{
			Props.SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());
		}
	}

	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);
		Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Props.TargetAvatarActor);
	}
}

void UBaseAttributeSet::HandleIncomingDamage(const FEffectProperties& Props)
{
	const float LocalIncomingDamage = GetIncomingDamage();
	SetIncomingDamage(0.0f); // 즉시 리셋

	UE_LOG(LogTemp, Warning, TEXT("Incoming Damage: %f"), LocalIncomingDamage);

	if (LocalIncomingDamage > 0.0f)
	{
		// 실드 먼저 계산
		float RemainingDamage = LocalIncomingDamage;

		if (GetShield() > 0.0f)
		{
			float ShieldDamage = FMath::Min(RemainingDamage, GetShield());
			SetShield(GetShield() - ShieldDamage);
			RemainingDamage -= ShieldDamage;
		}

		// 남은 데미지를 내구도에 적용
		if (RemainingDamage > 0.0f)
		{
			float NewDurability = GetDurability() - RemainingDamage;
			SetDurability(FMath::Clamp(NewDurability, 0.0f, GetMaxDurability()));

			// 죽음 처리
			if (NewDurability <= 0.0f)
			{
				if (ICombatInterface* CombatInterface = Cast<ICombatInterface>(Props.TargetAvatarActor))
				{
					CombatInterface->Die(FVector::ZeroVector);
				}
			}
		}

		// 로그 출력 (디버그용)
		UE_LOG(LogTemp, Warning, TEXT("Damage Applied: %f, Shield: %f, Durability: %f"),
		       LocalIncomingDamage, GetShield(), GetDurability());
	}
}

// RepNotify 함수들
void UBaseAttributeSet::OnRep_Durability(const FGameplayAttributeData& OldDurability) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Durability, OldDurability);
}

void UBaseAttributeSet::OnRep_MaxDurability(const FGameplayAttributeData& OldMaxDurability) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxDurability, OldMaxDurability);
}

void UBaseAttributeSet::OnRep_Speed(const FGameplayAttributeData& OldSpeed) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Speed, OldSpeed);
}

void UBaseAttributeSet::OnRep_Shield(const FGameplayAttributeData& OldShield) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Shield, OldShield);
}

void UBaseAttributeSet::OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxShield, OldMaxShield);
}

void UBaseAttributeSet::OnRep_Output(const FGameplayAttributeData& OldOutput) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Output, OldOutput);
}
