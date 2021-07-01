// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAMove.h"
#include "EnemyA.h"
#include "mariooutlet.h"
#include "EnemyBackzone.h"

// Sets default values for this component's properties
UEnemyAMove::UEnemyAMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	
	// ��� �������� �ϴϱ� True
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyAMove::BeginPlay()
{
	Super::BeginPlay();

	// ...
	// �÷��̾ ���ʿ��� ���������� �̵��ϴϱ�
	// ���ʹ̵� ���ʹ������� ���� �����̰� �Ѵ�.
	dir = FVector::LeftVector;
	dir.Normalize();
}


// Called every frame
void UEnemyAMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector vel = dir * speed;

	FVector P0 = GetOwner()->GetActorLocation();
	FVector P = P0 + vel * DeltaTime;

	GetOwner()->SetActorLocation(P, true);
}
// Enemy �� EnemyBackZone �� �ε����� �� dir * -1 �� �ؼ� ������ �ݴ�� �ٲ��ش�.
// �ʿ� �Ӽ� : EnemyBackZone
void UEnemyAMove::OnCollisionEnter(AActor * OtherActor)
{
	auto ebz = Cast<AEnemyBackZone>(OtherActor);
	if (ebz)
	{
		PRINTLOG(TEXT("111111111111111"));
		// ������ �ݴ�� �ٲ��ش�.
		dir = dir * -1;

		//// R = R0 + rt
		//FRotator R0 = GetOwner()->GetActorRotation();
		//FRotator r = FRotator();
		
		//for (int i = 1; i <= 180; ++i)
		//{
		//	r = FRotator(0, 0, i);
		//	PRINTLOG(TEXT("2222222222222"));
		//}
		//PRINTLOG(TEXT("3333333333333"));
		//GetOwner()->SetActorRotation(r);
	}
}

	
	

// ���� �ε������� EnemyBackZone �̶�� dir�� -�� ����.
