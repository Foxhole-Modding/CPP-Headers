#ifndef UE4SS_SDK_BPRareTier2Resource_HPP
#define UE4SS_SDK_BPRareTier2Resource_HPP

class ABPRareTier2Resource_C : public AWorldResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource1;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_A5CB40B741E00B21F046AF871574E2BF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A5CB40B741E00B21F046AF871574E2BF;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPRareTier2Resource(int32 EntryPoint);
};

#endif
