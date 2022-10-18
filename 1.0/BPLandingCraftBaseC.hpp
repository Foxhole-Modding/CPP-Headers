#ifndef UE4SS_SDK_BPLandingCraftBaseC_HPP
#define UE4SS_SDK_BPLandingCraftBaseC_HPP

class ABPLandingCraftBaseC_C : public ABPLandingCraftBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* StaticMesh1;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* StaticMesh;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBaseC(int32 EntryPoint);
};

#endif
