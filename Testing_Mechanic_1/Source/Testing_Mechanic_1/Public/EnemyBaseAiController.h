// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyBaseAiController.generated.h"

/**
 * 
 */
UCLASS()
class TESTING_MECHANIC_1_API AEnemyBaseAiController : public AAIController
{
	GENERATED_BODY()
	void OnPossess(APawn* InPawn) override;
};
