#ifndef UE4SS_SDK_TownWLargeGS1BuildSite_HPP
#define UE4SS_SDK_TownWLargeGS1BuildSite_HPP

class ATownWLargeGS1BuildSite_C : public AGarrisonStationBuildSite
{
    class USpawnPointComponent* SpawnPoint2;
    class USpawnPointComponent* SpawnPoint;
    class UCameraComponent* ViewTargetCamera;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* WorkVolume2;
    class UBoxComponent* WorkVolume;
    class UStaticMeshComponent* RoofMesh;
    class UStaticMeshComponent* HouseMesh;

    void OnEnterExit(bool Enter, class AActor* Actor);
};

#endif
