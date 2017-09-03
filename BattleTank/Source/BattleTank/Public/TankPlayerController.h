// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class UTankAimingComponent;
/**
 Responsible for helping the player aim.
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
		void FoundAimingComponent(UTankAimingComponent* AimCompRef);
private:
	virtual void BeginPlay() override; //writing virtual here is redundant, but considered good practice.

	virtual void SetPawn(APawn* InPawn) override;

	virtual void Tick(float DeltaTime) override;

	//Start the tank moving the barrel so that a shot would hit where the crosshair instersects the world
	void AimTowardsCrosshair();
	//Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	UFUNCTION()
		void OnPossedTankDeath();
	
	UPROPERTY(EditDefaultsOnly)
		float CrossHairXLocation = 0.5f;
	UPROPERTY(EditDefaultsOnly)
		float CrossHairYLocation = 0.33333f;
	UPROPERTY(EditDefaultsOnly)
		float LineTraceRange = 1000000.0f;

	bool GetLookDirection(FVector2D, FVector&) const;
	bool GetLookVectorHitLocation(FVector, FVector&) const;

};
