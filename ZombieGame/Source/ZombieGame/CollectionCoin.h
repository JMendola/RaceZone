// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectionCoin.generated.h"

UCLASS()
class ZOMBIEGAME_API ACollectionCoin : public AActor
{
	GENERATED_BODY()
	
public:	
	ACollectionCoin();

	UPROPERTY(EditAnywhere, Category = "Gameplay")
		float RotationSpeed;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class UStaticMeshComponent *MeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class USphereComponent *SphereComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		class UParticleSystem *CollectEffect;

	void PlayEffect();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
