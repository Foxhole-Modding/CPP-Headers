#ifndef UE4SS_SDK_BPFacilityMineResource_HPP
#define UE4SS_SDK_BPFacilityMineResource_HPP

class ABPFacilityMineResource_C : public AFacilityRefinery
{
    class UWarAudioComponent* ProducingSfx;
    class USkeletalMeshComponent* MainMesh;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* InputMesh0;
    class UBuildSocketComponent* PipeInput0;
    class UParticleSystemComponent* Smoke;

};

#endif
