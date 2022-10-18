#ifndef UE4SS_SDK_BPFacilityCrane_HPP
#define UE4SS_SDK_BPFacilityCrane_HPP

class ABPFacilityCrane_C : public AStaticCrane
{
    class UStaticMeshComponent* SpotlightCone3;
    class UStaticMeshComponent* FVFLight2;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* FVFLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* FVFLight;
    class UStaticMeshComponent* PowerLineConnector;
    class UDecalComponent* FoundationDecal;

};

#endif
