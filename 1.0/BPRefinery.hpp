#ifndef UE4SS_SDK_BPRefinery_HPP
#define UE4SS_SDK_BPRefinery_HPP

class ABPRefinery_C : public ARefinery
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh16;
    class UChildActorComponent* ChildActor;
    class UChildActorComponent* ChildActor1;
    class UStaticMeshComponent* StaticMesh11;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* Flag;
    class UStaticMeshComponent* FmatsPacked;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UPointLightComponent* PointLight1;
    class UAudioComponent* ProducingSfx;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal1;
    class UStaticMeshComponent* BasicCrates;
    class UStaticMeshComponent* EmatsPacked;
    class UStaticMeshComponent* BmatsPacked;
    class UStaticMeshComponent* RmatsPacked;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* BulwarkKeepInteriorWheel;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UDecalComponent* DirtPatch;
    class UStaticMeshComponent* Tarp02;
    class UStaticMeshComponent* RefineryBuilding;
    class UParticleSystemComponent* ParticleSystem;
    bool bIsProducingSFXActive;

    void ReceiveBeginPlay();
    void UpdateVisuals_SlowTick();
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPRefinery(int32 EntryPoint);
};

#endif
