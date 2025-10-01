// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSimulation/Entities/PlayerAvatar.h"
#include "DataStructures/AvatarTasks/AvatarTaskBase.h"

// Sets default values
APlayerAvatar::APlayerAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerAvatar::BeginPlay()
{
	TaskQueuePriority.Init(0, 0);
	TaskQueue.Init(CreateDefaultSubobject<UAvatarTaskBase>(FName(TEXT("Name")), false), 0);
}

void APlayerAvatar::SetTeam(UAvatarTeam* team)
{
	Team = team;
}

void APlayerAvatar::AddTask(UAvatarTaskBase* Task)
{
	TaskQueue.Add(Task);
	if (TaskQueuePriority.IsEmpty()) {
		TaskQueuePriority.Add(0);
	}
	else {
		TaskQueuePriority.Add(TaskQueuePriority[TaskQueuePriority.Num() - 1] + 1);
	}
}

bool APlayerAvatar::RescheduleTaskUnchecked(int32 TaskID, int32 NewPriority, int32 NewPlacing)
{
	if (TaskID >= TaskQueuePriority.Num()) return false;

	int index = 0;
	for (int i = 0; i < TaskQueuePriority.Num(); i++) {
		if (TaskQueuePriority[i] == NewPriority) {
			index = TaskQueuePriority[i];
		}
	}

	index += NewPlacing - 1;
	
	if (index == TaskID || index >= TaskQueuePriority.Num()) return false;
	if (index + 1 < TaskQueuePriority.Num() && TaskQueuePriority[index + 1] < NewPriority) return false;
	if (index - 1 >= 0 && TaskQueuePriority[index - 1] > NewPriority) return false;

	TaskQueue.Insert(TaskQueue[TaskID], index);
	TaskQueuePriority.Insert(NewPriority, index);

	TaskQueue.RemoveAt(TaskID + 1);
	TaskQueuePriority.RemoveAt(TaskID + 1);

	return true;
}
