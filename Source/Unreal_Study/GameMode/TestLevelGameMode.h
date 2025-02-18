// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_STUDY_API ATestLevelGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	void BeginPlay();
	void Tick(float _DeltaTime);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Monster", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class ATestActor_Monster> Spawn_Moster = 0;
	
};
