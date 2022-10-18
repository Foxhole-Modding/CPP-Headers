#ifndef UE4SS_SDK_BPLandingCraftC_HPP
#define UE4SS_SDK_BPLandingCraftC_HPP

class ABPLandingCraftC_C : public ABPLandingCraftBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftC(int32 EntryPoint);
};

#endif
