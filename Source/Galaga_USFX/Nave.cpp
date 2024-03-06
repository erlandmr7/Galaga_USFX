// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"

void ANave::Mover(float _Px, float _Py)
{
	Px = Px + _Px;
	Py = Py + _Py;
}

// Sets default values
ANave::ANave()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

