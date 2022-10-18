#ifndef UE4SS_SDK_RifleImpactEffect_HPP
#define UE4SS_SDK_RifleImpactEffect_HPP

class ARifleImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RifleImpactEffect(int32 EntryPoint);
};

#endif
