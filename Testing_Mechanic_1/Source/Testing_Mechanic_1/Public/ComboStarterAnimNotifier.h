// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Main_Player_2.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ComboStarterAnimNotifier.generated.h"

/**
 * 
 */
UCLASS()
class TESTING_MECHANIC_1_API UComboStarterAnimNotifier : public UAnimNotify
{
	GENERATED_BODY()
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation , const FAnimNotifyEventReference& EventReference) override;
	AMain_Player_2* MainPlayer;
public:
	UPROPERTY(EditAnywhere , BlueprintReadWrite)
	bool LightOHard ;
};
