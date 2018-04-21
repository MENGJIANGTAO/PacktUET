// Fill out your copyright notice in the Description page of Project Settings.

#include "TestActor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"
// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	ChildSceneComponent = CreateDefaultSubobject<USceneComponent>("ChildSceneComponent");
	ChildSceneComponent->AttachTo(Root);
	Mesh1 = CreateDefaultSubobject<UStaticMeshComponent>("Mesh1");
	Mesh2 = CreateDefaultSubobject<UStaticMeshComponent>("Mesh2");
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Models/Cube.Cube'"));
	if (MeshAsset.Object != nullptr)
	{
		Mesh1->SetStaticMesh(MeshAsset.Object);
	}
	Mesh1->AttachToComponent(Root, FAttachmentTransformRules::KeepWorldTransform);
	//Mesh2->AttachToComponent(ChildSceneComponent, FAttachmentTransformRules::KeepWorldTransform );
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

