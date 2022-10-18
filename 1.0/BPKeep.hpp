#ifndef UE4SS_SDK_BPKeep_HPP
#define UE4SS_SDK_BPKeep_HPP

class ABPKeep_C : public AKeep
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea4;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea3;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea2;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class USpawnPointComponent* Spawn8;
    class USpawnPointComponent* Spawn7;
    class USpawnPointComponent* Spawn6;
    class USpawnPointComponent* Spawn5;
    class USpawnPointComponent* Spawn4;
    class USpawnPointComponent* Spawn3;
    class USpawnPointComponent* Spawn2;
    class USpawnPointComponent* Spawn1;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* BulwarkKeepInteriorDoor;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMeshRoof;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UBoxComponent* Box3;
    class UBoxComponent* Box2;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh11;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* WheelMesh;
    class UStaticMeshComponent* RoofMesh;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;

    void OnEnterExitKeep(bool Exiting, class AActor* Actor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BPKeep(int32 EntryPoint);
};

#endif
