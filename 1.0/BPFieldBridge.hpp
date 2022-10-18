#ifndef UE4SS_SDK_BPFieldBridge_HPP
#define UE4SS_SDK_BPFieldBridge_HPP

class ABPFieldBridge_C : public AFieldBridge
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* RampFrontBuildFootprint;
    class UBoxComponent* RampBackBuildFootprint;
    class UStaticMeshComponent* PillarFront;
    class UStaticMeshComponent* PillarBack;
    class USceneComponent* SandbagTarget;
    class USplineConnectorComponent* SplineComponent2;
    class UAudioComponent* Audio;
    class USplineConnectorComponent* Sandbag;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;
    FVector Timeline_0_NewTrack_0_738F45B945E6F66E508CF1BDC736E93C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_738F45B945E6F66E508CF1BDC736E93C;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BPOnVehicleDrivingOverDamage();
    void ExecuteUbergraph_BPFieldBridge(int32 EntryPoint);
};

#endif
