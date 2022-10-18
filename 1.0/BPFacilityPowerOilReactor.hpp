#ifndef UE4SS_SDK_BPFacilityPowerOilReactor_HPP
#define UE4SS_SDK_BPFacilityPowerOilReactor_HPP

class ABPFacilityPowerOilReactor_C : public AModificationTemplate
{
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UParticleSystemComponent* BaseSmoke2;
    class UParticleSystemComponent* BaseSmoke;
    class UParticleSystemComponent* BaseSmoke1;
    class UStaticMeshComponent* ModMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
