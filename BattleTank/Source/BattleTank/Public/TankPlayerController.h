// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	
	
	virtual void BeginPlay() override; //writing virtual here is redundant, but considered good practice.
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5f;
	UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.33333f;
	UPROPERTY(EditAnywhere)
		float LineTraceRange = 1000000.0f;
	//
	ATank* GetControlledTank() const;
	//Start the tank moving the barrel so that a shot would hit where the crosshair instersects the world
	void AimTowardsCrosshair();
	//Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	bool GetLookDirection(FVector2D, FVector&) const;
	bool GetLookVectorHitLocation(FVector, FVector&) const;
};
