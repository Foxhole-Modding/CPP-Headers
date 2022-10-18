#ifndef UE4SS_SDK_BPCoverWell4Snow_HPP
#define UE4SS_SDK_BPCoverWell4Snow_HPP

class ABPCoverWell4Snow_C : public AActor
{
    class UWaterReloadSourceComponent* WaterReloadSource;
    class UStaticMeshComponent* Bucket;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Rope;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* Scene;

};

#endif
