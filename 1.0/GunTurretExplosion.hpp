#ifndef UE4SS_SDK_GunTurretExplosion_HPP
#define UE4SS_SDK_GunTurretExplosion_HPP

class AGunTurretExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_GunTurretExplosion(int32 EntryPoint);
};

#endif
