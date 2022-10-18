#ifndef UE4SS_SDK_BPArmoredCarOffensiveC_HPP
#define UE4SS_SDK_BPArmoredCarOffensiveC_HPP

class ABPArmoredCarOffensiveC_C : public ABPArmoredCarBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarOffensiveC(int32 EntryPoint);
};

#endif
