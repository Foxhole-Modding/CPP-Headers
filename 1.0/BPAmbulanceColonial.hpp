#ifndef UE4SS_SDK_BPAmbulanceColonial_HPP
#define UE4SS_SDK_BPAmbulanceColonial_HPP

class ABPAmbulanceColonial_C : public AAmbulance
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* BackTrigger;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class USpotLightComponent* SpotLight_L;
    class USpotLightComponent* SpotLight_R;
    class UPointLightComponent* LightRear_L;
    class UPointLightComponent* LightRear_R;
    class UStaticMeshComponent* RearLight_L;
    class UStaticMeshComponent* RearLight_R;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class UAudioComponent* TruckIdle;
    class UParticleSystemComponent* Exhaust;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPAmbulanceColonial(int32 EntryPoint);
};

#endif
