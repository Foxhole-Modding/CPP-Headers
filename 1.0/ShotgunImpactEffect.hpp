#ifndef UE4SS_SDK_ShotgunImpactEffect_HPP
#define UE4SS_SDK_ShotgunImpactEffect_HPP

class AShotgunImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ShotgunImpactEffect(int32 EntryPoint);
};

#endif
