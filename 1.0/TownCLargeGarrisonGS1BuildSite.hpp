#ifndef UE4SS_SDK_TownCLargeGarrisonGS1BuildSite_HPP
#define UE4SS_SDK_TownCLargeGarrisonGS1BuildSite_HPP

class ATownCLargeGarrisonGS1BuildSite_C : public AGarrisonStationBuildSite
{
    class USpawnPointComponent* SpawnPoint2;
    class USpawnPointComponent* SpawnPoint;
    class UCameraComponent* ViewTargetCamera;
    class UBoxComponent* WorkVolume;
    class UStaticMeshComponent* RoofMesh;
    class UStaticMeshComponent* HouseMesh;

    void OnEnterExit(bool Enter, class AActor* Actor);
};

#endif
