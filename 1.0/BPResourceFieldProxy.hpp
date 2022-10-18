#ifndef UE4SS_SDK_BPResourceFieldProxy_HPP
#define UE4SS_SDK_BPResourceFieldProxy_HPP

class ABPResourceFieldProxy_C : public AWorldProxyActor
{
    class UStaticMeshComponent* SpawnArea;
    class UStaticMeshComponent* FieldProxyMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
