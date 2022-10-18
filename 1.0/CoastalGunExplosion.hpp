#ifndef UE4SS_SDK_CoastalGunExplosion_HPP
#define UE4SS_SDK_CoastalGunExplosion_HPP

class ACoastalGunExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CoastalGunExplosion(int32 EntryPoint);
};

#endif
