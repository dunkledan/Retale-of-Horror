// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MessManager.generated.h"

//The manager of all messes in a level
UCLASS()
class RETALEOFHORROR_API AMessManager : public AActor
{
	GENERATED_BODY()
//variables

private:
	//This is the handler for the timer used to time mess intervals
	FTimerHandle messTimerHandle;
			//TIMER TUTORIAL = https://tomlooman.com/unreal-engine-cpp-timers/
	
	//object pool 
	

	//the number of messes currently in the scene - this should never be negitive
	UPROPERTY(EditAnywhere) int currentMessCount;
	//the maximum amount of messes that can be spawned in before the boss calls
	UPROPERTY(EditAnywhere) int softMessCap;
	//the maximum amount of messes that can be spawned in at one time
	UPROPERTY(EditAnywhere) int hardMessCap;
	//the amount of time that it takes for the mess timer to tick
	UPROPERTY(EditAnywhere) int messTimerLength;
//methods
public:	
	// Sets default values for this actor's properties
	AMessManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//timer funtion
	void MessTimerOperations();
	//function to check if messes are spawnable
	bool CheckMessSpawnable();
	//function to check if boss should be called
	bool ShouldBossBeCalled();
	//function to get mess out of obejct pool - return mess or null if not found
	void GetMessFromPool();
	//function to spawn mess, if this fails return false
	bool SpawnMess();
	//call the boss
	void CallBoss();


	//on mess cleaned

};
