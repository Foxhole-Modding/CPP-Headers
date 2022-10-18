#ifndef UE4SS_SDK_BPAspenTree02Replacement_HPP
#define UE4SS_SDK_BPAspenTree02Replacement_HPP

class ABPAspenTree02Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandSplinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPAspenTree02Replacement(int32 EntryPoint);
};

#endif
