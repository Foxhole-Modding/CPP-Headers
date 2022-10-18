#ifndef UE4SS_SDK_BPPine03DeadReplacement_HPP
#define UE4SS_SDK_BPPine03DeadReplacement_HPP

class ABPPine03DeadReplacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPPine03DeadReplacement(int32 EntryPoint);
};

#endif
