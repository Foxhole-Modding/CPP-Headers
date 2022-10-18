#ifndef UE4SS_SDK_BPTroopShipBase_HPP
#define UE4SS_SDK_BPTroopShipBase_HPP

class ABPTroopShipBase_C : public ATroopShipBase
{
    class USpawnPointComponent* SpawnPoint15;
    class USpawnPointComponent* SpawnPoint14;
    class USpawnPointComponent* SpawnPoint13;
    class USpawnPointComponent* SpawnPoint12;
    class USpawnPointComponent* SpawnPoint11;
    class USpawnPointComponent* SpawnPoint10;
    class USpawnPointComponent* SpawnPoint9;
    class USpawnPointComponent* SpawnPoint;
    class UCameraComponent* ViewTargetCamera;
    class USpotLightComponent* SpotLight_Forward;
    class USpotLightComponent* SpotLight_Aft;
    class USpotLightComponent* SpotLight_Midship;
    class UStaticMeshComponent* Light_Forward;
    class UStaticMeshComponent* Light_Aft;
    class UStaticMeshComponent* Light_Midship;
    class UBoxComponent* NoBuildZone;

};

#endif
