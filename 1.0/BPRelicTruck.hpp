#ifndef UE4SS_SDK_BPRelicTruck_HPP
#define UE4SS_SDK_BPRelicTruck_HPP

class ABPRelicTruck_C : public ATransportTruck
{
    FPointerToUberGraphFrame UberGraphFrame;
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
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight;
    class UAudioComponent* TruckIdle;
    class UParticleSystemComponent* Exhaust;
    class UParticleSystemComponent* destroyedps;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicTruck(int32 EntryPoint);
};

#endif
