#ifndef UE4SS_SDK_BattleTankAmmoExplosion_HPP
#define UE4SS_SDK_BattleTankAmmoExplosion_HPP

class ABattleTankAmmoExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BattleTankAmmoExplosion(int32 EntryPoint);
};

#endif
