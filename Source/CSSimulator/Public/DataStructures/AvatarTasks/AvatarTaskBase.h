// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AvatarTaskBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CSSIMULATOR_API UAvatarTaskBase : public UObject
{
	GENERATED_BODY()

public:
	UAvatarTaskBase();
	

	///
	// Hints for mouse clicking while this task is actively selected
	///
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool ShouldMouseClickTriggerMovement();
};
