// Fill out your copyright notice in the Description page of Project Settings.

#include "TestGameState.h"




ATestGameState::ATestGameState()
{
	CurrentScore = 0;
}

void ATestGameState::SetScore(int NewScore)
{
	CurrentScore = NewScore;
}

int ATestGameState::GetScore()
{
	return CurrentScore;
}

