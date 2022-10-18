#ifndef UE4SS_SDK_BPFirBunch01Replacement_HPP
#define UE4SS_SDK_BPFirBunch01Replacement_HPP

class ABPFirBunch01Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFirBunch01Replacement(int32 EntryPoint);
};

#endif
