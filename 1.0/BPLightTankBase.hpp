#ifndef UE4SS_SDK_BPLightTankBase_HPP
#define UE4SS_SDK_BPLightTankBase_HPP

class ABPLightTankBase_C : public ALightTank
{
    class UVehicleSeatComponent* CommanderSeat2;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* DriveIdle;
    class UCameraComponent* Camera;

};

#endif
