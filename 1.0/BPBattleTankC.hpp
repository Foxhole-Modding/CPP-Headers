#ifndef UE4SS_SDK_BPBattleTankC_HPP
#define UE4SS_SDK_BPBattleTankC_HPP

class ABPBattleTankC_C : public ABPBattleTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankC(int32 EntryPoint);
};

#endif
