// Fill out your copyright notice in the Description page of Project Settings.


#include "UI_Gameover.h"

void UUI_Gameover::NativeConstruct()
{
	if (Button_Restart)
	{
		Button_Restart->OnClicked.AddDynamic(this, &UUI_Gameover::OnRestartClicked);
	}

	if (Button_Quit)
	{
		Button_Quit->OnClicked.AddDynamic(this, &UUI_Gameover::OnQuitClicked);
	}
}

void UUI_Gameover::OnRestartClicked()
{
	Restart();
}

void UUI_Gameover::OnQuitClicked()
{
	Quit();
}

void UUI_Gameover::Restart()
{
	// ������ �����
	UGameplayStatics::OpenLevel(this, TEXT("Ingame"));		//GetWorld()�־��൵ �ȴ�.
}

void UUI_Gameover::Quit()
{
	// ������ �����Ѵ�.
	UKismetSystemLibrary::QuitGame(this, GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, false);
}
