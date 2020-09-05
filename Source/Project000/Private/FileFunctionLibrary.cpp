// Fill out your copyright notice in the Description page of Project Settings.


#include "FileFunctionLibrary.h"

bool UFileFunctionLibrary::LoadFileToString(FString& Result, FString Filename)
{
	return FFileHelper::LoadFileToString(Result, *Filename);
}

void UFileFunctionLibrary::GetFilesInDirectory(TArray<FString>& FoundFiles, FString Directory, FString FileExtension)
{
	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFiles(FoundFiles, *Directory, *FileExtension);
}
