// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "C_TEST.generated.h"

UCLASS()
class CPPTEST01_API AC_TEST : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_TEST();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* m_pSceneComponent;
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* m_pStaticMeshComponent;
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* m_pSphereCollisionComponent;

};
