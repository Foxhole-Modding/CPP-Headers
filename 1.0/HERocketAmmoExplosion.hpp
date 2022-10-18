#ifndef UE4SS_SDK_HERocketAmmoExplosion_HPP
#define UE4SS_SDK_HERocketAmmoExplosion_HPP

class AHERocketAmmoExplosion_C : public ALightArtilleryExplosion_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* RotationCorrection;
    float ProjectileTickRate;
    FVector ProjectileVelocity;

    void ReceiveDestroyed();
    void BPDetonate();
    void BPTelegraphProjectile(FVector ImpactVelocity, float TimeUntilDetonation);
    void MoveProjectileStep();
    void ExecuteUbergraph_HERocketAmmoExplosion(int32 EntryPoint);
};

#endif
