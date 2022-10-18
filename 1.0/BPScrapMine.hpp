#ifndef UE4SS_SDK_BPScrapMine_HPP
#define UE4SS_SDK_BPScrapMine_HPP

class ABPScrapMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ScrapPiece_07;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* ScrapPiece_06;
    class UParticleSystemComponent* Sparks;
    class UParticleSystemComponent* Steam;
    class UParticleSystemComponent* ScrapPile;
    class UParticleSystemComponent* Scrap;
    class UPointLightComponent* Level2Light;
    class UAudioComponent* ProducingSfx;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;
    class UStaticMeshComponent* FarmTools_Shovel;
    class UParticleSystemComponent* Level2Smoke;
    class USkeletalMeshComponent* Level2;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* Wheelbarrow;
    class UBoxComponent* Collision04;
    class UBoxComponent* Collision03;
    class UBoxComponent* Collision02;
    class UBoxComponent* Collision01;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
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
    void ExecuteUbergraph_BPScrapMine(int32 EntryPoint);
};

#endif
