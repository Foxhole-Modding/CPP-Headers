#ifndef UE4SS_SDK_BPFactory_HPP
#define UE4SS_SDK_BPFactory_HPP

class ABPFactory_C : public ASpecializedFactory
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* Flag;
    class UDecalComponent* Decal;
    class UAudioComponent* ProducingSfx;
    class UStaticMeshComponent* FactorySmallArms;
    class UStaticMeshComponent* FactoryMedical;
    class UStaticMeshComponent* FactoryUtilityFacility;
    class UStaticMeshComponent* FactorySuppliesFacility;
    class UStaticMeshComponent* FactorySpecialWeaponsFacility;
    class UParticleSystemComponent* Smoke;
    class UParticleSystemComponent* Smoke1;
    class UDecalComponent* CampsiteDirt;
    class UDecalComponent* Decal2;
    class UStaticMeshComponent* BasicFacility;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* Pipes_04;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* FoodCrate;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* Workshop;
    bool bIsProducingSFXActive;

    void UpdateVisuals_SlowTick();
    void ReceiveBeginPlay();
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPFactory(int32 EntryPoint);
};

#endif
