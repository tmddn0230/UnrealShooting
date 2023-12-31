// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "MotionControllerComponent.h"
#include "Components/SkeletalMeshComponent.h"

#include "MetaCharacter.generated.h"

UCLASS()
class UNREALSHOOTINGGAME_API AMetaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMetaCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// MotionController 
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR")
	//UMotionControllerComponent* MotionControllerLeft;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR")
	//UMotionControllerComponent* MotionControllerRight;

};
