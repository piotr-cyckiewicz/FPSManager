// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStructures/AvatarTasks/AvatarTaskMove.h"

bool UAvatarTaskMove::ShouldMouseClickTriggerMovement()
{
	return true;
}

bool UAvatarTaskMove::NeedActiveMousePosition()
{
	return true;
}

void UAvatarTaskMove::SetGoalPosition(FVector Position)
{
	Goal = Position;
}
