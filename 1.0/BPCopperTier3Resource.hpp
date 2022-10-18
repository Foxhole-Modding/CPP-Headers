#ifndef UE4SS_SDK_BPCopperTier3Resource_HPP
#define UE4SS_SDK_BPCopperTier3Resource_HPP

class ABPCopperTier3Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_B8529EE84DCE7215791F80AC6435BA0D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B8529EE84DCE7215791F80AC6435BA0D;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCopperTier3Resource(int32 EntryPoint);
};

#endif
