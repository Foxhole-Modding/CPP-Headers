#ifndef UE4SS_SDK_BPFieldGunBase_HPP
#define UE4SS_SDK_BPFieldGunBase_HPP

class ABPFieldGunBase_C : public AFieldMachineGun
{
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UCameraComponent* Camera;

};

#endif
