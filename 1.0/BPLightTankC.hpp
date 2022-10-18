#ifndef UE4SS_SDK_BPLightTankC_HPP
#define UE4SS_SDK_BPLightTankC_HPP

class ABPLightTankC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankC(int32 EntryPoint);
};

#endif
