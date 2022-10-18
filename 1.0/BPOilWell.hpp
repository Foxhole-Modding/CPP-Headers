#ifndef UE4SS_SDK_BPOilWell_HPP
#define UE4SS_SDK_BPOilWell_HPP

class ABPOilWell_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* SmallSteam;
    class UParticleSystemComponent* LargeSteam;
    class UDecalComponent* Decal;
    class USkeletalMeshComponent* MineMesh;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;
    class UAudioComponent* ProducingSfx;
    bool bIsProducingSFXActive;

    void ReceiveBeginPlay();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPOilWell(int32 EntryPoint);
};

#endif
