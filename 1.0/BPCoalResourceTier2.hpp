#ifndef UE4SS_SDK_BPCoalResourceTier2_HPP
#define UE4SS_SDK_BPCoalResourceTier2_HPP

class ABPCoalResourceTier2_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource3;
    class UStaticMeshComponent* CoalPile;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Resource2;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_203214FD4C647A29C2ABEC80DA86D914;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_203214FD4C647A29C2ABEC80DA86D914;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCoalResourceTier2(int32 EntryPoint);
};

#endif
