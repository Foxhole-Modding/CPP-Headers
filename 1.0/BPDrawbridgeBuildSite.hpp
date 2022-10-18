#ifndef UE4SS_SDK_BPDrawbridgeBuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeBuildSite_HPP

class ABPDrawbridgeBuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* VehicleBlocking;
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* PawnCheckVolume;
    class UStaticMeshComponent* ReferenceB;
    class UBoxComponent* CollisionB;
    class UStaticMeshComponent* BridgeScaffoldB;
    class UStaticMeshComponent* ReferenceA;
    class UStaticMeshComponent* BridgeScaffoldA;
    class UBoxComponent* CollisionA;

};

#endif
