// Fill out your copyright notice in the Description page of Project Settings.


#include "DataStructures/AvatarTeam.h"
#include "GameSimulation/Entities/PlayerAvatar.h"

void UAvatarTeam::Initialize(FString TeamName)
{
	Name = TeamName;
	
}

void UAvatarTeam::AddPlayer(APlayerAvatar* Player)
{
	Player->SetTeam(this);
	Players.Add(Player);

}
