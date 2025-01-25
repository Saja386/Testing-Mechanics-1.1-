// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboStarterAnimNotifier.h"

void UComboStarterAnimNotifier::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	if (MeshComp && Animation)
	{
		MainPlayer = Cast<AMain_Player_2>(MeshComp->GetOwner());
		if (MainPlayer)
		{
			if(LightOHard)
			{
				MainPlayer->ComboStart();
			}
			else
			{
				MainPlayer->HardComboStart(); 
			}
		}
	}	
}
