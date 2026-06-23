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
	//init mess array storage
	
	for (TActorIterator<AMess> It(GetWorld()); It; ++It)
	{
		MessArray.Add(*It);
	}
	
	//set timer
	GetWorldTimerManager().SetTimer(MessTimerHandle, this, &ThisClass::MessTimerOperations, MessTimerLength, true);
	
	//construct linked list
	MessPool = nullptr;
	for (AMess* Mess : MessArray)
	{
		if (MessPool == nullptr) //if first node create new linked list
		{
			MessPool = new TObjectPoolNode(Mess);
		}
		else //otherwise add to pool
		{
			MessPool->NewNode(Mess);
		}
	}
	
	//check that there are messes in pool, if not throw error
	if (MessPool == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("ERROR:Mess pool is null."));
	}
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
			CurrentMessCount += 1;	//if mess is spawned increment counter
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
	if (CurrentMessCount >= HardMessCap)	//if mess is over hard cap
	{
		return false;
	}
	return true;
}

bool AMessManager::ShouldBossBeCalled()
{
	if (CurrentMessCount >= SoftMessCap)	//if mess is over soft cap
	{
		return true;
	}
	return false;
}

AMess* AMessManager::GetMessFromPool()
{
	//if all nodes are in use throw error, if not return data
	if (MessPool == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Mess pool is null."));
		return nullptr;
	}
	MessPool = MessPool->GetNextNodeNotInUse();
	MessPool->ChangeObjectInUse(true);
	return MessPool->GetData();
}

bool AMessManager::SpawnMess()
{
	UE_LOG(LogTemp, Display, TEXT("Spawned a mess"));
	AMess* Mess = GetMessFromPool();
	if (Mess == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Mess pool is null."));
	}
	else
	{
		Mess->SpawnMess();
	}
	return true;
}

void AMessManager::CallBoss()
{
	UE_LOG(LogTemp, Display, TEXT("Call the boss"));
}

AMessManager::~AMessManager()
{
	UE_LOG(LogTemp, Display, TEXT("Destructing Mess Manager"));
	if (MessPool)
	{
		MessPool = nullptr;
		delete MessPool;
		MessPool = nullptr;
	}
}



