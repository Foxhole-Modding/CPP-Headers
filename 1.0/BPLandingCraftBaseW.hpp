#ifndef UE4SS_SDK_BPLandingCraftBaseW_HPP
#define UE4SS_SDK_BPLandingCraftBaseW_HPP

class ABPLandingCraftBaseW_C : public ABPLandingCraftBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* StaticMesh;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftBaseW(int32 EntryPoint);
};

#endif
