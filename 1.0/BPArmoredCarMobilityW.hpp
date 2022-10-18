#ifndef UE4SS_SDK_BPArmoredCarMobilityW_HPP
#define UE4SS_SDK_BPArmoredCarMobilityW_HPP

class ABPArmoredCarMobilityW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarMobilityW(int32 EntryPoint);
};

#endif
