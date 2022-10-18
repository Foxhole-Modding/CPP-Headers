#ifndef UE4SS_SDK_BPSalvageTier3Resource_HPP
#define UE4SS_SDK_BPSalvageTier3Resource_HPP

class ABPSalvageTier3Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource3;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_5064DE3341293F8853A6419B6E1370FA;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5064DE3341293F8853A6419B6E1370FA;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSalvageTier3Resource(int32 EntryPoint);
};

#endif
