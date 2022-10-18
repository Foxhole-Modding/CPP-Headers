#ifndef UE4SS_SDK_StickybombExplosion_HPP
#define UE4SS_SDK_StickybombExplosion_HPP

class AStickybombExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_StickybombExplosion(int32 EntryPoint);
};

#endif
