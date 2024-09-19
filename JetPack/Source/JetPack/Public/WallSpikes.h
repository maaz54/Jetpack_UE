// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Spikes.h"
#include "WallSpikes.generated.h"

/**
 * 
 */
UCLASS()
class JETPACK_API AWallSpikes : public ASpikes
{
	GENERATED_BODY()
	

public:
	AWallSpikes();

	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;

};
