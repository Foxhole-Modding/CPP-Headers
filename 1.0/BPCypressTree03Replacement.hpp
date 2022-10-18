#ifndef UE4SS_SDK_BPCypressTree03Replacement_HPP
#define UE4SS_SDK_BPCypressTree03Replacement_HPP

class ABPCypressTree03Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Splinter;
    class UParticleSystemComponent* NoMansLandTreeFire;
    class UAudioComponent* Fire;
    class UParticleSystemComponent* NoMansLandSplinter;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPCypressTree03Replacement(int32 EntryPoint);
};

#endif
