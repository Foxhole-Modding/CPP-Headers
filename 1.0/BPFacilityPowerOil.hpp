#ifndef UE4SS_SDK_BPFacilityPowerOil_HPP
#define UE4SS_SDK_BPFacilityPowerOil_HPP

class ABPFacilityPowerOil_C : public APowerPlant
{
    class UWarAudioComponent* ProducingSfx;
    class UParticleSystemComponent* Smoke;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* Generator;
    class UStaticMeshComponent* Powerlines;
    class UStaticMeshComponent* InputMesh0;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* PowerLineConnector;
    class UBuildSocketComponent* PipeInput0;
    class UStaticMeshComponent* MainMesh;

};

#endif
