#ifndef UE4SS_SDK_BPMediumTank2BaseW_HPP
#define UE4SS_SDK_BPMediumTank2BaseW_HPP

class ABPMediumTank2BaseW_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2BaseW(int32 EntryPoint);
};

#endif
