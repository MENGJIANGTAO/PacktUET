// Fill out your copyright notice in the Description page of Project Settings.

#include "PacktUETGameModeBase.h"



APacktUETGameModeBase::APacktUETGameModeBase(const FObjectInitializer& PCIP) : Super(PCIP)
{
	//APacktUETGameModeBase *gm = Cast<APacktUETGameModeBase>(GetWorld()->GetAuthGameMode());
	//if (gm)
	//{
		UUserProfile* u1 = NewObject<UUserProfile>();
		UE_LOG(LogTemp, Log, TEXT("Found UObject named: %s"), *u1->GetName());
	//}
	
}

void APacktUETGameModeBase::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("BeginPlayisDoing."));
}
