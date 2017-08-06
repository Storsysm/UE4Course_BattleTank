// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"


void UTankBarrel::Elevate(float DegreasPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("AimAsRotator: %s"), DegreasPerSecond);

	//Move the barrel the right amount this frame
	//Given a max elevation speed and frame time
}

