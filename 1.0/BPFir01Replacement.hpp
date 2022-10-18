#ifndef UE4SS_SDK_BPFir01Replacement_HPP
#define UE4SS_SDK_BPFir01Replacement_HPP

class ABPFir01Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFir01Replacement(int32 EntryPoint);
};

#endif
