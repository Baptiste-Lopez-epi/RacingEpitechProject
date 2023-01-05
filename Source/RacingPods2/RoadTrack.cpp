// Fill out your copyright notice in the Description page of Project Settings.


#include "RoadTrack.h"
#include "Components/SplineComponent.h"

// Sets default values
ARoadTrack::ARoadTrack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineRoadTrack"));

}

// Called when the game starts or when spawned
void ARoadTrack::BeginPlay()
{
	Super::BeginPlay();
	Spline->AddSplineLocalPoint(FVector(0, 5, 0));
}

// Called every frame
void ARoadTrack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}