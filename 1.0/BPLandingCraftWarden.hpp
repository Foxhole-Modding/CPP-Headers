#ifndef UE4SS_SDK_BPLandingCraftWarden_HPP
#define UE4SS_SDK_BPLandingCraftWarden_HPP

class ABPLandingCraftWarden_C : public ABPLandingCraftBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftWarden(int32 EntryPoint);
};

#endif
