// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Testing_Mechanic_1Character.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Main_Player.generated.h"

UCLASS()
class TESTING_MECHANIC_1_API AMain_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMain_Player();

protected:
	UPROPERTY(BlueprintReadOnly)
	UCharacterMovementComponent* PlayerCharacterMovementComponent ; 
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//Functions
protected:
	void Movement (const FInputActionValue& MovementInput);
	
	void Look (const FInputActionValue& LookAtInput);

	void RunApplying (const FInputActionValue& ApplyingInput);
	

	//Variables
public:
	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category="Input" )
	UInputMappingContext* DefaultMappingContext ;

	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category="Input" )
	UInputAction* MovementInputAction;
	
	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category="Input" )
	UInputAction* CameraInputAction;

	UPROPERTY(EditAnywhere  , BlueprintReadOnly , Category="Input" )
	UInputAction* BWantToRunInputAction ; 
	UPROPERTY(EditAnywhere , BlueprintReadOnly , Category="Input" )
	UInputAction* DodgeInputAction;
private:
	bool BCanRun ;
	bool IsRunning;
	double WalkSpeed;
	double RunSpeed;
	

};
