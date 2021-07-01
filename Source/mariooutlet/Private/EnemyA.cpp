// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyA.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <EnemyAMove.h>

// Sets default values
AEnemyA::AEnemyA()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	// Tick �� ��� ����� ������ ����.
	PrimaryActorTick.bCanEverTick = false;

	// 1. Box Collider
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	RootComponent = boxComp;

	// 2. �ܰ�
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);

	// meshComp �� Collision �� ��Ȱ��ȭ �Ѵ�.
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 3. ���ʹ� �̵�
	enemyAMove = CreateDefaultSubobject<UEnemyAMove>(TEXT("EnemyAMove"));
}

// Called when the game starts or when spawned
void AEnemyA::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemyA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
