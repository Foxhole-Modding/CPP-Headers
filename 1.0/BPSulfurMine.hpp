#ifndef UE4SS_SDK_BPSulfurMine_HPP
#define UE4SS_SDK_BPSulfurMine_HPP

class ABPSulfurMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;
    class UParticleSystemComponent* SulfurSteam2;
    class UParticleSystemComponent* Steam;
    class UParticleSystemComponent* Light;
    class UPointLightComponent* PointLight1;
    class UAudioComponent* ProducingSfx;
    class UBoxComponent* Collision03;
    class UBoxComponent* Collision02;
    class UBoxComponent* Collision01;
    class UDecalComponent* Decal3;
    class UStaticMeshComponent* SulfurResource02;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* Wheelbarrow;
    class UStaticMeshComponent* FarmTools_Shovel;
    class UStaticMeshComponent* StaticMesh8;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Sulfur;
    class UParticleSystemComponent* SulfurSmoke;
    class UStaticMeshComponent* SulfurResource03;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* BaseStone;
    class UParticleSystemComponent* Smoke;
    class USkeletalMeshComponent* Level2;
    class USkeletalMeshComponent* MineMesh;
    bool bIsProducingSFXActive;

    void UpdateVisuals_FastTick();
    void ReceiveBeginPlay();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPSulfurMine(int32 EntryPoint);
};

class UPLACEHOLDER-CLASS__ABP_SulfurMine_C_2147482293
{
};

#endif
