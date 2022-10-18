#ifndef UE4SS_SDK_BPScoutTankOffensiveW_HPP
#define UE4SS_SDK_BPScoutTankOffensiveW_HPP

class ABPScoutTankOffensiveW_C : public AScoutTankWBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutTankOffensiveW(int32 EntryPoint);
};

#endif
