// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "TestMeshComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Experimental, meta = (BlueprintSpawnableComponent))
class PACKTUET_API UTestMeshComponent : public UMeshComponent
{
	GENERATED_BODY()
public:	
	//virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	TArray<int32> Indices;
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Materials)
	UMaterial* TheMaterial;

	//UTestMeshComponent();

};
