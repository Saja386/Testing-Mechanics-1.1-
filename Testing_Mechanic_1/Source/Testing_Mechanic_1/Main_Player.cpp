// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_Player.h"

#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AMain_Player::AMain_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerCharacterMovementComponent = GetCharacterMovement();
	PlayerCharacterMovementComponent->bUseControllerDesiredRotation = true;
	PlayerCharacterMovementComponent->bOrientRotationToMovement = false;
	PlayerCharacterMovementComponent->bIgnoreBaseRotation = true;
	BCanRun = false ;
	IsRunning = false ;
	WalkSpeed = 600 ;
	RunSpeed = 1200 ; 
}

// Called when the game starts or when spawned
void AMain_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMain_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMain_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementInputAction , ETriggerEvent::Triggered , this , &AMain_Player::Movement);
		EnhancedInputComponent->BindAction(CameraInputAction , ETriggerEvent::Triggered , this , &AMain_Player::Look);
		EnhancedInputComponent->BindAction(BWantToRunInputAction , ETriggerEvent::Started , this , &AMain_Player::RunApplying) ; 
	}
}

void AMain_Player::Movement (const FInputActionValue& MovementInput)
{
	FVector2D MovementVector = MovementInput.Get<FVector2D>();
	
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
	if (Controller != nullptr)
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

void AMain_Player::Look(const FInputActionValue& LookAtInput)
{
	FVector2D LookAtDirection = LookAtInput.Get<FVector2d>();
	AddControllerYawInput(LookAtDirection.X*-1);
	AddControllerPitchInput(LookAtDirection.Y); 
}

void AMain_Player::RunApplying(const FInputActionValue& ApplyingInput)
{
	if (BCanRun)
	{
		IsRunning = true ;
		PlayerCharacterMovementComponent->MaxWalkSpeed = RunSpeed ;
		UE_LOG(LogTemp, Warning, TEXT("Triggerd "));
	}
}



