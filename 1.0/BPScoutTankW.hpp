#ifndef UE4SS_SDK_BPScoutTankW_HPP
#define UE4SS_SDK_BPScoutTankW_HPP

class ABPScoutTankW_C : public AScoutTankWBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutTankW(int32 EntryPoint);
};

#endif
