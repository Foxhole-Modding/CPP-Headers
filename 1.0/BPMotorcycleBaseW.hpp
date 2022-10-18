#ifndef UE4SS_SDK_BPMotorcycleBaseW_HPP
#define UE4SS_SDK_BPMotorcycleBaseW_HPP

class ABPMotorcycleBaseW_C : public ABPMotorcycleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UPointLightComponent* RearPointLight_L;
    class UStaticMeshComponent* RearLight_L;
    class UStaticMeshComponent* Light_L;
    class UParticleSystemComponent* Exhaust;
    class USpotLightComponent* SpotLight_L;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMotorcycleBaseW(int32 EntryPoint);
};

#endif
