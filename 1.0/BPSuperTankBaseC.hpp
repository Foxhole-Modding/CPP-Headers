#ifndef UE4SS_SDK_BPSuperTankBaseC_HPP
#define UE4SS_SDK_BPSuperTankBaseC_HPP

class ABPSuperTankBaseC_C : public ABPSuperTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLightBody;
    class UStaticMeshComponent* LightBody;
    class USkeletalMeshComponent* Chassis;
    class UParticleSystemComponent* ExhaustR;
    class UStaticMeshComponent* LightBodyR;
    class USpotLightComponent* SpotLightBodyR;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankBaseC(int32 EntryPoint);
};

#endif
