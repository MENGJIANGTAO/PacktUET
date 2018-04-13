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
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
	FTransform Location = FTransform();
	T1 = (ATestActor*)GetWorld()->SpawnActor(ATestActor::StaticClass(), &Location);
	T1->SetLifeSpan(2.0f);
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &APacktUETGameModeBase::DestoryActorFunction, 5);
}

void APacktUETGameModeBase::DestoryActorFunction()
{
	if (T1 != nullptr)
	{
		T1->Destroy();
	}
}
