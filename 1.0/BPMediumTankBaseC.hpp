#ifndef UE4SS_SDK_BPMediumTankBaseC_HPP
#define UE4SS_SDK_BPMediumTankBaseC_HPP

class ABPMediumTankBaseC_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotlightTurretL;
    class UStaticMeshComponent* LightTurretL;
    class UParticleSystemComponent* ExhaustR;
    class UStaticMeshComponent* LightBodyR;
    class USpotLightComponent* SpotLightBodyR;
    class UVehicleSeatComponent* CommanderSeat2;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTankBaseC(int32 EntryPoint);
};

#endif
