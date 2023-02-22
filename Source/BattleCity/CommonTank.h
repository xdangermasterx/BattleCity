// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CommonTank.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UArrowComponent;
class UFloatingPawnMovement;

UCLASS(Abstract)
class BATTLECITY_API ACommonTank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACommonTank();


	UFUNCTION(BlueprintCallable)
		void Fire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere)
	//	UBoxComponent* Box;	
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Mesh;	
	UPROPERTY(VisibleAnywhere )
		UArrowComponent* Arrow;

	UPROPERTY(VisibleAnywhere)
		UFloatingPawnMovement* Movement;

	UPROPERTY(EditDefaultsOnly, Category = Missile)
		TSubclassOf<class AMissile> MissileClass;


	UPROPERTY()
		bool CanFire;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


};
