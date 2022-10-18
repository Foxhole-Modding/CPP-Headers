#ifndef UE4SS_SDK_BPFacilityMineOil_HPP
#define UE4SS_SDK_BPFacilityMineOil_HPP

class ABPFacilityMineOil_C : public AFacilityRefinery
{
    class UWarAudioComponent* ProducingSfx;
    class UParticleSystemComponent* ProducingFX2;
    class UParticleSystemComponent* ProducingFX3;
    class UParticleSystemComponent* ProducingFX;
    class UStaticMeshComponent* PowerLineConnector;
    class UDecalComponent* Decal;
    class USkeletalMeshComponent* MineMesh;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;

};

#endif
