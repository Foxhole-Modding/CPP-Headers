#ifndef UE4SS_SDK_BPTruckBase_HPP
#define UE4SS_SDK_BPTruckBase_HPP

class ABPTruckBase_C : public ATransportTruck
{
    class UStaticMeshComponent* Trailer;
    class UStaticMeshComponent* Cabin;
    class UVehicleExitComponent* BackExit;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* BackTrigger;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* PassengerSeat5;
    class UVehicleSeatComponent* PassengerSeat4;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UAudioComponent* TruckIdle;
    class UParticleSystemComponent* Exhaust;
    class UParticleSystemComponent* ParticleSystem;
    class UCameraComponent* Camera;

};

#endif
