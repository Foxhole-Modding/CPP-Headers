#ifndef UE4SS_SDK_BPCoalResourceTier3_HPP
#define UE4SS_SDK_BPCoalResourceTier3_HPP

class ABPCoalResourceTier3_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource3;
    class UStaticMeshComponent* CoalPile;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_D6346FAE476D024EFB3B3CA49E390BD3;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D6346FAE476D024EFB3B3CA49E390BD3;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCoalResourceTier3(int32 EntryPoint);
};

#endif
