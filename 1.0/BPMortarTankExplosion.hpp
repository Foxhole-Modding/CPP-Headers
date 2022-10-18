#ifndef UE4SS_SDK_BPMortarTankExplosion_HPP
#define UE4SS_SDK_BPMortarTankExplosion_HPP

class ABPMortarTankExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPMortarTankExplosion(int32 EntryPoint);
};

#endif
