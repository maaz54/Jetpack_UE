// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunnerCharacter.generated.h"

UCLASS()
class JETPACK_API ARunnerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY()
	class UCameraComponent* SideViewCamera;



public:
	// Sets default values for this character's properties
	ARunnerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveRight(float value);

	void Jump();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UCameraComponent* GetSideViewCameraComponent() const
	{
		return SideViewCamera;
	}

	void RestartLevel();


	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
						UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, 
						const FHitResult& SweepResult);


private:
	float ZPosition;
	FVector TempPos = FVector();

	bool CanMove;

};
