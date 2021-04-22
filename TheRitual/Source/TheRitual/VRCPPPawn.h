// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/TextRenderComponent.h"
#include "MotionControllerComponent.h"
#include "UObject/ConstructorHelpers.h"
#include <Runtime/HeadMountedDisplay/Public/XRMotionControllerBase.h>
#include "VRCPPPawn.generated.h"

UCLASS()
class THERITUAL_API AVRCPPPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRCPPPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		USceneComponent* VRTrackingCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		UCameraComponent* Head;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		UTextRenderComponent* outputText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		UMotionControllerComponent* LeftController;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		UMotionControllerComponent* RightController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		UStaticMeshComponent* LeftHand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __hide)
		UStaticMeshComponent* RightHand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __locomotion)
		float snapTurnAngle = 45.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __locomotion)
		float jumpTeleportForwardDistance = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __locomotion)
		float smoothTurnSpeed = 0.1f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = __locomotion)
		float smoothWalkingSpeed = 0.1f;

	void SnapTurnRight();
	void SnapTurnLeft();
	void JumpTeleportForward();
	void TeleportTo(FVector destination);


};
