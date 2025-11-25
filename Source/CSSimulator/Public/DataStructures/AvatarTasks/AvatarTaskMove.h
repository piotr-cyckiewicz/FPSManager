// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataStructures/AvatarTasks/AvatarTaskBase.h"
#include "AvatarTaskMove.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class CSSIMULATOR_API UAvatarTaskMove : public UAvatarTaskBase
{
	GENERATED_BODY()

public:
	UAvatarTaskMove();
	
protected:
	FVector Goal;


public:

	UFUNCTION(BlueprintCallable)
	void SetGoalPosition(FVector Position);
};
