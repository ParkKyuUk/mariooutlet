// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBMove.h"
#include "EnemyB.h"
#include "mariooutlet.h"

// ���ʹ̰� �� �Ʒ��� ���� ���Դ� �ϰ� �ϰ�ʹ�.
// �ʿ� �Ӽ� : currentTime, MaxTime, DelayTime, speed


// Sets default values for this component's properties
UEnemyBMove::UEnemyBMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyBMove::BeginPlay()
{
	Super::BeginPlay();

	// ...
	dir = FVector::UpVector;
	dir.Normalize();
}


// Called every frame
void UEnemyBMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	currentTime += DeltaTime;

	if (currentTime <= maxTime)
	{
		PRINTLOG(TEXT("tttttttttttttttt"));
		FVector vel = dir * speed;
		FVector P0 = GetOwner()->GetActorLocation();
		FVector P = P0 + vel * DeltaTime;

		GetOwner()->SetActorLocation(P, true);
	}
	else 
	{
		speed = 0;
		if (currentTime >= delayTime)
		{
			dir = dir * -1;
			currentTime = 0;
			speed = 400;
		}
	}
}

