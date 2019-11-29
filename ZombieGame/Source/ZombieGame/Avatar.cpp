// Fill out your copyright notice in the Description page of Project Settings.


#include "Avatar.h"
#include "BallPlayer.h"

// Sets default values
AAvatar::AAvatar()
{
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	PrimaryActorTick.TickGroup = TG_PostPhysics;
	Super::BeginPlay();
	
}

// Called every frame
void AAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SetActorLocation(Daddy->GetActorLocation(),true);

	FVector dadVelocity= Daddy->GetVelocity();

	RootComponent->SetWorldRotation(FMath::Lerp(RootComponent->GetComponentQuat(),
		(FVector(dadVelocity.X,dadVelocity.Y,0) - FVector(0, 0, 0)).Rotation().Quaternion(), 0.05f), 0);


}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

