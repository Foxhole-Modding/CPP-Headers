#ifndef UE4SS_SDK_TownWLargeGS1_HPP
#define UE4SS_SDK_TownWLargeGS1_HPP

class ATownWLargeGS1_C : public AGarrisonStation
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnPointComponent* Spawn5;
    class USpawnPointComponent* Spawn4;
    class USpawnPointComponent* Spawn3;
    class USpawnPointComponent* Spawn2;
    class USpawnPointComponent* Spawn1;
    class USpawnPointComponent* Spawn0;
    class UDecalComponent* Decal1;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* StaticMesh1;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UBPBicycleSpawnLocationComponent_C* BPBicycleSpawnLocationComponent;
    class UCameraComponent* ViewTargetCamera;
    class UStaticMeshComponent* BackDoorStair;
    class UDecalComponent* AITurretMarker01;
    class UDecalComponent* AITurretMarker03;
    class UDecalComponent* AITurretMarker02;
    class UDecalComponent* AITurretMarker04;
    class UDecalComponent* AITurretMarker00;
    class UStaticMeshComponent* w5;
    class UStaticMeshComponent* w4;
    class UStaticMeshComponent* w3;
    class UStaticMeshComponent* w2;
    class UStaticMeshComponent* w1;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret4;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret3;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret2;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret1;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* GarrisonStationBase;
    class UStaticMeshComponent* RadioStationMesh1;
    class UStaticMeshComponent* RadioStationMesh;
    class UStaticMeshComponent* ArtilleryShelterMesh;
    class UStaticMeshComponent* OperatingPostMesh;
    class UStaticMeshComponent* RoofMesh;
    class UBoxComponent* ArtilleryShelterWeakPoint;
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;
    class UMultiplexedStaticMeshComponent* MultiplexedHouse;
    class UStaticMeshComponent* HouseMesh;

    void ReceiveBeginPlay();
    void OnResearched(const class UTechTreeComponent* TechTreeComponent, const ETechComponentID TechID);
    void ExecuteUbergraph_TownWLargeGS1(int32 EntryPoint);
};

#endif
