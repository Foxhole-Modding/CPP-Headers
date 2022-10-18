#ifndef UE4SS_SDK_BPHalftrackBaseW_HPP
#define UE4SS_SDK_BPHalftrackBaseW_HPP

class ABPHalfTrackBaseW_C : public ABPHalfTrackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleTriggerComponent* RearSeatTrigger6;
    class UVehicleTriggerComponent* RearSeatTrigger5;
    class UVehicleTriggerComponent* RearSeatTrigger4;
    class UVehicleSeatComponent* RearSeat6;
    class UVehicleSeatComponent* RearSeat5;
    class UVehicleSeatComponent* RearSeat4;
    class UVehicleSeatComponent* RearSeat3;
    class UStaticMeshComponent* mainBody;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_R;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackBaseW(int32 EntryPoint);
};

#endif
