#ifndef UE4SS_SDK_BPArmoredCarBase_HPP
#define UE4SS_SDK_BPArmoredCarBase_HPP

class ABPArmoredCarBase_C : public AArmoredCar
{
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* VehicleIdle;
    class UCameraComponent* Camera;

};

#endif
