// BaseCharacter.cpp
#include "BaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "Arena/AbilitySystem/BaseAttributeSet.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	// Movement Setup (기본값은 600, 나중에 Speed 어트리뷰트로 덮어씀)
	GetCharacterMovement()->bOrientRotationToMovement = false;
    
	// 컨트롤러 회전을 따르게 설정!
	GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 10.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Camera Setup (for quarter view)
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Collision Setup
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// Initialize ability system only on server or standalone
	if (GetLocalRole() == ROLE_Authority)
	{
		InitAbilityActorInfo();
	}
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// 네트워크 복제할 변수들이 있으면 여기에 추가
}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UBaseAttributeSet* ABaseCharacter::GetBaseAttributeSet() const
{
	return Cast<UBaseAttributeSet>(AttributeSet);
}

float ABaseCharacter::GetDurability() const
{
	if (UBaseAttributeSet* BaseAS = GetBaseAttributeSet())
	{
		return BaseAS->GetDurability();
	}
	return 0.0f;
}

float ABaseCharacter::GetMaxDurability() const
{
	if (UBaseAttributeSet* BaseAS = GetBaseAttributeSet())
	{
		return BaseAS->GetMaxDurability();
	}
	return 0.0f;
}

float ABaseCharacter::GetSpeed() const
{
	if (UBaseAttributeSet* BaseAS = GetBaseAttributeSet())
	{
		return BaseAS->GetSpeed();
	}
	return 600.0f; // 기본값
}

float ABaseCharacter::GetShield() const
{
	if (UBaseAttributeSet* BaseAS = GetBaseAttributeSet())
	{
		return BaseAS->GetShield();
	}
	return 0.0f;
}

float ABaseCharacter::GetOutput() const
{
	if (UBaseAttributeSet* BaseAS = GetBaseAttributeSet())
	{
		return BaseAS->GetOutput();
	}
	return 0.0f;
}

void ABaseCharacter::SetSpeed(float NewSpeed)
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
	}
}

void ABaseCharacter::InitAbilityActorInfo()
{
	// This should be overridden in derived classes
	// Base implementation for when ASC is owned by character
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
		OnASCRegistered.Broadcast(AbilitySystemComponent);
	}
}

void ABaseCharacter::InitializeDefaultAttributes() const
{
	if (!HasAuthority()) return;
	
	ApplyEffectToSelf(DefaultPrimaryAttributes, 1.0f);
	ApplyEffectToSelf(DefaultSecondaryAttributes, 1.0f);
	ApplyEffectToSelf(DefaultVitalAttributes, 1.0f);
}

void ABaseCharacter::AddCharacterAbilities()
{
	if (!HasAuthority()) 
	{
		UE_LOG(LogTemp, Warning, TEXT("AddCharacterAbilities: No Authority!"));
		return;
	}
    
	if (!AbilitySystemComponent) 
	{
		UE_LOG(LogTemp, Error, TEXT("AddCharacterAbilities: No ASC!"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("AddCharacterAbilities: StartupAbilities count = %d"), StartupAbilities.Num());

	// AURA 방식: ASC에서만 처리하게 하기!
	if (UBaseAbilitySystemComponent* BaseASC = Cast<UBaseAbilitySystemComponent>(AbilitySystemComponent))
	{
		BaseASC->AddCharacterAbilities(StartupAbilities);
		UE_LOG(LogTemp, Warning, TEXT("Called BaseASC->AddCharacterAbilities"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast to BaseAbilitySystemComponent!"));
	}
    
	// 기존 for loop 코드는 제거!
}

void ABaseCharacter::ApplyEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level) const
{
	if (!HasAuthority()) return;
	if (!AbilitySystemComponent || !GameplayEffectClass) return;

	FGameplayEffectContextHandle ContextHandle = AbilitySystemComponent->MakeEffectContext();
	ContextHandle.AddSourceObject(this);
	
	const FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(
		GameplayEffectClass, Level, ContextHandle);
	
	AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(
		*SpecHandle.Data.Get(), AbilitySystemComponent);
}