// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_Player_2.h"

#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMain_Player_2::AMain_Player_2()
{
	WalkSpeed = 600 ;
	RunSpeed = 900 ;
	BCanRun = false ;
	IsRunning = false ;
	IsMoving = false ;
	CanMove = true ;
	CanAttack = true ;
	IsDodging = false ;
	StartedLightAttack = false ;
	StartedHeavyAttack = false ;
	HaveHeavyAttackCombo = false ;
	HaveLightAttackCombo = false ;
	IsPlayingDodgeAnimation = false ;
	IsCorrectTimeForCombo = false ;
	CanGoToNextAnimAttack = false ;
	LightZero = false ;
	LightOne = false ;
	LightTwo = false ;


	LH = true ;
	Started = false ;
	Combo = false ;
	Idle = false ;
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerCharacterMovementComponent = GetCharacterMovement();

}

// Called when the game starts or when spawned
void AMain_Player_2::BeginPlay()
{
	Super::BeginPlay();
	PlayerAnimInstance = GetMesh()->GetAnimInstance();

	
}

// Called every frame
void AMain_Player_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*UE_LOG(LogTemp, Log, TEXT("b1: %s, b2: %s, b3: %s, b4: %s"),
			   StartedLightAttack ? TEXT("true") : TEXT("false"),
			   HaveLightAttackCombo ? TEXT("true") : TEXT("false"),
			   IsCorrectTimeForCombo? TEXT("true") : TEXT("false"),
			   CanGoToNextAnimAttack ? TEXT("true") : TEXT("false")
			   );*/
}

// Called to bind functionality to input
void AMain_Player_2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementInputAction , ETriggerEvent::Triggered , this , &AMain_Player_2::Movement);
		EnhancedInputComponent->BindAction(MovementInputAction,ETriggerEvent::Completed , this , &AMain_Player_2::SetIsMoving);
		EnhancedInputComponent->BindAction(CameraInputAction , ETriggerEvent::Triggered , this , &AMain_Player_2::Look);
		EnhancedInputComponent->BindAction(BWantToRunInputAction , ETriggerEvent::Started , this , &AMain_Player_2::RunApplying) ;
		EnhancedInputComponent->BindAction(DodgeInputAction,ETriggerEvent::Triggered,this,&AMain_Player_2::Dodged  );
		EnhancedInputComponent->BindAction(LightAttackInputAction, ETriggerEvent::Started , this , &AMain_Player_2::LightAttack);
		EnhancedInputComponent->BindAction(HeavyAttackInputAction,ETriggerEvent::Started , this , &AMain_Player_2::HeavyAttack);
	}

}

void AMain_Player_2::Movement (const FInputActionValue& MovementInput)
{
	FVector2D MovementVector = MovementInput.Get<FVector2D>();
	PlayerMovementVector = MovementVector;
	IsMoving = true;  
	//check if player is going forward so he can run . 
	if (MovementVector.Y == 1)
	{
		BCanRun = true ; 
	}
	else
	{
		BCanRun = false ;
		if (IsRunning)
		{
			IsRunning = false ;
			PlayerCharacterMovementComponent->MaxWalkSpeed = WalkSpeed ; 
		}
	}
	
	if (MovementVector.SizeSquared() > 0) // If there is input
	{
		MovementVector.Normalize();
	}
	if (Controller != nullptr && CanMove )
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
	
}

void AMain_Player_2::SetIsMoving()
{
	IsMoving = false ;
	if (IsRunning)
	{
		IsRunning = false ;
		PlayerCharacterMovementComponent->MaxWalkSpeed = WalkSpeed ; 
	}
}



void AMain_Player_2::Look(const FInputActionValue& LookAtInput)
{
	FVector2D LookAtDirection = LookAtInput.Get<FVector2d>();
	AddControllerYawInput(LookAtDirection.X*-1);
	AddControllerPitchInput(LookAtDirection.Y); 
}

void AMain_Player_2::RunApplying(const FInputActionValue& ApplyingInput)
{
	if (BCanRun)
	{
		IsRunning = true ;
		PlayerCharacterMovementComponent->MaxWalkSpeed = RunSpeed ;
	}
}



void AMain_Player_2::Dodged()
{
	if (IsMoving)
	{
		IsDodging = true ;
		CanMove = false;
		CanAttack = false ; 
	}
}




void AMain_Player_2::SetValuesAfterDodge()
{
	IsDodging = false ; 
	IsPlayingDodgeAnimation = false ;
	CanMove = true ;
	CanAttack = true ;
}



//void AMain_Player_2::LightAttack(const FInputActionValue& LAttack)
//{
	/*Binding Attack
	if (CanAttack)
	{
		if (StartedLightAttack)
		{
			if (IsCorrectTimeForCombo)
			{
				if (HaveLightAttackCombo == false)
				{
					HaveLightAttackCombo = true ;
				}
			}
		}
		else
		{
			StartedLightAttack = true ;
			CanMove = false ;
		}
	}*/
//}



void AMain_Player_2::SetValuesAfterEveryAttackAnim()
{
	/*CanGoToNextAnimAttack = false ;
	if (HaveHeavyAttackCombo || HaveLightAttackCombo)
	{
		HaveHeavyAttackCombo = false ;
		HaveLightAttackCombo = false ;
	}
	LightZero = false ;
	LightOne = false ;
	LightTwo = false ;*/
}

void AMain_Player_2::SetValuesAfterEveryAttackAnimNotify()
{
	/*CanGoToNextAnimAttack = true ;
	IsCorrectTimeForCombo = false ;
	if (HaveLightAttackCombo == false && HaveHeavyAttackCombo == false)
	{
		StartedLightAttack = false ;
		StartedHeavyAttack = false ;
		CanMove = true ; 
	}
	

	UE_LOG (LogTemp , Warning , TEXT("R")); */
}

void AMain_Player_2::SetCanComboBeApplied()
{
	//IsCorrectTimeForCombo = true ;
	//UE_LOG (LogTemp , Warning , TEXT("R")); 

}

void AMain_Player_2::SetCanComboGoOn(bool LightHard, int Lable)
{
	/*if (LightHard)
	{
		switch (Lable)
		{
			case 0:
				LightZero = true ;
			case 1:
				LightOne = true ;
			case 2:
				LightTwo = true ;
		}
	}
	else
	{
		
	}*/
}

void AMain_Player_2::SetEveryAttackVarToDefault()
{/*
	StartedLightAttack = false ;
	StartedHeavyAttack = false ;
	HaveLightAttackCombo = false ;
	HaveHeavyAttackCombo = false ;
*/	
}


void AMain_Player_2::LightAttack(const FInputActionValue& LAttack)
{
	CanMove = false ; 
	LH = true ;
	if(Started == false )
	{
		LightStarted = true ;
		Started = true;
	}
	else
	{
		if(Combo)
		{
			HCombo = true ; 
		}
	}
}

void AMain_Player_2::SetAfterAttackEnding()
{
	Combo = false ;
	Started = false;
	LightStarted = false ;
	HCombo = false ;
	Idle=false ;
	CanMove = true ;
}

void AMain_Player_2::ComboStart()
{
	Combo = true ; 
}

void AMain_Player_2::AnimEnded()
{
	if (HCombo)
	{
		HCombo = false ;
	}
	else
	{
		Idle = true ; 
	}
}

void AMain_Player_2::HeavyAttack(const FInputActionValue& HAttack)
{
	UE_LOG(LogTemp , Warning , TEXT("TRigered")); 
	CanMove = false ;
	LH = false ;
	if(HStarted == false )
	{
		// here you can add if for checking light attack
		HStarted = true ;
		HardStarted = true ;
	}
	else
	{
		if(HardCombo)
		{
			HardHCombo = true ; 
		}
	}
}

void AMain_Player_2::SetAfterHardAttackending()
{
	CanMove = true ;
	HStarted = false ;
	HardStarted = false ;
	HardHCombo = false ;
	Idle = false ;
	HardCombo = false ; 
	
}

void AMain_Player_2::HardComboStart()
{
	HardCombo = true ; 
}

void AMain_Player_2::HardAnimEnded()
{
	if (HardHCombo)
	{
		HardHCombo = false ; 
	}
	else
	{
		Idle = true ; 
	}
}


