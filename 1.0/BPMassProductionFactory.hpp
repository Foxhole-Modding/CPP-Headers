#ifndef UE4SS_SDK_BPMassProductionFactory_HPP
#define UE4SS_SDK_BPMassProductionFactory_HPP

class ABPMassProductionFactory_C : public AMassProductionFactory
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight2;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight2;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh9;
    class UChildActorComponent* ChildActor1;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UChildActorComponent* ChildActor;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Flag;
    class UAudioComponent* ProducingSfx;
    class UParticleSystemComponent* Smoke;
    class UDecalComponent* Decal2;
    class UPointLightComponent* PointLight1;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* FactoryMesh;
    bool bIsProducingSFXActive;

    void SetFacilityVisibility(class UStaticMeshComponent* FacilityMesh, bool IsVisible);
    void UpdateVisuals_SlowTick();
    void ReceiveBeginPlay();
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPMassProductionFactory(int32 EntryPoint);
};

#endif
