// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override; // BeginPlay() should stay public IF you plan to inharit from this class!
	
private:
	//How close can the AI tank can get to the player
	UPROPERTY(EditDefaultsOnly)
	float AcceptanceRadius = 3000;
};
