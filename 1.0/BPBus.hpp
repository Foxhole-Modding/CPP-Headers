#ifndef UE4SS_SDK_BPBus_HPP
#define UE4SS_SDK_BPBus_HPP

class ABPBus_C : public ARelicBus
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat11;
    class UVehicleSeatComponent* PassengerSeat10;
    class UVehicleSeatComponent* PassengerSeat9;
    class UVehicleSeatComponent* PassengerSeat8;
    class UVehicleSeatComponent* PassengerSeat7;
    class UVehicleSeatComponent* PassengerSeat6;
    class UVehicleSeatComponent* PassengerSeat5;
    class UVehicleSeatComponent* PassengerSeat4;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* BackExit;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* BackTrigger;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UStaticMeshComponent* Rear_L;
    class UStaticMeshComponent* Rear_R;
    class USpotLightComponent* Headlight_R;
    class USpotLightComponent* Headlight_L;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class UAudioComponent* BusIdle;
    class UParticleSystemComponent* Exhaust;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBus(int32 EntryPoint);
};

#endif
