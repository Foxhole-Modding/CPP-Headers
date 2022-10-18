#ifndef UE4SS_SDK_LightArtilleryExplosion_HPP
#define UE4SS_SDK_LightArtilleryExplosion_HPP

class ALightArtilleryExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class URadialForceComponent* RadialForce;

    void BPDetonate();
    void BPTelegraph();
    void ExecuteUbergraph_LightArtilleryExplosion(int32 EntryPoint);
};

#endif
