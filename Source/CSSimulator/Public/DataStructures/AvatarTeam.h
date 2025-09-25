// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AvatarTeam.generated.h"

class APlayerAvatar;

UCLASS(Blueprintable)
class CSSIMULATOR_API UAvatarTeam : public UObject
{
	GENERATED_BODY()
	
public:
	FString Name;
protected:
	UPROPERTY()
	TArray<TObjectPtr<APlayerAvatar>> Players;

public:
	UFUNCTION(BlueprintCallable)
	void Initialize(FString TeamName);
	UFUNCTION(BlueprintCallable)
	void AddPlayer(APlayerAvatar* Player);

};
