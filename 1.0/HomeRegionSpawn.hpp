#ifndef UE4SS_SDK_HomeRegionSpawn_HPP
#define UE4SS_SDK_HomeRegionSpawn_HPP

class AHomeRegionSpawn_C : public AHomeRegionBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnPointComponent* SpawnPoint9;
    class USpawnPointComponent* SpawnPoint8;
    class USpawnPointComponent* SpawnPoint7;
    class USpawnPointComponent* SpawnPoint6;
    class USpawnPointComponent* SpawnPoint5;
    class USpawnPointComponent* SpawnPoint4;
    class USpawnPointComponent* SpawnPoint3;
    class USpawnPointComponent* SpawnPoint2;
    class USpawnPointComponent* SpawnPoint1;
    class USpawnPointComponent* SpawnPoint;
    class UCameraComponent* Camera;
    class UParticleSystemComponent* ParticleSystem;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Light;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    float Timeline_2_Intensity_D46A184A499B36ECF5473A8929BF58DD;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_D46A184A499B36ECF5473A8929BF58DD;
    class UTimelineComponent* Timeline_2;
    float Timeline_0_Emissive_2817AA6448D8119AC585B0BC2FC5BCEF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2817AA6448D8119AC585B0BC2FC5BCEF;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay();
    void UpdateLights();
    void ExecuteUbergraph_HomeRegionSpawn(int32 EntryPoint);
};

#endif
