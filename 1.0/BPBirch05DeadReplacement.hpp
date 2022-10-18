#ifndef UE4SS_SDK_BPBirch05DeadReplacement_HPP
#define UE4SS_SDK_BPBirch05DeadReplacement_HPP

class ABPBirch05DeadReplacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPBirch05DeadReplacement(int32 EntryPoint);
};

#endif
