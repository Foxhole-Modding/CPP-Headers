#ifndef UE4SS_SDK_BattleTankBase_HPP
#define UE4SS_SDK_BattleTankBase_HPP

class ABattleTankBase_C : public ABattleTank
{
    class UVehicleSeatComponent* EngineerSeat4;
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleSeatComponent* MachineGunnerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* EngineerExit;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* MachineGunnerExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* EngineerTrigger0;
    class UVehicleTriggerComponent* CommanderTrigger0;
    class UVehicleTriggerComponent* MachineGunnerTrigger0;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* DriveIdle;
    class UCameraComponent* Camera;

};

#endif
