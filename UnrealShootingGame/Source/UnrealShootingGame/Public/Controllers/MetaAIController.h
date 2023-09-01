// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MetaAIController.generated.h"


DECLARE_DELEGATE(FChangeStateDele);

UENUM(BlueprintType)
enum class EMetaNPCState : uint8
{
	None,
	Idle,
	Chase,
	Attack,
	Die
};


/**
 * 
 */
UCLASS()
class UNREALSHOOTINGGAME_API AMetaAIController : public AAIController
{
	GENERATED_BODY()
	
	
public:
	AMetaAIController();

	void RunAI();
	void StopAI();

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	EMetaNPCState NPCState;

	TMap<EMetaNPCState, FChangeStateDele> DelegateMap;


protected:
	virtual void OnPossess(APawn* InPawn) override;


private:

	UPROPERTY()
	TObjectPtr<class UBlackboardData> BBAsset;

	UPROPERTY()
	TObjectPtr<class UBehaviorTree> BTAsset;

	UFUNCTION()
	void SetNPCIdle();

	UFUNCTION()
	void SetNPCChase();

	UFUNCTION()
	void SetNPCAttack();

	UFUNCTION()
	void SetNPCDie();


	UFUNCTION()
	void ChangeState	(EMetaNPCState state);

};
