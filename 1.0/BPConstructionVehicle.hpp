#ifndef UE4SS_SDK_BPConstructionVehicle_HPP
#define UE4SS_SDK_BPConstructionVehicle_HPP

class ABPConstructionVehicle_C : public AConstructionVehicle
{
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UCameraComponent* Camera;

};

#endif
