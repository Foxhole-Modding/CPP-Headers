#ifndef UE4SS_SDK_BPSulfurResource_HPP
#define UE4SS_SDK_BPSulfurResource_HPP

class ABPSulfurResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource1;
    class UStaticMeshComponent* Resource2;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Resource3;
    FVector Timeline_0_NewTrack_0_F3D1FD0D40F5E5263DFF59A717B60DAC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F3D1FD0D40F5E5263DFF59A717B60DAC;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSulfurResource(int32 EntryPoint);
};

#endif
