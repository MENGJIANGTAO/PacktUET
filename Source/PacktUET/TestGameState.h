// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TestGameState.generated.h"

/**
 * 
 */
UCLASS()
class PACKTUET_API ATestGameState : public AGameState
{
	GENERATED_BODY()

	ATestGameState();

	UFUNCTION()
	void SetScore(int NewScore);
	UFUNCTION()
	int GetScore();
private:
	UPROPERTY()
	int32 CurrentScore;
};
