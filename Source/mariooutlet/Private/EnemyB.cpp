// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyB.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <EnemyBMove.h>
// Sets default values
AEnemyB::AEnemyB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 1. Box Collider
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	RootComponent = boxComp;

	// 2. �ܰ�
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	meshComp->SetupAttachment(boxComp);

	// meshComp �� Collision �� ��Ȱ��ȭ �Ѵ�.
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 3. ���ʹ� �̵�
	enemyBMove = CreateDefaultSubobject<UEnemyBMove>(TEXT("EnemyBMove"));
}

// Called when the game starts or when spawned
void AEnemyB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

