// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerAvatar.generated.h"

class UAvatarTeam;

UCLASS()
class CSSIMULATOR_API APlayerAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerAvatar();

protected:
	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UAvatarTeam> Team;

public:	
	void SetTeam(UAvatarTeam* team);



};
