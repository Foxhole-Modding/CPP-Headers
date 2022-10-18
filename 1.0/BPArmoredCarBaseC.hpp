#ifndef UE4SS_SDK_BPArmoredCarBaseC_HPP
#define UE4SS_SDK_BPArmoredCarBaseC_HPP

class ABPArmoredCarBaseC_C : public ABPArmoredCarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UStaticMeshComponent* LightRear_L;
    class USpotLightComponent* SpotLight_Turret;
    class UStaticMeshComponent* Light_Turret;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* LightRear_R;
    class UPointLightComponent* LightRear;
    class UParticleSystemComponent* Exhaust;
    class UStaticMeshComponent* Light_L;
    class USpotLightComponent* SpotLight_L;
    class UStaticMeshComponent* Light_R;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarBaseC(int32 EntryPoint);
};

#endif
