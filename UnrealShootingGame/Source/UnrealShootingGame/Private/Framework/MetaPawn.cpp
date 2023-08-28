// Fill out your copyright notice in the Description page of Project Settings.


#include "Framework/MetaPawn.h"

// Sets default values
AMetaPawn::AMetaPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMetaPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMetaPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMetaPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

