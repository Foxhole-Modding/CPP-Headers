#ifndef UE4SS_SDK_BPCopperTier2Resource_HPP
#define UE4SS_SDK_BPCopperTier2Resource_HPP

class ABPCopperTier2Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_D8BBADF741143162658E83B495E14EB4;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D8BBADF741143162658E83B495E14EB4;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCopperTier2Resource(int32 EntryPoint);
};

#endif
