#ifndef UE4SS_SDK_BPArmoredCarOffensiveW_HPP
#define UE4SS_SDK_BPArmoredCarOffensiveW_HPP

class ABPArmoredCarOffensiveW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* LightRearEmitter;
    class UStaticMeshComponent* LightRear;
    class USkeletalMeshComponent* mainBody;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarOffensiveW(int32 EntryPoint);
};

#endif
