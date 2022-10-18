#ifndef UE4SS_SDK_BPFacilityModificationCenter_HPP
#define UE4SS_SDK_BPFacilityModificationCenter_HPP

class ABPFacilityModificationCenter_C : public AAssemblyStation
{
    class UTemperatureModifierBoxComponent* TemperatureModifierBox;
    class UStaticMeshComponent* FVFBarrel02;
    class UStaticMeshComponent* FVFBarrel03;
    class UStaticMeshComponent* FVFSmalllCrate01;
    class UStaticMeshComponent* FVFSmalllCrate02;
    class UStaticMeshComponent* FVFSmalllCrate03;
    class UStaticMeshComponent* FVFSmalllCrate04;
    class UStaticMeshComponent* FVFAirTank02;
    class UStaticMeshComponent* FVFAirTank01;
    class USkeletalMeshComponent* BaseMesh;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* FVFLight;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* FVFLight1;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* FVFLight3;
    class UStaticMeshComponent* FVFLight2;
    class USceneComponent* Lights;
    class UStaticMeshComponent* FVFLight5;
    class UStaticMeshComponent* FVFLight4;
    class UParticleSystemComponent* Dust;
    class UDecalComponent* FoundationDecal;
    class UStaticMeshComponent* PowerLineConnector;
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* RoofMesh;

};

#endif
