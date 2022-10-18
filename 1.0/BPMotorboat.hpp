#ifndef UE4SS_SDK_BPMotorboat_HPP
#define UE4SS_SDK_BPMotorboat_HPP

class ABPMotorboat_C : public AMotorboat
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;
    class UVehicleSeatComponent* FrontSeat;
    class UVehicleSeatComponent* CenterSeat;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* FrontExit;
    class UVehicleExitComponent* CenterExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* FrontTrigger;
    class UVehicleTriggerComponent* CenterTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UBoxComponent* WorkVolume;
    class UAudioComponent* Idle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMotorboat(int32 EntryPoint);
};

#endif
