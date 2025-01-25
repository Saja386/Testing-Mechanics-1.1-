// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Animation/AnimInstance.h"
#include "Main_Player_2.generated.h"

UCLASS()
class TESTING_MECHANIC_1_API AMain_Player_2 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMain_Player_2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	//Character Components 
	UPROPERTY(BlueprintReadOnly)
	UCharacterMovementComponent* PlayerCharacterMovementComponent;

	UPROPERTY(BlueprintReadOnly)
	UAnimInstance* PlayerAnimInstance;
	
private:
	//Function
	void Movement (const FInputActionValue& MovementInput);
	
	void Look (const FInputActionValue& LookAtInput);

	void RunApplying (const FInputActionValue& ApplyingInput);

	void SetIsMoving();

	void Dodged ();

	void LightAttack (const FInputActionValue& LAttack);

	void HeavyAttack (const FInputActionValue& HAttack);

	void SetEveryAttackVarToDefault () ;
public:
	UFUNCTION(BlueprintCallable)
	void SetValuesAfterDodge ();

	UFUNCTION (BlueprintCallable)
	void  SetValuesAfterEveryAttackAnim ();

	UFUNCTION (BlueprintCallable)
	void  SetValuesAfterEveryAttackAnimNotify  ();
	
	UFUNCTION (BlueprintCallable)
	void SetCanComboBeApplied ();

	UFUNCTION (BlueprintCallable)
	void SetCanComboGoOn (bool LightHard , int Lable);
public:
	//Input actions
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category="Input" )
	UInputMappingContext* DefaultMappingContext ;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category="Input" )
	UInputAction* MovementInputAction;
	
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category="Input" )
	UInputAction* CameraInputAction;

	UPROPERTY(EditDefaultsOnly  , BlueprintReadOnly , Category="Input" )
	UInputAction* BWantToRunInputAction ;
	
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category="Input" )
	UInputAction* DodgeInputAction;

	UPROPERTY (EditDefaultsOnly , BlueprintReadOnly , Category="Input" )
	UInputAction* LightAttackInputAction ;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category="Input" )
	UInputAction* HeavyAttackInputAction ; 


	//Public Variables for bluprint
	//Anim Bluprint 

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category= "Movement")
	bool IsDodging ;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector2D PlayerMovementVector;

	UPROPERTY (EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool StartedLightAttack ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool StartedHeavyAttack ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool HaveLightAttackCombo ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool HaveHeavyAttackCombo ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool CanGoToNextAnimAttack ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool LightZero ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool LightOne ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category = "Attack")
	bool LightTwo ;
	
	
private:
	//Internal Variables
	// Movement :
	bool BCanRun ;
	bool IsRunning;
	double WalkSpeed;
	double RunSpeed;
	bool IsMoving ;
	bool CanMove ;
	bool CanAttack ;
	bool IsPlayingDodgeAnimation ;
	bool IsCorrectTimeForCombo ;


	bool Started ;
	bool Combo ;
	bool HCombo ;
public:
	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category="Movement")
	bool LightStarted ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category="Movement")
	bool LH ;

	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category="Movement")
	bool Idle ;

	UFUNCTION(BlueprintCallable)
	void SetAfterAttackEnding () ; 
	
	void ComboStart();

	void AnimEnded () ; 

private:
	bool HStarted ;
	bool HardCombo ;
	bool HardHCombo ;

public:
	UPROPERTY(EditAnywhere , BlueprintReadWrite , Category="Movement")
	bool HardStarted ; 
	UFUNCTION(BlueprintCallable)
	void SetAfterHardAttackending ();

	void HardComboStart();

	void HardAnimEnded (); 
};
