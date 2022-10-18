#ifndef UE4SS_SDK_BPLightTankBaseC_HPP
#define UE4SS_SDK_BPLightTankBaseC_HPP

class ABPLightTankBaseC_C : public ABPLightTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat1;
    class UStaticMeshComponent* LightTurret;
    class USpotLightComponent* SpotLight2;
    class UParticleSystemComponent* Exhaust;
    class UStaticMeshComponent* lightL;
    class UStaticMeshComponent* lightR;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight1;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankBaseC(int32 EntryPoint);
};

#endif
