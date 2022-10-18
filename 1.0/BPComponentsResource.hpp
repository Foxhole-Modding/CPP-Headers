#ifndef UE4SS_SDK_BPComponentsResource_HPP
#define UE4SS_SDK_BPComponentsResource_HPP

class ABPComponentsResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Resource1;
    class UStaticMeshComponent* Resource2;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Resource3;
    FVector Timeline_0_NewTrack_0_6E986F224EDBB9D65E15E9B5A19DF826;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6E986F224EDBB9D65E15E9B5A19DF826;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPComponentsResource(int32 EntryPoint);
};

#endif
