// Fill out your copyright notice in the Description page of Project Settings.


#include "MessManager.h"

// Sets default values
AMessManager::AMessManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMessManager::BeginPlay()
{
	Super::BeginPlay();

	//set timer
	GetWorldTimerManager().SetTimer(messTimerHandle, this, &ThisClass::MessTimerOperations, messTimerLength, true);
	
}

// Called every frame
void AMessManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//main timer function
void AMessManager::MessTimerOperations()
{
	//spawn mess
	if (CheckMessSpawnable() == true) //if can spawn mess
	{
		//spawn a mess
		if (SpawnMess() == false)	//check for error
		{
			UE_LOG(LogTemp, Error, TEXT("ERROR:Tried to spawn a mess but failed."));
		}
		else
		{
			currentMessCount += 1;	//if mess is spawned increment counter
		}
		//check if over soft cap
		if (ShouldBossBeCalled() == true)
		{
			CallBoss();
		}
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("WARNING:Mess cap reached, no more can be spawned."));
		//if mess is over hard cap, assume it is over soft cap
		CallBoss();
	}
}

//check caps

bool AMessManager::CheckMessSpawnable()
{
	if (currentMessCount >= hardMessCap)	//if mess is over hard cap
	{
		return false;
	}
	return true;
}

bool AMessManager::ShouldBossBeCalled()
{
	if (currentMessCount >= softMessCap)	//if mess is over soft cap
	{
		return true;
	}
	return false;
}

bool AMessManager::SpawnMess()
{
	UE_LOG(LogTemp, Display, TEXT("Spawned a mess"));
	return true;
}

void AMessManager::CallBoss()
{
	UE_LOG(LogTemp, Display, TEXT("Call the boss"));
}



