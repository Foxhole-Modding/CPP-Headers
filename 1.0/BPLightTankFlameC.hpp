#ifndef UE4SS_SDK_BPLightTankFlameC_HPP
#define UE4SS_SDK_BPLightTankFlameC_HPP

class ABPLightTankFlameC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankFlameC(int32 EntryPoint);
};

#endif
