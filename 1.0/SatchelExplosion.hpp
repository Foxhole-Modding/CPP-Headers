#ifndef UE4SS_SDK_SatchelExplosion_HPP
#define UE4SS_SDK_SatchelExplosion_HPP

class ASatchelExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SatchelExplosion(int32 EntryPoint);
};

#endif
