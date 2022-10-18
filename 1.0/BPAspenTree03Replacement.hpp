#ifndef UE4SS_SDK_BPAspenTree03Replacement_HPP
#define UE4SS_SDK_BPAspenTree03Replacement_HPP

class ABPAspenTree03Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandSplinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPAspenTree03Replacement(int32 EntryPoint);
};

#endif
