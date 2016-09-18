// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
 
	virtual void BeginPlay() override;

	ATank*  GetControlledTrank() const;
};