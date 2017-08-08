// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// This is a forward declaration which allows us to reference UTankBarrel in this file
class UTankBarrel; 

//Holds barrel's properties and Elevate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void AimAt(FVector, float);
	void SetBarrelReference(UTankBarrel* BarrelToSet);
	

private:
	UTankBarrel *Barrel = nullptr;
	
	void MoveBarrelTowards(FVector);
	
};
