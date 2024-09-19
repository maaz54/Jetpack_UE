// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelSpawner.h"
#include "BaseLevel.h"
#include "Engine.h"
#include "Components/BoxComponent.h"

// Sets default values
ALevelSpawner::ALevelSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelSpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnLevel(true);
	SpawnLevel(false);
	SpawnLevel(false);
	SpawnLevel(false);
	
}

// Called every frame
void ALevelSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevelSpawner::SpawnLevel(bool isFirst)
{
	SpawnLocation = FVector(0.0f, 1000.0f, 0.0f);
	SpawnRotation = FRotator(0.0f, 90.0f, 0.0f);

	RandomLevel = FMath::RandRange(0, Levels.Num() - 1);

	if (!isFirst)
	{
		ABaseLevel* LastLevel = LevelList.Last();
		SpawnLocation = LastLevel->GetSpawnLocation()->GetComponentTransform().GetTranslation();
	}
	else
	{
		RandomLevel = 0;
	}

	
	ABaseLevel* NewLevel = nullptr;
	
	NewLevel = GetWorld()->SpawnActor<ABaseLevel>(Levels[RandomLevel], SpawnLocation, SpawnRotation, spawnInfo);

	if (NewLevel)
	{
		if (NewLevel->GetTrigger())
		{
			NewLevel->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &ALevelSpawner::OnOverlapBegin);
		}
	}

	LevelList.Add(NewLevel);


	if (LevelList.Num() >= 5)
	{
		LevelList.RemoveAt(0);
	}

}

void ALevelSpawner::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABaseLevel* lastLevel = LevelList.Last();
	lastLevel->GetTrigger()->OnComponentBeginOverlap.RemoveDynamic(this, &ALevelSpawner::OnOverlapBegin);

	ALevelSpawner::SpawnLevel(false);
}

