#ifndef UE4SS_SDK_BPArmoredCarBaseW_HPP
#define UE4SS_SDK_BPArmoredCarBaseW_HPP

class ABPArmoredCarBaseW_C : public ABPArmoredCarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleSeatComponent* GunnerSeat1;
    class UParticleSystemComponent* Exhaust_R;
    class USpotLightComponent* SpotLight_Turret;
    class UStaticMeshComponent* Light_Turret;
    class UParticleSystemComponent* Exhaust_L;
    class UStaticMeshComponent* Light_L;
    class USpotLightComponent* SpotLight_L;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarBaseW(int32 EntryPoint);
};

#endif
