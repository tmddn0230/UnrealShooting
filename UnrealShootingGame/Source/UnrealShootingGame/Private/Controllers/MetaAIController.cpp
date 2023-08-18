// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/MetaAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"


AMetaAIController::AMetaAIController()
{
	static ConstructorHelpers::FObjectFinder <UBlackboardData> BBAssetRef(TEXT("/Script/AIModule.BlackboardData'/Game/XROculus/AI/BB_NPC.BB_NPC'"));
	if (nullptr != BBAssetRef.Object)
	{
		BBAsset = BBAssetRef.Object;
	}


	static ConstructorHelpers::FObjectFinder <UBehaviorTree> BTAssetRef(TEXT("/Script/AIModule.BehaviorTree'/Game/XROculus/AI/BT_NPC.BT_NPC'"));
	if (nullptr != BTAssetRef.Object)
	{
		BTAsset = BTAssetRef.Object;
	}


}   

void AMetaAIController::RunAI()
{
	UBlackboardComponent* BlackboardPtr = Blackboard.Get();
	if (UseBlackboard(BBAsset, BlackboardPtr))
	{
		bool RunResult = RunBehaviorTree(BTAsset);
		ensure(RunResult);
	}
}

void AMetaAIController::StopAI()
{
	UBehaviorTreeComponent* BTComponent = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (BTComponent)
	{
		BTComponent->StopTree();
	}

}

void AMetaAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	RunAI();
}
