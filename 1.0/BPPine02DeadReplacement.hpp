#ifndef UE4SS_SDK_BPPine02DeadReplacement_HPP
#define UE4SS_SDK_BPPine02DeadReplacement_HPP

class ABPPine02DeadReplacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPPine02DeadReplacement(int32 EntryPoint);
};

#endif
