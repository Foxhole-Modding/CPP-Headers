#ifndef UE4SS_SDK_BayonetImpactEffect_HPP
#define UE4SS_SDK_BayonetImpactEffect_HPP

class ABayonetImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BayonetImpactEffect(int32 EntryPoint);
};

#endif
