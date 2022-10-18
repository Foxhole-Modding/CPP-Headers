#ifndef UE4SS_SDK_GunboatExplosion_HPP
#define UE4SS_SDK_GunboatExplosion_HPP

class AGunboatExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void BPTelegraph();
    void ExecuteUbergraph_GunboatExplosion(int32 EntryPoint);
};

#endif
