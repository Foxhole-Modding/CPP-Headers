#ifndef UE4SS_SDK_BPFacilityRefineryCoalCokeFurnace_HPP
#define UE4SS_SDK_BPFacilityRefineryCoalCokeFurnace_HPP

class ABPFacilityRefineryCoalCokeFurnace_C : public AModificationTemplate
{
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UParticleSystemComponent* ProducingFX3;
    class UParticleSystemComponent* ProducingFX2;
    class UStaticMeshComponent* ModMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
