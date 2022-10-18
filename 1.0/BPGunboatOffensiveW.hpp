#ifndef UE4SS_SDK_BPGunboatOffensiveW_HPP
#define UE4SS_SDK_BPGunboatOffensiveW_HPP

class ABPGunboatOffensiveW_C : public ABPGunboatBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPGunboatOffensiveW(int32 EntryPoint);
};

#endif
