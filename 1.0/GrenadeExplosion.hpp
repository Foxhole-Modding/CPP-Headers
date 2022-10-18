#ifndef UE4SS_SDK_GrenadeExplosion_HPP
#define UE4SS_SDK_GrenadeExplosion_HPP

class AGrenadeExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_GrenadeExplosion(int32 EntryPoint);
};

#endif
