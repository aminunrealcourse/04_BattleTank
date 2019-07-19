// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
	//float Time = GetWorld()->GetTimeSeconds();
	FString Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s: Throttle Value: %f"), *Name, Throttle);

	FVector ForceApplied = GetForwardVector()* Throttle* TrackMaxDrivingForce;
	FVector ForceLocation = GetComponentLocation();

	UPrimitiveComponent* TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}