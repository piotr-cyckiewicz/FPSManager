// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AvatarTaskTypes.generated.h"

UENUM(BlueprintType)
enum class ETaskParamaterType : uint8
{
	Location,
	Number,
	NumberList,
	String,
	StringList
};

USTRUCT(BlueprintType)
struct FTaskParameterData {
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FName ParameterName;

	UPROPERTY(BlueprintReadWrite)
	ETaskParamaterType ParameterType;

	UPROPERTY(BlueprintReadWrite)
	FVector Location;

	UPROPERTY(BlueprintReadWrite)
	float Number;

	UPROPERTY(BlueprintReadWrite)
	TArray<float> NumberList;

	UPROPERTY(BlueprintReadWrite)
	FString String;

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> StringList;

	FTaskParameterData() {
		ParameterName = FName(TEXT("Invalid Name"));
		ParameterType = ETaskParamaterType::StringList;
		Location = FVector::Zero();
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
	}
};