#ifndef UE4SS_SDK_BPCoalResource_HPP
#define UE4SS_SDK_BPCoalResource_HPP

class ABPCoalResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* CoalPile;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Resource1;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_D3521A74464CB0BCF5D9B8AE945964CD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D3521A74464CB0BCF5D9B8AE945964CD;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCoalResource(int32 EntryPoint);
};

#endif
