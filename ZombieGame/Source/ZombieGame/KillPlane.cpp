#include "KillPlane.h"
#include "BallPlayer.h"

// Sets default values
AKillPlane::AKillPlane()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKillPlane::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AKillPlane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AKillPlane::NotifyActorBeginOverlap(AActor* OtherActor)
{
	ABallPlayer* other = dynamic_cast<ABallPlayer*>(OtherActor);
	if (other != nullptr)
	{
		other->Die();
	}
}

