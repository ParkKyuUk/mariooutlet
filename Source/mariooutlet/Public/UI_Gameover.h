// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Kismet/GameplayStatics.h>
#include <Components/Button.h>
#include <Components/TextBlock.h>
#include "UI_Gameover.generated.h"

/**
 * 
 */
UCLASS()
class MARIOOUTLET_API UUI_Gameover : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//������   BP ������ Event Construct���� �긦 ȣ���Ѵ�.
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnRestartClicked();
	UFUNCTION()
	void OnQuitClicked();

	//UI ���� ��������
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Button_Restart;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Button_Quit;

	UFUNCTION(BlueprintCallable)
	void Restart();

	UFUNCTION(BlueprintCallable)
	void Quit();
};
