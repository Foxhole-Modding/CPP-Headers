#ifndef UE4SS_SDK_BPAspenTree01Replacement_HPP
#define UE4SS_SDK_BPAspenTree01Replacement_HPP

class ABPAspenTree01Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandSplinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPAspenTree01Replacement(int32 EntryPoint);
};

#endif
