#ifndef UE4SS_SDK_Keg_HPP
#define UE4SS_SDK_Keg_HPP

class AKeg_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* PropCollider;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
