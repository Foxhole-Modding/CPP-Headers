#ifndef UE4SS_SDK_BPFacilityRefineryCoal_HPP
#define UE4SS_SDK_BPFacilityRefineryCoal_HPP

class ABPFacilityRefineryCoal_C : public AFacilityRefinery
{
    class UWarAudioComponent* ProducingSfx;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UDecalComponent* FoundationDecal;
    class UParticleSystemComponent* Smoke;
    class UStaticMeshComponent* PowerLineConnector;
    class UStaticMeshComponent* MainMesh;

};

#endif
