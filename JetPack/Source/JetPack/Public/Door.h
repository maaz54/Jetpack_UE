// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class JETPACK_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


    // Function to open the door
    void OpenDoor();

    // Function to close the door
    void CloseDoor();

    // Box component to trigger the door
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* TriggerBox;

    // Mesh component for the door
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* DoorMesh;

    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* TriggerBoxMesh;

    bool bIsDoorOpen;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);


    // Function to handle player interaction, e.g., button press
    void Interact();

private:
    FVector TargetPosition;

    float LerpSpeed = 1.0f; // Speed of interpolation

};
