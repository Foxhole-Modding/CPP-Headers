#ifndef UE4SS_SDK_BPMediumTank2RangeW_HPP
#define UE4SS_SDK_BPMediumTank2RangeW_HPP

class ABPMediumTank2RangeW_C : public ABPMediumTank2BaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Exhaust2;
    class USpotLightComponent* SpotLightTurret;
    class UStaticMeshComponent* LightTurret;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;
    class UVehicleSeatComponent* GunnerSeat2;
    class UVehicleSeatComponent* CommanderSeat3;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2RangeW(int32 EntryPoint);
};

#endif
