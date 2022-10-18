#ifndef UE4SS_SDK_RevolverImpactEffect_HPP
#define UE4SS_SDK_RevolverImpactEffect_HPP

class ARevolverImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RevolverImpactEffect(int32 EntryPoint);
};

#endif
