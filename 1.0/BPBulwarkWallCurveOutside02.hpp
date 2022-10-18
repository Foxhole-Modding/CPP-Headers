#ifndef UE4SS_SDK_BPBulwarkWallCurveOutside02_HPP
#define UE4SS_SDK_BPBulwarkWallCurveOutside02_HPP

class ABPBulwarkWallCurveOutside02_C : public AActor
{
    class UBoxComponent* Box;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea2;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* BulwarkWallRoof;
    class UStaticMeshComponent* BulwarkWallBase02;
    class USceneComponent* DefaultSceneRoot;

};

#endif
