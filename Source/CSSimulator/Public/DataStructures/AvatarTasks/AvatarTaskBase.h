// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataStructures/AvatarTaskTypes.h"
#include "AvatarTaskBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class CSSIMULATOR_API UAvatarTaskBase : public UObject
{
	GENERATED_BODY()

public:
	UAvatarTaskBase();
	

	///
	// Hints for mouse clicking while this task is actively selected
	///

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool NeedActiveMousePosition();


protected:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
 	TObjectPtr<UTexture2D> Icon;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TArray<FTaskParameterData> Parameters;
};
