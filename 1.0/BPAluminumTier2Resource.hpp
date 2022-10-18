#ifndef UE4SS_SDK_BPAluminumTier2Resource_HPP
#define UE4SS_SDK_BPAluminumTier2Resource_HPP

class ABPAluminumTier2Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_62B519224C5507AE0A01D49C7256BAC8;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_62B519224C5507AE0A01D49C7256BAC8;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPAluminumTier2Resource(int32 EntryPoint);
};

#endif
