// Fill out your copyright notice in the Description page of Project Settings.


#include "Mess.h"

// Sets default values
AMess::AMess()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");

}

// Called when the game starts or when spawned
void AMess::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMess::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AMess::SpawnMess()
{
	SetActorLocation(SpawnLocation);	
	return true;
}

bool AMess::MoveToPool()
{
	SetActorLocation(PoolingLocation);
	return true;
}

