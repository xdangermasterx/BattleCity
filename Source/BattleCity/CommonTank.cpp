// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonTank.h"
#include "Missile.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
ACommonTank::ACommonTank()
{
	
	//Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));


	//Mesh->SetupAttachment(Box);
	//Arrow->SetupAttachment(Box);
	Arrow->SetupAttachment(Mesh);

	SetRootComponent(Mesh);



}

void ACommonTank::Fire()
{
	MakeNoise(1.0f,this,GetActorLocation());

	if (CanFire && MissileClass) {
	
		SpawnActor(MissileClass,);
	
	}


}
// Called when the game starts or when spawned
void ACommonTank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void ACommonTank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

