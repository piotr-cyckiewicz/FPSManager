// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerAvatar.generated.h"

class UAvatarTeam;
class UAvatarTaskBase;

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

	UPROPERTY(BlueprintReadWrite)
	TArray<int32> TaskQueuePriority;
	UPROPERTY(BlueprintReadWrite)
	TArray<UAvatarTaskBase*> TaskQueue;


protected:
	virtual void BeginPlay() override;

public:	
	void SetTeam(UAvatarTeam* team);

	UFUNCTION(BlueprintCallable)
	void AddTask(UAvatarTaskBase* Task);

	UFUNCTION(BlueprintCallable)
	bool RescheduleTaskUnchecked(int32 TaskID, int32 NewPriority, int32 NewPlacing);

};
