// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataStructures/AvatarTasks/AvatarTaskBase.h"
#include "AvatarTaskNone.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CSSIMULATOR_API UAvatarTaskNone : public UAvatarTaskBase
{
	GENERATED_BODY()
	

	// Hints for mouse clicking while this task is actively selected
	virtual bool ShouldMouseClickTriggerMovement() override;

	// Needed for visualising path - when no task is actively selected, we assume player wants to move
	virtual bool NeedActiveMousePosition() override;
};
