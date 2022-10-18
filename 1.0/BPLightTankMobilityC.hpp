#ifndef UE4SS_SDK_BPLightTankMobilityC_HPP
#define UE4SS_SDK_BPLightTankMobilityC_HPP

class ABPLightTankMobilityC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankMobilityC(int32 EntryPoint);
};

#endif
