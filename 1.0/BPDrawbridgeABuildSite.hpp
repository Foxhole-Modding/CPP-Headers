#ifndef UE4SS_SDK_BPDrawbridgeABuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeABuildSite_HPP

class ABPDrawbridgeABuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UBoxComponent* PawnCheckVolume;
    class UStaticMeshComponent* ReferenceB;
    class UBoxComponent* CollisionB;
    class UStaticMeshComponent* BridgeScaffoldB;
    class UStaticMeshComponent* ReferenceA;
    class UStaticMeshComponent* BridgeScaffoldA;
    class UBoxComponent* CollisionA;

};

#endif
