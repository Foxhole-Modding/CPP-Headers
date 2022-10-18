#ifndef UE4SS_SDK_BPRelicArmouredCar_HPP
#define UE4SS_SDK_BPRelicArmouredCar_HPP

class ABPRelicArmouredCar_C : public AArmoredCar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UStaticMeshComponent* Light_Turret;
    class USpotLightComponent* SpotLight_Turret;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_R;
    class USpotLightComponent* SpotLight_L;
    class UStaticMeshComponent* Light_L;
    class UParticleSystemComponent* Exhaust;
    class UAudioComponent* VehicleIdle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicArmouredCar(int32 EntryPoint);
};

#endif
