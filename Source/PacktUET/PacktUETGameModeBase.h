// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UserProfile.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PacktUETGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PACKTUET_API APacktUETGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UClassName)
	TSubclassOf<UUserProfile> UPBlueprintClassName;

	APacktUETGameModeBase(const FObjectInitializer& PCIP);
};
