#ifndef UE4SS_SDK_RPGExplosion_HPP
#define UE4SS_SDK_RPGExplosion_HPP

class ARPGExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RPGExplosion(int32 EntryPoint);
};

#endif
