// Fill out your copyright notice in the Description page of Project Settings.


#include "BallPlayer.h"
#include <cmath>
#include <iostream>
#include "Laps.h"
#include "Kismet/GameplayStatics.h"

bool WasRight = false;
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

	SetReplicates(true);
	SetReplicateMovement(true);
}

TArray<AActor*> foundObjects;
TSubclassOf<ALaps> classToFind;
// Called when the game starts or when spawned
void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();

	classToFind = ALaps::StaticClass();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), classToFind, foundObjects);
//	thisAvatar = SpawnActor<AAvatar>(GetLocation(), GetRotation(), NULL, Instigator, true);
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
void ABallPlayer::MoveUp_Implementation(float value)
{
	FVector DirectionHelp = Camera->GetForwardVector();
	FVector ForceToAdd = DirectionHelp * MovementForce * value;

	
	Mesh->AddForce(ForceToAdd);
		
	UE_LOG(LogTemp, Warning, TEXT("Value Up %f reached"), value);
	
}
bool ABallPlayer::MoveUp_Validate(float value)
{
	return true;
}

void ABallPlayer::MoveRight_Implementation(float value)
{
	FVector DirectionHelp = Camera->GetRightVector();
	FVector Aux = GetVelocity();
	
	/*
	if (abs(value) > 0 && WasRight == false)
	{
		//Mesh->AddImpulse(FVector(Aux.X * -1, Aux.Y * -1, Aux.Z * -1), "Mesh", false);
		Mesh->AddForce(FVector(Aux.X*-1, Aux.Y*-1, Aux.Z*-1));
		//Mesh->ComponentVelocity = FVector(0,0,0);
		WasRight = true;
		UE_LOG(LogTemp, Warning, TEXT("Got Here"));

	}
	else
	{
		if(abs(value)!=0)
			WasRight = false;
	}
	UE_LOG(LogTemp, Warning, TEXT("Velocity: %f, %f, %f"), Aux.X, Aux.Y, Aux.Z);
	
	*/
	
	//UE_LOG(LogTemp, Warning, TEXT("FVECTOR %d,%d,%d reached"),  GetVelocity().X, GetVelocity().Y, GetVelocity().Z);


	
	UE_LOG(LogTemp, Warning, TEXT("Value Right %f reached"), value);


	FVector ForceToAdd = DirectionHelp * MovementForce * value*1.5f;
	Mesh->AddForce(ForceToAdd);
}
bool ABallPlayer::MoveRight_Validate(float value)
{
	return true;
}
void ABallPlayer::Die()
{

	for (int idx = 0; idx < foundObjects.Num(); idx++)
	{
		ALaps* Lap = Cast<ALaps>(foundObjects[idx]);
		if (Lap->CheckpointID == currentLapID)
			SetActorLocation(Lap->GetActorLocation(), false);

	}
}

