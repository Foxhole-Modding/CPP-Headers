#ifndef UE4SS_SDK_StaticArtilleryExplosion_HPP
#define UE4SS_SDK_StaticArtilleryExplosion_HPP

class AStaticArtilleryExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void BPDetonate();
    void BPTelegraph();
    void ExecuteUbergraph_StaticArtilleryExplosion(int32 EntryPoint);
};

#endif
