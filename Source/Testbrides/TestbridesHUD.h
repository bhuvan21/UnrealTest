// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TestbridesHUD.generated.h"

UCLASS()
class ATestbridesHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestbridesHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

