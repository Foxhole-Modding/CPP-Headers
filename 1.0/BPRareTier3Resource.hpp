#ifndef UE4SS_SDK_BPRareTier3Resource_HPP
#define UE4SS_SDK_BPRareTier3Resource_HPP

class ABPRareTier3Resource_C : public AWorldResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource1;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_D15677884488CBB1935938BE52F03A0E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D15677884488CBB1935938BE52F03A0E;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPRareTier3Resource(int32 EntryPoint);
};

#endif
