// Fill out your copyright notice in the Description page of Project Settings.


#include "TankMovementComponent.h"

void UTankMovementComponent::IntendMoveForeward(float Throw) 
{
	//float time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("Intend move foreward: %f"), Throw);
}