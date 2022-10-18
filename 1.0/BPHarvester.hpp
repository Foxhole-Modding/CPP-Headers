#ifndef UE4SS_SDK_BPHarvester_HPP
#define UE4SS_SDK_BPHarvester_HPP

class ABPHarvester_C : public AHarvester
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Node10;
    class UStaticMeshComponent* Node09;
    class UStaticMeshComponent* Node08;
    class UStaticMeshComponent* Node07;
    class UStaticMeshComponent* Node06;
    class UStaticMeshComponent* Node05;
    class UStaticMeshComponent* Node04;
    class UStaticMeshComponent* Node03;
    class UStaticMeshComponent* Node02;
    class UStaticMeshComponent* Node01;
    class UStaticMeshComponent* Node00;
    class UBPResourceGroupRenderComponent_C* BPResourceGroupRenderComponent;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class USpotLightComponent* SpotLight_R;
    class USpotLightComponent* SpotLight_L;
    class UStaticMeshComponent* Light_R;
    class UStaticMeshComponent* Light_L;
    class UParticleSystemComponent* Exhaust;
    class UAudioComponent* VehicleIdle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHarvester(int32 EntryPoint);
};

#endif
