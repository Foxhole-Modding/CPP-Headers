#ifndef UE4SS_SDK_BPLightTankDefensiveW_HPP
#define UE4SS_SDK_BPLightTankDefensiveW_HPP

class ABPLightTankDefensiveW_C : public ABPLightTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat1;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankDefensiveW(int32 EntryPoint);
};

#endif
