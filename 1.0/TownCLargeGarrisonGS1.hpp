#ifndef UE4SS_SDK_TownCLargeGarrisonGS1_HPP
#define UE4SS_SDK_TownCLargeGarrisonGS1_HPP

class ATownCLargeGarrisonGS1_C : public AGarrisonStation
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnPointComponent* Spawn5;
    class USpawnPointComponent* Spawn4;
    class USpawnPointComponent* Spawn3;
    class USpawnPointComponent* Spawn2;
    class USpawnPointComponent* Spawn1;
    class USpawnPointComponent* Spawn0;
    class UStaticMeshComponent* RadioStationMesh1;
    class UStaticMeshComponent* ArtilleryShelterMesh;
    class UStaticMeshComponent* GarrisonStationBase;
    class UStaticMeshComponent* OperatingPostMesh;
    class UStaticMeshComponent* RadioStationMesh;
    class UDecalComponent* Decal32;
    class UDecalComponent* Decal31;
    class UDecalComponent* Decal30;
    class UDecalComponent* Decal29;
    class UDecalComponent* Decal28;
    class UDecalComponent* Decal27;
    class UDecalComponent* Decal26;
    class UStaticMeshComponent* StaticMesh;
    class UDecalComponent* Decal25;
    class UDecalComponent* Decal24;
    class UDecalComponent* Decal23;
    class UDecalComponent* Decal22;
    class UDecalComponent* Decal21;
    class UDecalComponent* Decal20;
    class UDecalComponent* Decal19;
    class UDecalComponent* Decal18;
    class UDecalComponent* Decal17;
    class UDecalComponent* Decal16;
    class UDecalComponent* Decal15;
    class UDecalComponent* Decal14;
    class UDecalComponent* Decal13;
    class UDecalComponent* Decal12;
    class UDecalComponent* Decal11;
    class UDecalComponent* Decal7;
    class UDecalComponent* Decal6;
    class UDecalComponent* Decal10;
    class UDecalComponent* Decal9;
    class UDecalComponent* Decal8;
    class UDecalComponent* Decal5;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Window4;
    class UStaticMeshComponent* Window3;
    class UStaticMeshComponent* Window2;
    class UStaticMeshComponent* Window1;
    class UDecalComponent* Decal4;
    class UDecalComponent* Decal3;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal1;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Back;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Right;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Front;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Left;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;
    class UMultiplexedStaticMeshComponent* MultiplexedHouse;
    class UBPBicycleSpawnLocationComponent_C* BPBicycleSpawnLocationComponent;
    class UCameraComponent* ViewTargetCamera;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* RoofMesh;
    class UBoxComponent* ArtilleryShelterWeakPoint;
    class UStaticMeshComponent* HouseMesh;

    void ReceiveBeginPlay();
    void OnResearched(const class UTechTreeComponent* TechTreeComponent, const ETechComponentID TechID);
    void ExecuteUbergraph_TownCLargeGarrisonGS1(int32 EntryPoint);
};

#endif
