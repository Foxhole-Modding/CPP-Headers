#ifndef UE4SS_SDK_TanketteBaseC_HPP
#define UE4SS_SDK_TanketteBaseC_HPP

class ATanketteBaseC_C : public AArmoredCar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera1;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_R;
    class UParticleSystemComponent* Exhaust;
    class UStaticMeshComponent* Light_L;
    class USpotLightComponent* SpotLight_L;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* DriverSeat0;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_TanketteBaseC(int32 EntryPoint);
};

#endif
