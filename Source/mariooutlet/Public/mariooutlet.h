// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// Log ī�װ� �߰�
DECLARE_LOG_CATEGORY_EXTERN(mariooutlet, Log, All)

// ��𿡼� �α׸� ��� �ִ���, �ٹ�ȣ���� �˷��ִ� ���
#define CALLINFO ( FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")") )
#define PRINT_CALLINFO() UE_LOG(mariooutlet, Warning, TEXT("%s"), *CALLINFO)

#define PRINTLOG(fmt, ...) UE_LOG(mariooutlet, Warning, TEXT("%s %s"), *CALLINFO, *FString::Printf(fmt, ##__VA_ARGS__))