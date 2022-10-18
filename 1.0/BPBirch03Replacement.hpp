#ifndef UE4SS_SDK_BPBirch03Replacement_HPP
#define UE4SS_SDK_BPBirch03Replacement_HPP

class ABPBirch03Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Fire;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPBirch03Replacement(int32 EntryPoint);
};

#endif
