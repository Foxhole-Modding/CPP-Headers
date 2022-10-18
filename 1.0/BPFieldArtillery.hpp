#ifndef UE4SS_SDK_BPFieldArtillery_HPP
#define UE4SS_SDK_BPFieldArtillery_HPP

class ABPFieldArtillery_C : public AArtillery
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
