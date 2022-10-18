#ifndef UE4SS_SDK_SnowballExplosion_HPP
#define UE4SS_SDK_SnowballExplosion_HPP

class ASnowballExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SnowballExplosion(int32 EntryPoint);
};

#endif
