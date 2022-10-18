#ifndef UE4SS_SDK_BPArmoredCarATW_HPP
#define UE4SS_SDK_BPArmoredCarATW_HPP

class ABPArmoredCarATW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarATW(int32 EntryPoint);
};

#endif
