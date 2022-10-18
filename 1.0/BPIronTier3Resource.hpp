#ifndef UE4SS_SDK_BPIronTier3Resource_HPP
#define UE4SS_SDK_BPIronTier3Resource_HPP

class ABPIronTier3Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_E3EB68194880B8D36AF392ABBDC88D1C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E3EB68194880B8D36AF392ABBDC88D1C;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPIronTier3Resource(int32 EntryPoint);
};

#endif
