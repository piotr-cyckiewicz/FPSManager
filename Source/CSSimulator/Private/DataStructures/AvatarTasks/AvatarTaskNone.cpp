// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStructures/AvatarTasks/AvatarTaskNone.h"

bool UAvatarTaskNone::ShouldMouseClickTriggerMovement()
{
	return false;
}

bool UAvatarTaskNone::NeedActiveMousePosition()
{
	return false;
}