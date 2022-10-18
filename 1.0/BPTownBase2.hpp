#ifndef UE4SS_SDK_BPTownBase2_HPP
#define UE4SS_SDK_BPTownBase2_HPP

class ABPTownBase2_C : public ATownBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* OilLantern;
    class USpawnPointComponent* Spawn12;
    class USpawnPointComponent* Spawn11;
    class USpawnPointComponent* Spawn10;
    class USpawnPointComponent* Spawn9;
    class USpawnPointComponent* Spawn8;
    class USpawnPointComponent* Spawn7;
    class USpawnPointComponent* Spawn6;
    class USpawnPointComponent* Spawn5;
    class USpawnPointComponent* Spawn4;
    class USpawnPointComponent* Spawn3;
    class USpawnPointComponent* Spawn2;
    class USpawnPointComponent* Spawn1;
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;
    class UMultiplexedStaticMeshComponent* MultiplexedBase;
    class UStaticMeshComponent* Bollard16;
    class UStaticMeshComponent* Bollard15;
    class UStaticMeshComponent* Bollard14;
    class UStaticMeshComponent* Bollard13;
    class UStaticMeshComponent* Bollard12;
    class UStaticMeshComponent* Bollard11;
    class UStaticMeshComponent* Bollard10;
    class UStaticMeshComponent* Bollard9;
    class UStaticMeshComponent* Bollard8;
    class UStaticMeshComponent* Bollard7;
    class UStaticMeshComponent* Bollard6;
    class UStaticMeshComponent* Bollard5;
    class UStaticMeshComponent* Bollard4;
    class UStaticMeshComponent* Bollard3;
    class UStaticMeshComponent* Bollard2;
    class UStaticMeshComponent* Bollard1;
    class UStaticMeshComponent* Bollard;
    class UParticleSystemComponent* Candle;
    class UStaticMeshComponent* StaticMesh;
    class UParticleSystemComponent* ParticleSystem;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* StaticMesh14;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* StaticMesh13;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UBoxComponent* Box5;
    class UBoxComponent* Box2;
    class UStaticMeshComponent* FortIModInstrumentsW;
    class UBoxComponent* Box4;
    class UBoxComponent* Box3;
    class UStaticMeshComponent* FortIModTech02;
    class UStaticMeshComponent* Chair_02;
    class UStaticMeshComponent* FortIModTech01;
    class UStaticMeshComponent* WoodenCrateBottom1;
    class UStaticMeshComponent* WoodenCrateBottom;
    class UStaticMeshComponent* Chair_01;
    class UBoxComponent* Box1;
    class UStaticMeshComponent* FortIModMapTable01;
    class UBoxComponent* Box;
    class UStaticMeshComponent* FlagMesh;
    class UDecalComponent* Decal39;
    class UDecalComponent* Decal38;
    class UDecalComponent* Decal37;
    class UDecalComponent* Decal36;
    class UDecalComponent* Decal35;
    class UStaticMeshComponent* IModLocker02;
    class UStaticMeshComponent* IModLocker03;
    class UStaticMeshComponent* IModLocker01;
    class UStaticMeshComponent* TownStaircase01;
    class UStaticMeshComponent* HouseLantern1;
    class UStaticMeshComponent* HouseLantern;
    class UDecalComponent* Decal26;
    class UDecalComponent* Decal29;
    class UDecalComponent* Decal28;
    class UDecalComponent* Decal27;
    class UDecalComponent* Decal9;
    class UDecalComponent* Decal15;
    class UDecalComponent* Decal14;
    class UDecalComponent* Decal13;
    class UDecalComponent* Decal12;
    class UDecalComponent* Decal11;
    class UDecalComponent* Decal10;
    class UDecalComponent* Decal7;
    class UDecalComponent* Decal6;
    class UDecalComponent* Decal5;
    class UDecalComponent* Decal;
    class UDecalComponent* Decal34;
    class UDecalComponent* Decal33;
    class UDecalComponent* Decal32;
    class UDecalComponent* Decal31;
    class UDecalComponent* Decal30;
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
    class UDecalComponent* Decal8;
    class UStaticMeshComponent* Window4;
    class UStaticMeshComponent* Window3;
    class UStaticMeshComponent* Window2;
    class UStaticMeshComponent* Window1;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea3;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea2;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* RoofMesh;
    class UDecalComponent* Decal4;
    class UDecalComponent* Decal3;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal1;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Back;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Right;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Left;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret_Front;
    class UCameraComponent* ViewTargetCamera;
    class UStaticMeshComponent* TownBaseMesh;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPTownBase2(int32 EntryPoint);
};

#endif