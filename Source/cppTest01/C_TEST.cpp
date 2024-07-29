// Fill out your copyright notice in the Description page of Project Settings.

#include "C_TEST.h"
#include "Engine/Classes/Components/SphereComponent.h"

// Sets default values
AC_TEST::AC_TEST()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SetRootComponent(m_pSceneComponent);
	
	m_pStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	m_pStaticMeshComponent->SetupAttachment(m_pSceneComponent);

	UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/StarterContent/Props/SM_Statue.SM_Statue"));
	m_pStaticMeshComponent->SetStaticMesh(Mesh);

	m_pSphereCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	m_pSphereCollisionComponent->SetupAttachment(m_pSceneComponent);

}

// Called when the game starts or when spawned
void AC_TEST::BeginPlay()
{
	Super::BeginPlay();
	//m_pSphereComponent->CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

// Called every frame
void AC_TEST::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

