#ifndef UE4SS_SDK_BPArmoredCarC_HPP
#define UE4SS_SDK_BPArmoredCarC_HPP

class ABPArmoredCarC_C : public ABPArmoredCarBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarC(int32 EntryPoint);
};

#endif
