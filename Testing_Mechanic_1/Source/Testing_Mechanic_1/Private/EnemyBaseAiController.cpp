// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBaseAiController.h"

void AEnemyBaseAiController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	RunBehaviorTree()
}
