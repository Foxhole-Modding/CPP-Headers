#ifndef UE4SS_SDK_BPFreighter_HPP
#define UE4SS_SDK_BPFreighter_HPP

class ABPFreighter_C : public AFreighter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* IdleSFXLoop;
    class UBoxComponent* WorkVolume;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPFreighter(int32 EntryPoint);
};

#endif
