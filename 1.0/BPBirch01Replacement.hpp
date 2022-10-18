#ifndef UE4SS_SDK_BPBirch01Replacement_HPP
#define UE4SS_SDK_BPBirch01Replacement_HPP

class ABPBirch01Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandSplinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPBirch01Replacement(int32 EntryPoint);
};

#endif
