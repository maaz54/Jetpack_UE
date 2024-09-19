// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelSpawner.generated.h"

class ABaseLevel;

UCLASS()
class JETPACK_API ALevelSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	APawn* Player;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABaseLevel>> Levels;

	TArray<ABaseLevel*> LevelList;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void SpawnLevel(bool isFirst);


	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);


	int RandomLevel;
	FVector SpawnLocation = FVector();
	FRotator SpawnRotation = FRotator();

	UPROPERTY(EditAnywhere)
	FVector LastLocation = FVector();

	FActorSpawnParameters spawnInfo = FActorSpawnParameters();
};
