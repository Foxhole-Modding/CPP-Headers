#ifndef UE4SS_SDK_BPLightTankBaseW_HPP
#define UE4SS_SDK_BPLightTankBaseW_HPP

class ABPLightTankBaseW_C : public ABPLightTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LightTurret;
    class USpotLightComponent* SpotLight1;
    class UParticleSystemComponent* Exhaust;
    class UStaticMeshComponent* lightR;
    class USpotLightComponent* SpotLight;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankBaseW(int32 EntryPoint);
};

#endif
