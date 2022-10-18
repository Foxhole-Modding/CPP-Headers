#ifndef UE4SS_SDK_RVMainRoom_HPP
#define UE4SS_SDK_RVMainRoom_HPP

class ARVMainRoom_C : public ABuildableStructure
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh21;
    class UStaticMeshComponent* HangedManFlag;
    class UStaticMeshComponent* HangManMetal;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh20;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* StaticMesh19;
    class UParticleSystemComponent* ParticleSystem5;
    class UParticleSystemComponent* ParticleSystem4;
    class UParticleSystemComponent* ParticleSystem3;
    class UParticleSystemComponent* ParticleSystem2;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh14;
    class UParticleSystemComponent* ParticleSystem1;
    class UParticleSystemComponent* ParticleSystem;
    class UDecalComponent* Decal8;
    class UDecalComponent* Decal7;
    class UDecalComponent* Decal6;
    class UDecalComponent* Decal5;
    class UDecalComponent* Decal4;
    class UDecalComponent* Decal3;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal1;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* BasicCrates04;
    class UStaticMeshComponent* HomeRegionCrates02;
    class USkeletalMeshComponent* SK_RelicTruck;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* CamouflageCrates01;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14_0;
    class UStaticMeshComponent* StaticMesh13_0;
    class UStaticMeshComponent* StaticMesh12_0;
    class UStaticMeshComponent* StaticMesh8_0;
    class UStaticMeshComponent* StaticMesh11_0;
    class UStaticMeshComponent* StaticMesh10_0;
    class UStaticMeshComponent* StaticMesh9_0;
    class UStaticMeshComponent* StaticMesh1_0;
    class UStaticMeshComponent* StaticMesh7_0;
    class UStaticMeshComponent* StaticMesh6_0;
    class UStaticMeshComponent* StaticMesh5_0;
    class UStaticMeshComponent* StaticMesh4_0;
    class UStaticMeshComponent* StaticMesh3_0;
    class UStaticMeshComponent* StaticMesh2_0;
    class UStaticMeshComponent* StaticMesh_0;
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* TownWMedS1;
    float Timeline_0_Intensity_FF49C7B244E0D069117E96B10CA77D84;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FF49C7B244E0D069117E96B10CA77D84;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_RVMainRoom(int32 EntryPoint);
};

#endif
