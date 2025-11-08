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

	FTaskParameterData(FName parameterName, ETaskParamaterType parameterType, FVector location) {
		ParameterName = parameterName;
		ParameterType = parameterType;
		Location = location;
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, ETaskParamaterType parameterType, float number) {
		ParameterName = parameterName;
		ParameterType = parameterType;
		Location = FVector::Zero();
		Number = number;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, ETaskParamaterType parameterType, TArray<float> numberList) {
		ParameterName = parameterName;
		ParameterType = parameterType;
		Location = FVector::Zero();
		Number = 0;
		NumberList = numberList;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, ETaskParamaterType parameterType, FString string) {
		ParameterName = parameterName;
		ParameterType = parameterType;
		Location = FVector::Zero();
		Number = 0;
		String = string;
	}

	FTaskParameterData(FName parameterName, ETaskParamaterType parameterType, TArray<FString> stringList) {
		ParameterName = parameterName;
		ParameterType = parameterType;
		Location = FVector::Zero();
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
		StringList = stringList;
	}
};