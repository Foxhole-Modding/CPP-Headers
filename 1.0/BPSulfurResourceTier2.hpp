#ifndef UE4SS_SDK_BPSulfurResourceTier2_HPP
#define UE4SS_SDK_BPSulfurResourceTier2_HPP

class ABPSulfurResourceTier2_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource2;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Resource3;
    FVector Timeline_0_NewTrack_0_FF8051C6402F3222175807A8A18B18EF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FF8051C6402F3222175807A8A18B18EF;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSulfurResourceTier2(int32 EntryPoint);
};

#endif
