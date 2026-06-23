// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mess.generated.h"

UCLASS()
class RETALEOFHORROR_API AMess : public AActor
{
	GENERATED_BODY()
private:

	UPROPERTY(EditAnywhere) FVector PoolingLocation;
	UPROPERTY(EditAnywhere) FVector SpawnLocation;
public:	
	// Sets default values for this actor's properties
	AMess();
	UPROPERTY(EditAnywhere) UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//move the mess into the scene
	bool SpawnMess();
	//move the mess to the object pool
	bool MoveToPool();

};
