#ifndef UE4SS_SDK_RVSideRoom_HPP
#define UE4SS_SDK_RVSideRoom_HPP

class ARVSideRoom_C : public ABuildableStructure
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal5;
    class UDecalComponent* Decal4;
    class UDecalComponent* Decal3;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal1;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* StaticMesh30;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh29;
    class UStaticMeshComponent* StaticMesh28;
    class UStaticMeshComponent* StaticMesh27;
    class UStaticMeshComponent* StaticMesh26;
    class UStaticMeshComponent* StaticMesh25;
    class UStaticMeshComponent* BasicCrates04;
    class USkeletalMeshComponent* SK_RelicLightTank;
    class UStaticMeshComponent* StaticMesh24;
    class UStaticMeshComponent* StaticMesh23;
    class UStaticMeshComponent* CamouflageCrates01;
    class UStaticMeshComponent* StaticMesh22;
    class UStaticMeshComponent* StaticMesh21;
    class UStaticMeshComponent* StaticMesh20;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UStaticMeshComponent* StaticMesh19;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh11;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* TownWMedS1;
    float Timeline_0_Intensity_29CABEEB4EF0B47466DC4D96552C0298;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_29CABEEB4EF0B47466DC4D96552C0298;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_RVSideRoom(int32 EntryPoint);
};

#endif
