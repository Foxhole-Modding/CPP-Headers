#ifndef UE4SS_SDK_BPBulwarkWallGate_HPP
#define UE4SS_SDK_BPBulwarkWallGate_HPP

class ABPBulwarkWallGate_C : public AActor
{
    class UBoxComponent* Box2;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* BulwarkKeepInteriorDoor;
    class UStaticMeshComponent* BulwarkWallGateDoor;
    class UStaticMeshComponent* BulwarkWallGate;
    class USceneComponent* DefaultSceneRoot;

};

#endif
