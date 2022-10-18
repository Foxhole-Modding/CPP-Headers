#ifndef UE4SS_SDK_BPEngineeringCenter_HPP
#define UE4SS_SDK_BPEngineeringCenter_HPP

class ABPEngineeringCenter_C : public AEngineeringCenter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight2;
    class UDecalComponent* Decal2;
    class UPointLightComponent* PointLight1;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* EngineeringCenter;
    bool bIsProducingSFXActive;

    void SetFacilityVisibility(class UStaticMeshComponent* FacilityMesh, bool IsVisible);
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPEngineeringCenter(int32 EntryPoint);
};

#endif
