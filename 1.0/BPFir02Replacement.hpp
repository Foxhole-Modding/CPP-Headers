#ifndef UE4SS_SDK_BPFir02Replacement_HPP
#define UE4SS_SDK_BPFir02Replacement_HPP

class ABPFir02Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFir02Replacement(int32 EntryPoint);
};

#endif
