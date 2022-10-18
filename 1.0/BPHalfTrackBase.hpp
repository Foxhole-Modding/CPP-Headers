#ifndef UE4SS_SDK_BPHalfTrackBase_HPP
#define UE4SS_SDK_BPHalfTrackBase_HPP

class ABPHalfTrackBase_C : public AHalfTrack
{
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleExitComponent* RearSeatExit;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* RearSeatTrigger;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UParticleSystemComponent* Exhaust;
    class UAudioComponent* DriveIdle;
    class UCameraComponent* Camera;

};

#endif
