#ifndef UE4SS_SDK_BPGunboatBaseW_HPP
#define UE4SS_SDK_BPGunboatBaseW_HPP

class ABPGunboatBaseW_C : public ABPGunboatBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* Light3;
    class USpotLightComponent* SpotLight2;
    class UStaticMeshComponent* Light2;
    class UStaticMeshComponent* Light1;
    class USpotLightComponent* SpotLight;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPGunboatBaseW(int32 EntryPoint);
};

#endif
