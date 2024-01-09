// Copyright (c) 2024 Chippy. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Engine/NetConnection.h"
#include "UNetworkInformation.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKINFORMATION_API UUNetworkInformation : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	int32 OutPacketsPerSecond;

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	int32 InPacketsPerSecond;

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	int32 OutBytesPerSecond;

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	int32 InBytesPerSecond;

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	int32 OutPacketLoss;

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	int32 InPacketLoss;

	UPROPERTY(BlueprintReadOnly, Category = "NetworkInformation");
	bool bHasValidNetConnection;

	// virtual void Tick(FGeometry MyGeometry, float DeltaTime);

	//protected:
	UFUNCTION(BlueprintCallable, Category = "NetworkInformation")
	void UpdateNetStats(); 

};
