#ifndef UE4SS_SDK_HeLaunchedGrenadeExplosion_HPP
#define UE4SS_SDK_HeLaunchedGrenadeExplosion_HPP

class AHeLaunchedGrenadeExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_HeLaunchedGrenadeExplosion(int32 EntryPoint);
};

#endif
