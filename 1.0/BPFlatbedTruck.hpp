#ifndef UE4SS_SDK_BPFlatbedTruck_HPP
#define UE4SS_SDK_BPFlatbedTruck_HPP

class ABPFlatbedTruck_C : public AFlatbedTruck
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UParticleSystemComponent* ExhaustL;
    class USpotLightComponent* SpotLight_L;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class UParticleSystemComponent* Exhaust;
    class UAudioComponent* TruckIdle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPFlatbedTruck(int32 EntryPoint);
};

#endif
