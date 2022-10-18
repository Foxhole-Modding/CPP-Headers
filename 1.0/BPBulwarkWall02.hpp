#ifndef UE4SS_SDK_BPBulwarkWall02_HPP
#define UE4SS_SDK_BPBulwarkWall02_HPP

class ABPBulwarkWall02_C : public AActor
{
    class UBoxComponent* Box;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* BulwarkWallRoof;
    class UStaticMeshComponent* BulwarkWallBase02;
    class USceneComponent* DefaultSceneRoot;

};

#endif
