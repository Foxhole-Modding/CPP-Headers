#ifndef UE4SS_SDK_BPBirch06Replacement_HPP
#define UE4SS_SDK_BPBirch06Replacement_HPP

class ABPBirch06Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPBirch06Replacement(int32 EntryPoint);
};

#endif
