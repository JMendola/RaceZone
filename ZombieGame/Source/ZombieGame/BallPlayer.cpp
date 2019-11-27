// Fill out your copyright notice in the Description page of Project Settings.


#include "BallPlayer.h"
#include <cmath>
#include <iostream>

// Sets default values
ABallPlayer::ABallPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);
	MovementForce = 140000;
}

// Called when the game starts or when spawned
void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
	//SpringArm->AddRelativeRotation(GetVelocity().Rotation(), true);
	if (abs(GetVelocity().X) > 4 || abs(GetVelocity().Z))
	{
		SpringArm->SetWorldRotation(FMath::Lerp(SpringArm->GetComponentQuat(),
			 (GetVelocity() - FVector(0,0,200)).Rotation().Quaternion(), 0.05f), 0);
		
	}
	
}

// Called to bind functionality to input
void ABallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABallPlayer::MoveUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABallPlayer::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ABallPlayer::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ABallPlayer::AddControllerYawInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABallPlayer::Jump);


}
void ABallPlayer::MoveUp(float value)
{
	FVector DirectionHelp = Camera->GetForwardVector();
	FVector ForceToAdd = DirectionHelp * MovementForce * value;
	
	Mesh->AddForce(ForceToAdd);
}

void ABallPlayer::MoveRight(float value)
{
	FVector DirectionHelp = Camera->GetRightVector();
	FVector Aux = GetVelocity();
	//if(abs(value) == 1)
		//Mesh->AddForce(FVector(Aux.X * -1, -Aux.Y * -1, -Aux.Z * -1));

	//UE_LOG(LogTemp, Warning, TEXT("Checkpoint %d,%d,%d reached"),  GetVelocity().X, GetVelocity().Y, GetVelocity().Z);

	FVector ForceToAdd = DirectionHelp * MovementForce * value*1.5f;
	Mesh->AddForce(ForceToAdd);
}

