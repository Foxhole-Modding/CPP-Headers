#ifndef UE4SS_SDK_BPComponentMine_HPP
#define UE4SS_SDK_BPComponentMine_HPP

class ABPComponentMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Collision05;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* ScrapPiece_06;
    class UParticleSystemComponent* ScrapPile;
    class UParticleSystemComponent* Scrap;
    class UPointLightComponent* Level2Light;
    class UAudioComponent* ProducingSfx;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;
    class UParticleSystemComponent* Level2Smoke;
    class USkeletalMeshComponent* Level2;
    class UStaticMeshComponent* Wheelbarrow;
    class UBoxComponent* Collision04;
    class UBoxComponent* Collision03;
    class UBoxComponent* Collision02;
    class UBoxComponent* Collision01;
    class UDecalComponent* Decal;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* Level1Smoke;
    class USkeletalMeshComponent* MineMesh;
    float ConveyerSpeed;
    float ConveyerTranslation;
    class UMaterialInstanceDynamic* ConveyerMaterial;
    bool bIsProducingSFXActive;

    void ReceiveBeginPlay();
    void UpdateVisuals_FastTick();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPComponentMine(int32 EntryPoint);
};

class UPLACEHOLDER-CLASS__ABP_ComponentMine_C_2147482306
{
};

#endif
