#ifndef UE4SS_SDK_LRAExplosion_HPP
#define UE4SS_SDK_LRAExplosion_HPP

class ALRAExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void BPDetonate();
    void BPTelegraph();
    void ExecuteUbergraph_LRAExplosion(int32 EntryPoint);
};

#endif
