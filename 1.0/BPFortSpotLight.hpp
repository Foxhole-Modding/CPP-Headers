#ifndef UE4SS_SDK_BPFortSpotLight_HPP
#define UE4SS_SDK_BPFortSpotLight_HPP

class ABPFortSpotLight_C : public ATemplate
{
    class UStaticMeshComponent* TopMesh;
    class UTurretLightComponent* TurretLight;
    class UStaticMeshComponent* BaseMesh;
    class USpotLightComponent* Light;
    class USceneComponent* DefaultSceneRoot;

};

#endif
