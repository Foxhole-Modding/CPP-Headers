#ifndef UE4SS_SDK_MortarSHExplosion_HPP
#define UE4SS_SDK_MortarSHExplosion_HPP

class AMortarSHExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void BPTelegraph();
    void ExecuteUbergraph_MortarSHExplosion(int32 EntryPoint);
};

#endif
