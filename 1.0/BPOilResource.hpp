#ifndef UE4SS_SDK_BPOilResource_HPP
#define UE4SS_SDK_BPOilResource_HPP

class ABPOilResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Resource1;
    class UBoxComponent* Box;
    FVector Timeline_0_NewTrack_0_AAC7D47F4777C9656C25519A5ECF757D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AAC7D47F4777C9656C25519A5ECF757D;
    class UTimelineComponent* Timeline_0;

    void SetEnabled(bool IsEnabled, class UStaticMeshComponent* Mesh);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPOilResource(int32 EntryPoint);
};

#endif
