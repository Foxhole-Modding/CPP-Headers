#ifndef UE4SS_SDK_BPMotorcycleBaseC_HPP
#define UE4SS_SDK_BPMotorcycleBaseC_HPP

class ABPMotorcycleBaseC_C : public ABPMotorcycleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UPointLightComponent* RearPointLight_L;
    class UStaticMeshComponent* RearLight_L;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class UParticleSystemComponent* Exhaust;
    class USpotLightComponent* SpotLight_R;
    class USpotLightComponent* SpotLight_L;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMotorcycleBaseC(int32 EntryPoint);
};

#endif
