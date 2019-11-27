#include "Laps.h"
#include "BallPlayer.h"



ALaps::ALaps()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALaps::BeginPlay()
{
	Super::BeginPlay();
	
}
void ALaps::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ABallPlayer* other= dynamic_cast<ABallPlayer*>(OtherActor);
	if (other != nullptr)
	{

		switch (CheckpointID)
		{
			case 1:
			{
				if (other->currentLapID == 0)
				{
					other->currentLapID= 1;
				}
				break;
			}
			case 2:
			{
				if (other->currentLapID == 1)
				{
					other->currentLapID = 2;
				}
				break;

			}
			case 3:
			{
				if (other->currentLapID == 2)
				{
					other->currentLapID = 3;
				}
				break;

			}
			case 0:
			{
				if(other->currentLapID == 3)
				{
					other->currentLapID = 0;
					//Lap Completed!!
					UE_LOG(LogTemp, Warning, TEXT("Lap Completed!!!"));

				}
				break;
				UE_LOG(LogTemp, Warning, TEXT("Checkpoint %d reached"));
			}

		}
		UE_LOG(LogTemp, Warning, TEXT("Checkpoint %d reached"), other->currentLapID);
	}

}

// Called every frame
void ALaps::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

