#ifndef UE4SS_SDK_BPFortT3LadderRoof_HPP
#define UE4SS_SDK_BPFortT3LadderRoof_HPP

class ABPFortT3LadderRoof_C : public AModificationTemplate
{
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* LadderSpawnLocation;
    class UStaticMeshComponent* Roof;
    class USceneComponent* DefaultSceneRoot;

};

#endif
