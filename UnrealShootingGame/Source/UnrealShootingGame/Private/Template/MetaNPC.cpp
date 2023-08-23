// Fill out your copyright notice in the Description page of Project Settings.



#include "Template/MetaNPC.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Controllers/MetaAIController.h"

// Sets default values
AMetaNPC::AMetaNPC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    // Pawnmovement 가 있어야 Move To 등 BT 를 수행
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMoveMentComponent"));

	AIControllerClass = AMetaAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

// Called when the game starts or when spawned
void AMetaNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMetaNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMetaNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);




}

