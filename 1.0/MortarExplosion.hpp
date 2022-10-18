#ifndef UE4SS_SDK_MortarExplosion_HPP
#define UE4SS_SDK_MortarExplosion_HPP

class AMortarExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void BPTelegraph();
    void ExecuteUbergraph_MortarExplosion(int32 EntryPoint);
};

#endif
