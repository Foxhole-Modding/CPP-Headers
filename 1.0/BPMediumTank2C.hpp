#ifndef UE4SS_SDK_BPMediumTank2C_HPP
#define UE4SS_SDK_BPMediumTank2C_HPP

class ABPMediumTank2C_C : public ABPMediumTank2BaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLightBodyTurret;
    class UStaticMeshComponent* LightBodyTurret;
    class USpotLightComponent* SpotLightBodyLeft;
    class UStaticMeshComponent* LightBodyLeft;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2C(int32 EntryPoint);
};

#endif
