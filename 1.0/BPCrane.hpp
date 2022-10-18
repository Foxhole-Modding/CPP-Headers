#ifndef UE4SS_SDK_BPCrane_HPP
#define UE4SS_SDK_BPCrane_HPP

class ABPCrane_C : public ACrane
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
