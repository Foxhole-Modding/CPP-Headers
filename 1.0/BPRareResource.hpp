#ifndef UE4SS_SDK_BPRareResource_HPP
#define UE4SS_SDK_BPRareResource_HPP

class ABPRareResource_C : public AWorldResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource1;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_52892B784AC8CBC8E941B1BB187B9F66;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_52892B784AC8CBC8E941B1BB187B9F66;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPRareResource(int32 EntryPoint);
};

#endif
