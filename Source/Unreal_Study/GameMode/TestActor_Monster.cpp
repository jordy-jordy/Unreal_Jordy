// Fill out your copyright notice in the Description page of Project Settings.


#include <GameMode/TestActor_Monster.h>

// Sets default values
ATestActor_Monster::ATestActor_Monster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor_Monster::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATestActor_Monster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

