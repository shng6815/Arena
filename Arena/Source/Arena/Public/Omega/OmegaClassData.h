// OmegaClassData.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "OmegaClassData.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UMaterialInterface;

/**
 * 직업별 오메가 변신 데이터를 저장하는 DataAsset
 * 블루프린트에서 각 직업마다 다른 설정 가능
 */
UCLASS(BlueprintType, Blueprintable)
class ARENA_API UOmegaClassData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ===== 외형 설정 =====
	
	/** 오메가 변신 시 사용할 메시 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Visual")
	TSoftObjectPtr<USkeletalMesh> OmegaMesh;
	
	/** 오메가 변신 시 사용할 머티리얼들 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Visual")
	TArray<TSoftObjectPtr<UMaterialInterface>> OmegaMaterials;
	
	/** 오메가 변신 시 크기 배율 (매쉬가 작다면 사용) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Visual")
	FVector OmegaScale = FVector(1.0f);
	
	// ===== 콜라이더 설정 =====
	
	/** 오메가 변신 시 캡슐 반지름 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Collision")
	float OmegaCapsuleRadius = 42.0f;
	
	/** 오메가 변신 시 캡슐 높이 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Collision")
	float OmegaCapsuleHeight = 96.0f;
	
	// ===== 스탯 설정 =====
	
	/** 스피드 증가 배율 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	float SpeedMultiplier = 1.5f;
	
	/** 출력 증가 배율 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	float OutputMultiplier = 1.5f;
	
	/** 체력 회복 퍼센트 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	float HealthRestorePercent = 0.5f;
	
	// ===== 스킬 설정 =====
	
	/** 오메가 상태에서 추가될 어빌리티들 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
	TArray<TSubclassOf<UGameplayAbility>> OmegaAbilities;
	
	/** 제거할 기본 어빌리티 태그들 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
	FGameplayTagContainer AbilitiesToRemove;
	
	// ===== 이펙트 설정 =====
	
	/** 변신 시 재생할 파티클 이펙트 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Effects")
	TSoftClassPtr<AActor> TransformationEffect;
	
	/** 변신 시 재생할 사운드 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Effects")
	TSoftObjectPtr<USoundBase> TransformationSound;
	
	/** 오메가 상태 지속 중 파티클 이펙트 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Effects")
	TSoftClassPtr<AActor> OmegaAuraEffect;

	// ===== 직업 식별 =====
	
	/** 이 데이터가 어떤 직업용인지 식별하는 태그 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Class Info")
	FGameplayTag ClassIdentifier;
	
	/** 직업 이름 (UI 표시용) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Class Info")
	FText ClassName;
	
	/** 오메가 형태 설명 (UI 표시용) */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Class Info")
	FText OmegaDescription;
	
public:
	// ===== 헬퍼 함수들 =====
	
	/** 메시가 유효한지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega Data")
	bool HasValidMesh() const { return !OmegaMesh.IsNull(); }
	
	/** 머티리얼이 설정되어 있는지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega Data")
	bool HasMaterials() const { return OmegaMaterials.Num() > 0; }
	
	/** 오메가 어빌리티가 있는지 확인 */
	UFUNCTION(BlueprintPure, Category = "Omega Data")
	bool HasOmegaAbilities() const { return OmegaAbilities.Num() > 0; }

	// ===== 원본 데이터 저장 (런타임) =====
	
	/** 원본 메시 (복원용) - 런타임에만 사용 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	TObjectPtr<USkeletalMesh> OriginalMesh;
	
	/** 원본 머티리얼들 (복원용) - 런타임에만 사용 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	TArray<TObjectPtr<UMaterialInterface>> OriginalMaterials;
	
	/** 원본 크기 (복원용) - 런타임에만 사용 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	FVector OriginalScale;
	
	/** 원본 캡슐 크기 (복원용) - 런타임에만 사용 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	float OriginalCapsuleRadius;
	
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	float OriginalCapsuleHeight;
	
	/** 원본 스탯 (복원용) - 런타임에만 사용 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	float OriginalSpeed;
	
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Runtime")
	float OriginalOutput;
};