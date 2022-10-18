#ifndef UE4SS_SDK_BPMotorcycleBase_HPP
#define UE4SS_SDK_BPMotorcycleBase_HPP

class ABPMotorcycleBase_C : public AMotorcycle
{
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* Idle;
    class UCameraComponent* Camera;

};

#endif
