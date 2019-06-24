// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	ATank* GetControlledTank() const;
	
	void AimTowardCrosshair();

	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	FVector GetReachLineStart() const;

	FVector GetReachLineEnd() const;

private:
	UPROPERTY(EditAnywhere)
		float Reach = 10000.0f;
};
