#ifndef UE4SS_SDK_BPMediumTankW_HPP
#define UE4SS_SDK_BPMediumTankW_HPP

class ABPMediumTankW_C : public AMediumTankWBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* CommanderSeat3;
    class USpotLightComponent* SpotLightTurret;
    class UStaticMeshComponent* LightTurret;
    class USkeletalMeshComponent* Chassis_0;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTankW(int32 EntryPoint);
};

#endif
