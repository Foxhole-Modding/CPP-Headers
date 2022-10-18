#ifndef UE4SS_SDK_BPArmoredCarW_HPP
#define UE4SS_SDK_BPArmoredCarW_HPP

class ABPArmoredCarW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarW(int32 EntryPoint);
};

#endif
