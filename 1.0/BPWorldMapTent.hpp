#ifndef UE4SS_SDK_BPWorldMapTent_HPP
#define UE4SS_SDK_BPWorldMapTent_HPP

class ABPWorldMapTent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* StaticMesh2;
    class UPointLightComponent* PointLight;
    class UUseWorldMapComponent* UseWorldMap;
    class UStaticMeshComponent* EnlistmentBannerPoleColConquest;
    class UStaticMeshComponent* AmmoCrateTop;
    class UStaticMeshComponent* AmmoCrate;
    class UStaticMeshComponent* Knife;
    class UStaticMeshComponent* cup;
    class UStaticMeshComponent* Paper;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Book;
    class UStaticMeshComponent* Paper 2;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* WarTable;
    class USceneComponent* DefaultSceneRoot;

    void OnEnterExitWorldMapTent(bool Exiting, class AActor* Actor);
    void BndEvt__RoofOVerlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__RoofOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BPWorldMapTent(int32 EntryPoint);
};

#endif
