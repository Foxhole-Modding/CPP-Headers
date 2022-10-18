#ifndef UE4SS_SDK_UnexplodedOrdnanceExplosion_HPP
#define UE4SS_SDK_UnexplodedOrdnanceExplosion_HPP

class AUnexplodedOrdnanceExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_UnexplodedOrdnanceExplosion(int32 EntryPoint);
};

#endif
