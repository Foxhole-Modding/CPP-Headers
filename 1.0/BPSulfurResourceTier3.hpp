#ifndef UE4SS_SDK_BPSulfurResourceTier3_HPP
#define UE4SS_SDK_BPSulfurResourceTier3_HPP

class ABPSulfurResourceTier3_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Resource3;
    FVector Timeline_0_NewTrack_0_A5116ABE47B7C7AB1BA658BBC8A44D20;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A5116ABE47B7C7AB1BA658BBC8A44D20;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSulfurResourceTier3(int32 EntryPoint);
};

#endif
