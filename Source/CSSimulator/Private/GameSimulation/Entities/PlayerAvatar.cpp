// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSimulation/Entities/PlayerAvatar.h"

// Sets default values
APlayerAvatar::APlayerAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerAvatar::SetTeam(UAvatarTeam* team)
{
	Team = team;
}