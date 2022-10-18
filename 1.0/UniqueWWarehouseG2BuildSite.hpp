#ifndef UE4SS_SDK_UniqueWWarehouseG2BuildSite_HPP
#define UE4SS_SDK_UniqueWWarehouseG2BuildSite_HPP

class AUniqueWWarehouseG2BuildSite_C : public AGarrisonStationBuildSite
{
    class UStaticMeshComponent* EntranceRampBack;
    class UStaticMeshComponent* EntranceRampFront;
    class USpawnPointComponent* SpawnPoint;
    class USpawnPointComponent* SpawnPoint2;
    class UCameraComponent* ViewTargetCamera;
    class UBoxComponent* WorkVolume;
    class UStaticMeshComponent* RoofMesh;
    class UStaticMeshComponent* HouseMesh;

    void OnEnterExit(bool Enter, class AActor* Actor);
};

#endif
