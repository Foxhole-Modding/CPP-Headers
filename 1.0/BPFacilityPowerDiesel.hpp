#ifndef UE4SS_SDK_BPFacilityPowerDiesel_HPP
#define UE4SS_SDK_BPFacilityPowerDiesel_HPP

class ABPFacilityPowerDiesel_C : public APowerPlant
{
    class UWarAudioComponent* ProducingSfx;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class USceneComponent* Lights;
    class UDecalComponent* FoundationDecal;
    class UParticleSystemComponent* ProducingFX;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* InputMesh0;
    class UStaticMeshComponent* PowerLineConnector;
    class UBuildSocketComponent* PipeInput0;
    class UStaticMeshComponent* MainMesh;

};

#endif
