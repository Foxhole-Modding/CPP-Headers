#ifndef UE4SS_SDK_BPIronTier2Resource_HPP
#define UE4SS_SDK_BPIronTier2Resource_HPP

class ABPIronTier2Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_86B9AEC34F6CFB200404708237754396;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_86B9AEC34F6CFB200404708237754396;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPIronTier2Resource(int32 EntryPoint);
};

#endif
