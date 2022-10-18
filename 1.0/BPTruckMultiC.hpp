#ifndef UE4SS_SDK_BPTruckMultiC_HPP
#define UE4SS_SDK_BPTruckMultiC_HPP

class ABPTruckMultiC_C : public AMultiLauncherCar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* TruckIdle;
    class UParticleSystemComponent* Exhaust;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class USpotLightComponent* SpotLight_L;
    class USpotLightComponent* SpotLight_R;
    class UPointLightComponent* LightRear_L;
    class UPointLightComponent* LightRear_R;
    class UStaticMeshComponent* RearLight_L;
    class UStaticMeshComponent* RearLight_R;
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh;
    class UCameraComponent* Camera;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleSeatComponent* PassengerSeat1;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckMultiC(int32 EntryPoint);
};

#endif
