#ifndef UE4SS_SDK_BPComponentsResourceTier3_HPP
#define UE4SS_SDK_BPComponentsResourceTier3_HPP

class ABPComponentsResourceTier3_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Resource3;
    FVector Timeline_0_NewTrack_0_A8663038408E9FA0A5E759B87F71B0BB;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A8663038408E9FA0A5E759B87F71B0BB;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPComponentsResourceTier3(int32 EntryPoint);
};

#endif
