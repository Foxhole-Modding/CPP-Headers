#ifndef UE4SS_SDK_BPDrawbridgeWoodBuildSite_HPP
#define UE4SS_SDK_BPDrawbridgeWoodBuildSite_HPP

class ABPDrawbridgeWoodBuildSite_C : public ADrawbridgeBuildSite
{
    class UBoxComponent* CollisionB;
    class UStaticMeshComponent* BuildSiteB;
    class UStaticMeshComponent* ReferenceB;
    class UStaticMeshComponent* ReferenceA;
    class UStaticMeshComponent* BuildSite;
    class UBoxComponent* CollisionA;

};

#endif
