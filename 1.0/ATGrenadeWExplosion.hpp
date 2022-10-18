#ifndef UE4SS_SDK_ATGrenadeWExplosion_HPP
#define UE4SS_SDK_ATGrenadeWExplosion_HPP

class AATGrenadeWExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ATGrenadeWExplosion(int32 EntryPoint);
};

#endif
