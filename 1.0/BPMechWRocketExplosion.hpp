#ifndef UE4SS_SDK_BPMechWRocketExplosion_HPP
#define UE4SS_SDK_BPMechWRocketExplosion_HPP

class ABPMechWRocketExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPMechWRocketExplosion(int32 EntryPoint);
};

#endif
