#ifndef UE4SS_SDK_BPScoutVehicleBase_HPP
#define UE4SS_SDK_BPScoutVehicleBase_HPP

class ABPScoutVehicleBase_C : public AScoutVehicle
{
    class UParticleSystemComponent* Exhaust;
    class UVehicleExitComponent* BackExit;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* BackTrigger;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UCameraComponent* Camera;

};

#endif
