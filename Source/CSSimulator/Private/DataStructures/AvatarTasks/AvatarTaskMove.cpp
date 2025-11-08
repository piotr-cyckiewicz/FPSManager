// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStructures/AvatarTasks/AvatarTaskMove.h"

UAvatarTaskMove::UAvatarTaskMove()
{
	Parameters.Add(FTaskParameterData(FName(TEXT("Destination")), FVector(0, 0, 0)));
}

bool UAvatarTaskMove::NeedActiveMousePosition()
{
	return true;
}

void UAvatarTaskMove::SetGoalPosition(FVector Position)
{
	Goal = Position;
}
