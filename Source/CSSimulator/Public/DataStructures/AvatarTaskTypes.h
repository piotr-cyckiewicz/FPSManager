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
	StringList,
	None
};

USTRUCT(BlueprintType)
struct FTaskParameterData {
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName ParameterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ETaskParamaterType ParameterType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector Location;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Number;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> NumberList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString String;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> StringList;

	FTaskParameterData() {
		ParameterName = FName(TEXT("Invalid Name"));
		ParameterType = ETaskParamaterType::None;
		Location = FVector::Zero();
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, ETaskParamaterType parameterType) {
		ParameterName = parameterName;
		ParameterType = parameterType;
		Location = FVector::Zero();
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, FVector location) {
		ParameterName = parameterName;
		ParameterType = ETaskParamaterType::Location;
		Location = location;
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, float number) {
		ParameterName = parameterName;
		ParameterType = ETaskParamaterType::Number;
		Location = FVector::Zero();
		Number = number;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, TArray<float> numberList) {
		ParameterName = parameterName;
		ParameterType = ETaskParamaterType::NumberList;
		Location = FVector::Zero();
		Number = 0;
		NumberList = numberList;
		String = FString(TEXT("Invalid Content of this FString"));
	}

	FTaskParameterData(FName parameterName, FString string) {
		ParameterName = parameterName;
		ParameterType = ETaskParamaterType::String;
		Location = FVector::Zero();
		Number = 0;
		String = string;
	}

	FTaskParameterData(FName parameterName, TArray<FString> stringList) {
		ParameterName = parameterName;
		ParameterType = ETaskParamaterType::StringList;
		Location = FVector::Zero();
		Number = 0;
		String = FString(TEXT("Invalid Content of this FString"));
		StringList = stringList;
	}
};