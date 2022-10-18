#ifndef UE4SS_SDK_HeavyArtilleryExplosion_HPP
#define UE4SS_SDK_HeavyArtilleryExplosion_HPP

class AHeavyArtilleryExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void BPTelegraph();
    void ExecuteUbergraph_HeavyArtilleryExplosion(int32 EntryPoint);
};

#endif
