#ifndef UE4SS_SDK_BPSalvageResource_HPP
#define UE4SS_SDK_BPSalvageResource_HPP

class ABPSalvageResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource1;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_DC99FEDA428B6A765EDAFC9BA85C56E6;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DC99FEDA428B6A765EDAFC9BA85C56E6;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSalvageResource(int32 EntryPoint);
};

#endif
