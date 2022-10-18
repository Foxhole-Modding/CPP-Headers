#ifndef UE4SS_SDK_BPPowerPoleLight_HPP
#define UE4SS_SDK_BPPowerPoleLight_HPP

class ABPPowerPoleLight_C : public AModificationTemplate
{
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* LightMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
