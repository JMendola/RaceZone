// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectionCoin.h"
#include "Components/SphereComponent.h"
#include "MyCharacter.h"
#include "BallPlayer.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"

ACollectionCoin::ACollectionCoin()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(RootComponent);
	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
	SphereComponent->SetupAttachment(MeshComponent);

}

void ACollectionCoin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectionCoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(0, RotationSpeed * DeltaTime, 0));

}

void ACollectionCoin::NotifyActorBeginOverlap(AActor* OtherActor)
{

	Super::NotifyActorBeginOverlap(OtherActor);

	if (dynamic_cast<AMyCharacter*>(OtherActor) != nullptr || dynamic_cast<ABallPlayer*>(OtherActor) != nullptr)
	{
		PlayEffect();
		Destroy();
	}
}


void ACollectionCoin::PlayEffect()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), CollectEffect, GetActorLocation());
}
