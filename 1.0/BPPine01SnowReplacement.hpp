#ifndef UE4SS_SDK_BPPine01SnowReplacement_HPP
#define UE4SS_SDK_BPPine01SnowReplacement_HPP

class ABPPine01SnowReplacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UParticleSystemComponent* NoMansLandSplinter;
    class UAudioComponent* Splinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPPine01SnowReplacement(int32 EntryPoint);
};

#endif
