// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateDoor.h"
#include "Math/Rotator.h"

// Sets default values for this component's properties
URotateDoor::URotateDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URotateDoor::BeginPlay()
{
	Super::BeginPlay();

	/*
	*	Find the Actor
	*	Create a rotator
	*	Set the door rotation
	*/

	AActor* Owner = GetOwner();
	FRotator NewRotator = FRotator(0.0f, -60.f, 0.0f);

	Owner->SetActorRotation(NewRotator);
	
}


// Called every frame
void URotateDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

