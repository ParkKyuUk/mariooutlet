// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"
#include "UI_Ingame.generated.h"

/**
 * 
 */
UCLASS()
class MARIOOUTLET_API UUI_Ingame : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeTick(const FGeometry& MyGeometry, float DeltaSeconds) override;

public:

	// �ð� ����
	UPROPERTY(EditAnyWhere)
	int limitTime = 500;
	float curTime = 0;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Time_Text;

	void PrintLimitTime();


	// ���� 
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Life_Text;

	void PrintLife(int life);


	// ����
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Coin_Text;

	void PrintCoin(int coin);


	//  ����Ʈ 
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Point_Text;

	void PrintPoint(int point);

};
