#ifndef UE4SS_SDK_BPBattleTankW_HPP
#define UE4SS_SDK_BPBattleTankW_HPP

class ABPBattleTankW_C : public ABPBattleTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankW(int32 EntryPoint);
};

#endif
