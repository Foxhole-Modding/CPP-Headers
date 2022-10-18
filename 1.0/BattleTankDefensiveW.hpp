#ifndef UE4SS_SDK_BattleTankDefensiveW_HPP
#define UE4SS_SDK_BattleTankDefensiveW_HPP

class ABattleTankDefensiveW_C : public ABPBattleTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BattleTankDefensiveW(int32 EntryPoint);
};

#endif
