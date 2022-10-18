#ifndef UE4SS_SDK_BPFacilityRefineryOil_HPP
#define UE4SS_SDK_BPFacilityRefineryOil_HPP

class ABPFacilityRefineryOil_C : public AFacilityRefinery
{
    class UWarAudioComponent* ProducingSfx;
    class UDecalComponent* OutputDecal0;
    class UStaticMeshComponent* OutputMesh0;
    class UBPStructurePipelineOutput_C* PipeOutput0;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UDecalComponent* FoundationDecal;
    class UParticleSystemComponent* ProducingFX1;
    class UParticleSystemComponent* ProducingFX;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* InputMesh0;
    class UBPStructurePipelineInput_C* PipeInput0;
    class UStaticMeshComponent* PowerLineConnector;
    class UStaticMeshComponent* MainMesh;

};

#endif
