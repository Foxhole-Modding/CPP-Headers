#ifndef UE4SS_SDK_BPCoverWell4_HPP
#define UE4SS_SDK_BPCoverWell4_HPP

class ABPCoverWell4_C : public AActor
{
    class UWaterReloadSourceComponent* WaterReloadSource;
    class UStaticMeshComponent* Bucket;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Rope;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Scene;

};

#endif
