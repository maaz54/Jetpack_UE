// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"

#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Spikes.h"
#include "WallSpikes.h"
#include "Engine.h"


// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel11,ECR_Overlap);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	SideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA VIEW"));
	SideViewCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl= .8f;
	GetCharacterMovement()->JumpZVelocity = 1000.0f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0;
	GetCharacterMovement()->MaxFlySpeed = 600.0;

	TempPos = GetActorLocation();

	ZPosition = TempPos.Z + 300.0f;


}

// Called when the game starts or when spawned
void ARunnerCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ARunnerCharacter::OnOverlapBegin);

	CanMove = true;
	
}



// Called every frame
void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	TempPos = CurrentLocation;
	TempPos.X -= 850.0f;
	TempPos.Z = ZPosition;
	SideViewCamera->SetWorldLocation(TempPos);

	CurrentLocation.X = 0;
	SetActorLocation(CurrentLocation);
}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ARunnerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARunnerCharacter::MoveRight);
}

void ARunnerCharacter::MoveRight(float value)
{
	if (CanMove)
	{
		AddMovementInput(FVector(0.0f, 1.0f, 0.0f),value);
	}
}

void ARunnerCharacter::Jump()
{
		ACharacter::Jump();

}

void ARunnerCharacter::RestartLevel()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()));
}

void ARunnerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr)
	{
		ASpikes* WallSpike = Cast<AWallSpikes>(OtherActor);
		ASpikes* Spike = Cast<ASpikes>(OtherActor);

		if (WallSpike || Spike)
		{
			GetMesh()->Deactivate();
			GetMesh()->SetVisibility(false);
			CanMove = false;

			FTimerHandle unUsedHandle;
			GetWorldTimerManager().SetTimer(unUsedHandle, this,
				&ARunnerCharacter::RestartLevel,2.0f,false);
		}
		
	}
}


