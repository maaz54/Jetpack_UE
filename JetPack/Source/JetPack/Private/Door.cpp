// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "RunnerCharacter.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create the trigger box and set it as the root component
    TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    RootComponent = TriggerBox;

    // Create the door mesh
    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    DoorMesh->SetupAttachment(RootComponent);

    TriggerBoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerBoxMesh"));
    TriggerBoxMesh->SetupAttachment(RootComponent);

    // Bind the overlap event
    TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoor::OnOverlapBegin);

    // Set the door initially closed
    bIsDoorOpen = false;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

    bIsDoorOpen = false;
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bIsDoorOpen)
    {

        // Get current position
        FVector CurrentPosition = GetActorLocation();

        // Interpolate to the target position smoothly over time
        FVector NewPosition = FMath::VInterpTo(CurrentPosition, TargetPosition, DeltaTime, LerpSpeed); // 5.0f is the interpolation speed

        // Set the new position
        SetActorLocation(NewPosition);

    }

}


void ADoor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor && OtherActor != this)
    {
        if (OtherActor != nullptr)
        {
            ARunnerCharacter* Character = Cast<ARunnerCharacter>(OtherActor);
            // Call interact function when player overlaps

            if (Character)
            {
                Interact();
            }
        }

    }
}

// Handle interaction, such as opening the door
void ADoor::Interact()
{
    if (!bIsDoorOpen)
    {
        OpenDoor();
    }
}

void ADoor::OpenDoor()
{
    //TargetPosition = DoorMesh->GetComponentLocation() + FVector(0, 0, 0);
    TargetPosition = GetActorLocation() + FVector(0, 0, 500.0f);

    TriggerBoxMesh->SetVisibility(false);
    TriggerBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);  // Disable all collision
    TriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);  // Ignore all channels
    TriggerBox->SetGenerateOverlapEvents(false);
    
    bIsDoorOpen = true;
}

void ADoor::CloseDoor()
{
    // Logic to close the door
    bIsDoorOpen = false;
}

