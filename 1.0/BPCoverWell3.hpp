#ifndef UE4SS_SDK_BPCoverWell3_HPP
#define UE4SS_SDK_BPCoverWell3_HPP

class ABPCoverWell3_C : public AActor
{
    class UWaterReloadSourceComponent* WaterReloadSource;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* LanternHanging;
    class UStaticMeshComponent* Rope01;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Scene;
    class UStaticMeshComponent* Rope02;
    class UDecalComponent* Decal;

};

#endif
