// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyA.generated.h"

UCLASS()
class MARIOOUTLET_API AEnemyA : public AActor
{
	GENERATED_BODY()

public:
	// ���ʹ��� ��ü�� ����� �ʹ�.
	// �ʿ� �Ӽ� : boxComp, meshComp, 
	UPROPERTY(VisibleAnywhere, Category = "Component")
		class UBoxComponent* boxComp;
	UPROPERTY(VisibleAnywhere, Category = "Component")
		class UStaticMeshComponent* meshComp;

	// EnemyAMove ��� ������� �߰��ؾ� �Ѵ�.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
		class UEnemyAMove* enemyAMove;
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component")
		//class UEnemyAMove* enemyAMove;

public:
	// Sets default values for this actor's properties
	AEnemyA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
