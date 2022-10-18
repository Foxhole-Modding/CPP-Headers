#ifndef UE4SS_SDK_TankImpactExplosion_HPP
#define UE4SS_SDK_TankImpactExplosion_HPP

class ATankImpactExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_TankImpactExplosion(int32 EntryPoint);
};

#endif
