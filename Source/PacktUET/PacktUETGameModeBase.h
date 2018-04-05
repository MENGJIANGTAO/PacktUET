// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UserProfile.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PacktUETGameModeBase.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FColorTexture
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	UTexture* Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FLinearColor Color;
};

UENUM(BlueprintType, Blueprintable)
enum MStatus
{
	EStopped UMETA(DisplayName = "Stopped"),
	EMoving UMETA(DisplayName = "Moving"),
	EAttacking UMETA(DisplayName = "Attacking"),
};

/**
 * 
 */
UCLASS()
class PACKTUET_API APacktUETGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	TSubclassOf<UUserProfile> UPBlueprintClassName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	FColorTexture Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUD)
	TEnumAsByte<MStatus> States;
	APacktUETGameModeBase(const FObjectInitializer& PCIP);
	void BeginPlay();

};
