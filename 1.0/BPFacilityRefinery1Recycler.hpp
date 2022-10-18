#ifndef UE4SS_SDK_BPFacilityRefinery1Recycler_HPP
#define UE4SS_SDK_BPFacilityRefinery1Recycler_HPP

class ABPFacilityRefinery1Recycler_C : public AModificationTemplate
{
    class UParticleSystemComponent* ProducingSteam3;
    class UParticleSystemComponent* ProducingSteam2;
    class UParticleSystemComponent* ProducingSteam1;
    class UParticleSystemComponent* ProducingSteam;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class USkeletalMeshComponent* ModMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
