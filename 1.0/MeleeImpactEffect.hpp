#ifndef UE4SS_SDK_MeleeImpactEffect_HPP
#define UE4SS_SDK_MeleeImpactEffect_HPP

class AMeleeImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MeleeImpactEffect(int32 EntryPoint);
};

#endif
