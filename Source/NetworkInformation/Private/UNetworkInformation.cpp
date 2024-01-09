// Copyright (c) 2024 Chippy. All rights reserved.

#include "UNetworkInformation.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/NetConnection.h"

void UUNetworkInformation::UpdateNetStats()
{
	if (APlayerController* PlayerController = GetOwningPlayer())
	{
		if (PlayerController)
		{
			UNetConnection* NetConnection = PlayerController->NetConnection;
			if (NetConnection)
			{
				//Set All Variables
				OutPacketsPerSecond = NetConnection->OutPacketsPerSecond;
				InPacketsPerSecond = NetConnection->InPacketsPerSecond;
				OutBytesPerSecond = NetConnection->OutBytesPerSecond;
				InBytesPerSecond = NetConnection->InBytesPerSecond;
				OutPacketLoss = NetConnection->OutPacketsLost;
				InPacketLoss = NetConnection->InPacketsLost;
				bHasValidNetConnection = true;
				// Remove logs UE_LOG(LogTemp, Log, TEXT("Updated Network stats, OutPacketsPerSecond: %d InPacketsPerSecond: %d OutBytesPerSecond: %d InBytesPerSecond: %d OutPacketsLost: %d InPacketsLost: %d Ping: %f "), OutPacketsPerSecond, InPacketsPerSecond, OutBytesPerSecond, InBytesPerSecond, OutPacketLoss, InPacketLoss);
			}
			else
			{
				// Handle the case where NetConnection is null
				// Remove logs UE_LOG(LogTemp, Warning, TEXT("PlayerController's NetConnection is null.")); 

				//Set All Variables To 0
				OutPacketsPerSecond = 0;
				InPacketsPerSecond = 0;
				OutBytesPerSecond = 0;
				InBytesPerSecond = 0;
				OutPacketLoss = 0;
				InPacketLoss = 0;

				bHasValidNetConnection = false;
			}
		}
		else
		{
			// Remove logs Handle the case where PlayerController is null
			UE_LOG(LogTemp, Warning, TEXT("PlayerController is null."));

			bHasValidNetConnection = false;
		}
	}
}
