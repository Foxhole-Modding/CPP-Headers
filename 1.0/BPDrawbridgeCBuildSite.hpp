#ifndef UE4SS_SDK_BPDrawbridgeCBuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeCBuildSite_HPP

class ABPDrawbridgeCBuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UBoxComponent* BelowBlockingB;
    class UBoxComponent* BelowBlockingA;
    class UBoxComponent* PawnCheckVolume;
    class UStaticMeshComponent* ReferenceB;
    class UBoxComponent* CollisionB;
    class UStaticMeshComponent* BridgeScaffoldB;
    class UStaticMeshComponent* ReferenceA;
    class UStaticMeshComponent* BridgeScaffoldA;
    class UBoxComponent* CollisionA;

};

#endif
