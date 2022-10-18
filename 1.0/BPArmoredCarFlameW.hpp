#ifndef UE4SS_SDK_BPArmoredCarFlameW_HPP
#define UE4SS_SDK_BPArmoredCarFlameW_HPP

class ABPArmoredCarFlameW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarFlameW(int32 EntryPoint);
};

#endif
