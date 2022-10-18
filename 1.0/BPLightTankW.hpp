#ifndef UE4SS_SDK_BPLightTankW_HPP
#define UE4SS_SDK_BPLightTankW_HPP

class ABPLightTankW_C : public ABPLightTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat1;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankW(int32 EntryPoint);
};

#endif
