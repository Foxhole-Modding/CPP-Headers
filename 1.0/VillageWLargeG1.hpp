#ifndef UE4SS_SDK_VillageWLargeG1_HPP
#define UE4SS_SDK_VillageWLargeG1_HPP

class AVillageWLargeG1_C : public AGarrisonHouse
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TownStaircase03;
    class UStaticMeshComponent* StaticMesh37;
    class UStaticMeshComponent* StaticMesh10;
    class UBoxComponent* PropsCollison05;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh48;
    class UStaticMeshComponent* StaticMesh36;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh57;
    class UStaticMeshComponent* StaticMesh45;
    class UStaticMeshComponent* StaticMesh56;
    class UStaticMeshComponent* StaticMesh30;
    class UStaticMeshComponent* StaticMesh32;
    class UStaticMeshComponent* StaticMesh28;
    class UStaticMeshComponent* StaticMesh34;
    class UStaticMeshComponent* StaticMesh29;
    class UStaticMeshComponent* StaticMesh31;
    class UStaticMeshComponent* StaticMesh33;
    class UStaticMeshComponent* StaticMesh35;
    class UStaticMeshComponent* StaticMesh47;
    class UStaticMeshComponent* StaticMesh42;
    class UStaticMeshComponent* StaticMesh50;
    class UStaticMeshComponent* StaticMesh40;
    class UStaticMeshComponent* StaticMesh21;
    class UStaticMeshComponent* StaticMesh44;
    class UStaticMeshComponent* StaticMesh49;
    class UStaticMeshComponent* StaticMesh43;
    class UStaticMeshComponent* StaticMesh51;
    class UStaticMeshComponent* StaticMesh52;
    class UStaticMeshComponent* Cabinet1;
    class UStaticMeshComponent* SideCabinet8;
    class UDecalComponent* AITurretMarker03;
    class UDecalComponent* AITurretMarker02;
    class UDecalComponent* AITurretMarker01;
    class UDecalComponent* AITurretMarker00;
    class UParticleSystemComponent* ParticleSystem6;
    class UStaticMeshComponent* Lamp05;
    class UStaticMeshComponent* Lamp01;
    class UStaticMeshComponent* Lamp03;
    class UStaticMeshComponent* StaticMesh55;
    class UStaticMeshComponent* StaticMesh46;
    class UStaticMeshComponent* KitchenTable;
    class UStaticMeshComponent* StaticMesh27;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* StaticMesh25;
    class UStaticMeshComponent* StaticMesh24;
    class UStaticMeshComponent* StaticMesh23;
    class UStaticMeshComponent* StaticMesh22;
    class UStaticMeshComponent* StaticMesh20;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UDecalComponent* Decal5;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh3;
    class UDecalComponent* Decal4;
    class UDecalComponent* Decal3;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal1;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* StaticMesh26;
    class UBoxComponent* PropsCollison01;
    class UBoxComponent* PropsCollison06;
    class UBoxComponent* PropsCollison04;
    class UBoxComponent* PropsCollison03;
    class UBoxComponent* PropsCollison02;
    class UBoxComponent* StaticMeshProps;
    class UStaticMeshComponent* window04;
    class UStaticMeshComponent* window03;
    class UStaticMeshComponent* window02;
    class UStaticMeshComponent* window01;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret3;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret2;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret1;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret;
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;
    class UMultiplexedStaticMeshComponent* MultiplexedHouse;
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* HouseMesh;

    void ReceiveBeginPlay();
    void UpdateLights();
    void ExecuteUbergraph_VillageWLargeG1(int32 EntryPoint);
};

#endif
