// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "MetaNPC.generated.h"


class UFloatingPawnMovement;

UENUM(BlueprintType)
enum class ENPCState : uint8
{
	None, 
	Idle,       // 대기
	Warning,    // 산소 마스크 On
	Danger,     // 산소 마스트 x
	Safe        // 탈출
};

UCLASS()
class UNREALSHOOTINGGAME_API AMetaNPC : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMetaNPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFloatingPawnMovement* PawnMovement;

};
