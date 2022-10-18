#ifndef UE4SS_SDK_BPMediumTank2MultiW_HPP
#define UE4SS_SDK_BPMediumTank2MultiW_HPP

class ABPMediumTank2MultiW_C : public ABPMediumTank2BaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLightTurret_L;
    class USpotLightComponent* SpotLightTurret_R;
    class UStaticMeshComponent* TurretLight_L;
    class UStaticMeshComponent* TurretLight_R;
    class UParticleSystemComponent* Exhaust2;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2MultiW(int32 EntryPoint);
};

#endif
