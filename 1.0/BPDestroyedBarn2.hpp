#ifndef UE4SS_SDK_BPDestroyedBarn2_HPP
#define UE4SS_SDK_BPDestroyedBarn2_HPP

class ABPDestroyedBarn2_C : public ADestroyedGarrisonHouse
{
    class URuinedMeshComponent* RuinedMesh4;
    class URuinedMeshComponent* RuinedMesh3;
    class URuinedMeshComponent* RuinedMesh2;
    class URuinedMeshComponent* RuinedMesh1;
    class URuinedMeshComponent* RuinedMesh;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UBoxComponent* ShootThroughCollision;
    class UStaticMeshComponent* HouseMesh;

};

#endif
