#ifndef UE4SS_SDK_BPAluminumTier3Resource_HPP
#define UE4SS_SDK_BPAluminumTier3Resource_HPP

class ABPAluminumTier3Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_48E1375A4CA81D0D75C2F683D3EE951A;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_48E1375A4CA81D0D75C2F683D3EE951A;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPAluminumTier3Resource(int32 EntryPoint);
};

#endif
