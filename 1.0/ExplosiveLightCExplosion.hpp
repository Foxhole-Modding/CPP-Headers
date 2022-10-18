#ifndef UE4SS_SDK_ExplosiveLightCExplosion_HPP
#define UE4SS_SDK_ExplosiveLightCExplosion_HPP

class AExplosiveLightCExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ExplosiveLightCExplosion(int32 EntryPoint);
};

#endif
