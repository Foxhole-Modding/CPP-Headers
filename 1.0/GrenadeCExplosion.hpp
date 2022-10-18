#ifndef UE4SS_SDK_GrenadeCExplosion_HPP
#define UE4SS_SDK_GrenadeCExplosion_HPP

class AGrenadeCExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_GrenadeCExplosion(int32 EntryPoint);
};

#endif
