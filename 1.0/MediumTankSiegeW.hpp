#ifndef UE4SS_SDK_MediumTankSiegeW_HPP
#define UE4SS_SDK_MediumTankSiegeW_HPP

class AMediumTankSiegeW_C : public AMediumTankWBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LightTurretTop;
    class USpotLightComponent* SpotLightTurretTop;
    class UVehicleSeatComponent* CommanderSeat3;
    class USkeletalMeshComponent* Chassis_0;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_MediumTankSiegeW(int32 EntryPoint);
};

#endif
