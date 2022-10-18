#ifndef UE4SS_SDK_BPSalvageTier2Resource_HPP
#define UE4SS_SDK_BPSalvageTier2Resource_HPP

class ABPSalvageTier2Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource2;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_1179388D40EF29444E0B4895554C0EE7;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1179388D40EF29444E0B4895554C0EE7;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSalvageTier2Resource(int32 EntryPoint);
};

#endif
