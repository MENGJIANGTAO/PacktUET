// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PACKTUET_API UUserProfile : public UObject
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float armor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float HpMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Stats")
	FString Name;
};
