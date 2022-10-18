#ifndef UE4SS_SDK_HEGrenadeExplosion_HPP
#define UE4SS_SDK_HEGrenadeExplosion_HPP

class AHEGrenadeExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_HEGrenadeExplosion(int32 EntryPoint);
};

#endif
