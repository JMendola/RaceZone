// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Laps.generated.h"

UCLASS()
class ZOMBIEGAME_API ALaps : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaps();
	UPROPERTY(EditAnywhere, Category = "Gameplay")
		int CheckpointID;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
