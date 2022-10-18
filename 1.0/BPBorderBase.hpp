#ifndef UE4SS_SDK_BPBorderBase_HPP
#define UE4SS_SDK_BPBorderBase_HPP

class ABPBorderBase_C : public ABorderBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnPointComponent* SpawnPoint15;
    class USpawnPointComponent* SpawnPoint14;
    class USpawnPointComponent* SpawnPoint13;
    class USpawnPointComponent* SpawnPoint12;
    class USpawnPointComponent* SpawnPoint11;
    class USpawnPointComponent* SpawnPoint10;
    class USpawnPointComponent* SpawnPoint9;
    class USpawnPointComponent* SpawnPoint;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* Light1;
    class UStaticMeshComponent* Light;
    class UBoxComponent* NoBuildVolume;
    class UCameraComponent* ViewTargetCamera;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* FlagMesh;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPBorderBase(int32 EntryPoint);
};

#endif
