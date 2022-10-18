#ifndef UE4SS_SDK_MolotovExplosion_HPP
#define UE4SS_SDK_MolotovExplosion_HPP

class AMolotovExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MolotovExplosion(int32 EntryPoint);
};

#endif
