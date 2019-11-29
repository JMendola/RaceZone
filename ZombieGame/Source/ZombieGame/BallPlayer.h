// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/Rotator.h"
#include "Avatar.h"
#include "BallPlayer.generated.h"



UCLASS()
class ZOMBIEGAME_API ABallPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallPlayer();
	UPROPERTY(EditAnywhere, Category = "Gameplay")
		int currentLapID = 0;
	UPROPERTY(EditAnywhere, Category = "Gameplay")
		AAvatar *thisAvatar;
	UPROPERTY(EditAnywhere)

	TSubclassOf<class AAvatar> ToSpawn;
	void Spawn();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* RootMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	float MovementForce;
	UPROPERTY(EditAnywhere, BluePrintReadWrite)
	float JumpImpulse;
	UFUNCTION(BlueprintImplementableEvent)
	void Jump();

	UFUNCTION(Server,Reliable,WithValidation)
	void MoveUp(float Value);
	UFUNCTION(Server, Reliable, WithValidation)
	void MoveRight(float Value);
	void Die();
};
