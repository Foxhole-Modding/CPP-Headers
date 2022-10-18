#ifndef UE4SS_SDK_BPOilTankerC_HPP
#define UE4SS_SDK_BPOilTankerC_HPP

class ABPOilTankerC_C : public AOilTanker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UPointLightComponent* LightRear_L;
    class UPointLightComponent* LightRear_R;
    class UStaticMeshComponent* RearLight_L;
    class UStaticMeshComponent* RearLight_R;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight;
    class UAudioComponent* TruckIdle;
    class UParticleSystemComponent* Exhaust;
    class UParticleSystemComponent* destroyedps;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPOilTankerC(int32 EntryPoint);
};

#endif
