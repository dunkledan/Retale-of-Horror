#pragma once

#include "Mess.h"
#include "ObjectPoolNode.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EngineUtils.h"
#include "MessManager.generated.h"

//The manager of all messes in a level
UCLASS()
class RETALEOFHORROR_API AMessManager : public AActor
{
	GENERATED_BODY()
//variables

private:
	//This is the handler for the timer used to time mess intervals
	FTimerHandle MessTimerHandle;
			//TIMER TUTORIAL = https://tomlooman.com/unreal-engine-cpp-timers/
	
	//object pool 
	TObjectPoolNode<AMess>* MessPool;

	//the number of messes currently in the scene - this should never be negative
	UPROPERTY(EditAnywhere) int CurrentMessCount;
	//the maximum amount of messes that can be spawned in before the boss calls
	UPROPERTY(EditAnywhere) int SoftMessCap;
	//the maximum amount of messes that can be spawned in at one time
	UPROPERTY(EditAnywhere) int HardMessCap;
	//the amount of time that it takes for the mess timer to tick
	UPROPERTY(EditAnywhere) int MessTimerLength;
	//an array of messes to be used
	UPROPERTY(EditAnywhere) TArray<AMess*> MessArray;
//methods
public:	
	// Sets default values for this actor's properties
	AMessManager();
	~AMessManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//timer function
	void MessTimerOperations();
	//function to check if messes are spawnable
	bool CheckMessSpawnable();
	//function to check if boss should be called
	bool ShouldBossBeCalled();
	//function to get mess out of obejct pool - return mess or null if not found
	AMess* GetMessFromPool();
	//function to spawn mess, if this fails return false
	bool SpawnMess();
	//call the boss
	void CallBoss();


	//on mess cleaned

};
