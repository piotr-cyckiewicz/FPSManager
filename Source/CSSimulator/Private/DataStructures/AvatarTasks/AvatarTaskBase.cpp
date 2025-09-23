// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStructures/AvatarTasks/AvatarTaskBase.h"

UAvatarTaskBase::UAvatarTaskBase()
{

}

bool UAvatarTaskBase::ShouldMouseClickTriggerMovement()
{
	return false;
}

bool UAvatarTaskBase::NeedActiveMousePosition()
{
	return false;
}
