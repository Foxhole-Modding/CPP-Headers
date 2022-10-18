#ifndef UE4SS_SDK_BPGunboatW_HPP
#define UE4SS_SDK_BPGunboatW_HPP

class ABPGunboatW_C : public ABPGunboatBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPGunboatW(int32 EntryPoint);
};

#endif
