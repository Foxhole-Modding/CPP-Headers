#ifndef UE4SS_SDK_BPConcreteMixer_HPP
#define UE4SS_SDK_BPConcreteMixer_HPP

class ABPConcreteMixer_C : public AConcreteMixer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* RefiningSFX;
    bool bIsPefiningSFXActive;

    void ReceiveBeginPlay();
    void UpdateVisuals_FastTick();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPConcreteMixer(int32 EntryPoint);
};

#endif
