#ifndef UE4SS_SDK_BPBattleTankBaseW_HPP
#define UE4SS_SDK_BPBattleTankBaseW_HPP

class ABPBattleTankBaseW_C : public ABattleTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* mainBody;
    class UParticleSystemComponent* ExhaustRight;
    class UParticleSystemComponent* ExhaustLeft;
    class UStaticMeshComponent* TurretLightHeadlight;
    class UStaticMeshComponent* FrontLightLeftHeadlight;
    class UStaticMeshComponent* FrontLightRightHeadlight;
    class USpotLightComponent* TurretLight;
    class USpotLightComponent* FrontLightLeft;
    class USpotLightComponent* FrontLightRight;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankBaseW(int32 EntryPoint);
};

#endif
