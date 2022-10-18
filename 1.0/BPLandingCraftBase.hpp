#ifndef UE4SS_SDK_BPLandingCraftBase_HPP
#define UE4SS_SDK_BPLandingCraftBase_HPP

class ABPLandingCraftBase_C : public ALandingCraft
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoatHullComponent* BoatHull;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;
    class UAudioComponent* Idle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBase(int32 EntryPoint);
};

#endif
