#ifndef UE4SS_SDK_BPGunboatBase_HPP
#define UE4SS_SDK_BPGunboatBase_HPP

class ABPGunboatBase_C : public AGunboat
{
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleSeatComponent* SternGunnerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* SternGunnerExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* CommanderTrigger0;
    class UVehicleTriggerComponent* SternGunnerTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* Idle;
    class UCameraComponent* Camera;

};

#endif
