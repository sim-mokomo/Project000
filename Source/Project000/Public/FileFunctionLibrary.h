// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/FileHelper.h"
#include "HAL/FileManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT000_API UFileFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static bool LoadFileToString(FString& Result, FString Filename);
	
	UFUNCTION(BlueprintCallable)
	static void GetFilesInDirectory(TArray<FString>& FoundFiles,FString Directory, FString FileExtension);
};
