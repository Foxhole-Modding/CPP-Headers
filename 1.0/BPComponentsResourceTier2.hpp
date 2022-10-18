#ifndef UE4SS_SDK_BPComponentsResourceTier2_HPP
#define UE4SS_SDK_BPComponentsResourceTier2_HPP

class ABPComponentsResourceTier2_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Resource2;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Resource3;
    FVector Timeline_0_NewTrack_0_0310C010428EA8A1AA1A5B9DDCE0EE3E;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0310C010428EA8A1AA1A5B9DDCE0EE3E;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPComponentsResourceTier2(int32 EntryPoint);
};

#endif
