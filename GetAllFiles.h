// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetAllFiles.generated.h"

/**
 * 
 */
UCLASS()
class GLTFVOLCAP_API UGetAllFiles : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintCallable)
	static TArray<FString> GetFiles(FString folderPath);
};
