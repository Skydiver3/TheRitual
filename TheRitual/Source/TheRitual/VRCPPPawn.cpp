// Fill out your copyright notice in the Description page of Project Settings.


#include "VRCPPPawn.h"

// Sets default values
AVRCPPPawn::AVRCPPPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRTrackingCenter = CreateDefaultSubobject<USceneComponent>(TEXT("VRTrackingCenter"));
	Head = CreateDefaultSubobject<UCameraComponent>(TEXT("Head"));
	outputText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("outputText"));

	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
	RightHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightHand"));

	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
	LeftHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftHand"));


	Head->SetupAttachment(VRTrackingCenter);
	outputText->SetupAttachment(Head);
	LeftController->SetupAttachment(VRTrackingCenter);
	LeftHand->SetupAttachment(LeftController);
	RightController->SetupAttachment(VRTrackingCenter);
	RightHand->SetupAttachment(RightController);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> cone(TEXT("/Engine/BasicShapes/Cone"));
	this->RightHand->SetStaticMesh(cone.Object);
	this->LeftHand->SetStaticMesh(cone.Object);

	static ConstructorHelpers::FObjectFinder<UMaterial> graymat(TEXT("/Engine/BasicShapes/BasicShapesMaterial"));
	this->RightHand->SetMaterial(0, graymat.Object);
	this->LeftHand->SetMaterial(0, graymat.Object);


	RightController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	LeftController->MotionSource = FXRMotionControllerBase::LeftHandSourceId;

	this->RootComponent = VRTrackingCenter;

}

// Called when the game starts or when spawned
void AVRCPPPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRCPPPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRCPPPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("TurnRight", IE_Pressed, this, &AVRCPPPawn::SnapTurnRight);
	PlayerInputComponent->BindAction("TurnLeft", IE_Pressed, this, &AVRCPPPawn::SnapTurnLeft);
	PlayerInputComponent->BindAction("TeleportForward", IE_Pressed, this, &AVRCPPPawn::JumpTeleportForward);

}

void AVRCPPPawn::JumpTeleportForward() {
	FVector offset = Head->GetForwardVector() * jumpTeleportForwardDistance;
	offset.Z = 0;
	this->AddActorWorldOffset(offset);
}
void AVRCPPPawn::SnapTurnRight() {
	this->AddActorWorldRotation(FRotator(0, snapTurnAngle, 0));
}
void AVRCPPPawn::SnapTurnLeft() {
	this->AddActorWorldRotation(FRotator(0, -snapTurnAngle, 0));
}
