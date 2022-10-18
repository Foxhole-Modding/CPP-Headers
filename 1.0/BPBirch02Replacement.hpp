#ifndef UE4SS_SDK_BPBirch02Replacement_HPP
#define UE4SS_SDK_BPBirch02Replacement_HPP

class ABPBirch02Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPBirch02Replacement(int32 EntryPoint);
};

#endif
