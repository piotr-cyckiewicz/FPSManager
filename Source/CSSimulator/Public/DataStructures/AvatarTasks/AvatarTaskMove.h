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
	
protected:
	FVector Goal;


public:

	// Needed for visualising path
	virtual bool NeedActiveMousePosition() override;

	UFUNCTION(BlueprintCallable)
	void SetGoalPosition(FVector Position);
};
