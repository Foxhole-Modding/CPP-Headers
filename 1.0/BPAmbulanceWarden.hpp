#ifndef UE4SS_SDK_BPAmbulanceWarden_HPP
#define UE4SS_SDK_BPAmbulanceWarden_HPP

class ABPAmbulanceWarden_C : public AAmbulance
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* BackTrigger;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class USpotLightComponent* SpotLight_L;
    class UPointLightComponent* LightRear_R;
    class UStaticMeshComponent* RearLight_R;
    class UStaticMeshComponent* Light_L;
    class UAudioComponent* TruckIdle;
    class UParticleSystemComponent* Exhaust;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPAmbulanceWarden(int32 EntryPoint);
};

#endif
