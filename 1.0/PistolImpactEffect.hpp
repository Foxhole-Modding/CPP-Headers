#ifndef UE4SS_SDK_PistolImpactEffect_HPP
#define UE4SS_SDK_PistolImpactEffect_HPP

class APistolImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PistolImpactEffect(int32 EntryPoint);
};

#endif
