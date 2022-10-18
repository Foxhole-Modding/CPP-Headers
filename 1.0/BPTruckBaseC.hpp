#ifndef UE4SS_SDK_BPTruckBaseC_HPP
#define UE4SS_SDK_BPTruckBaseC_HPP

class ABPTruckBaseC_C : public ABPTruckBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight_L;
    class USpotLightComponent* SpotLight_R;
    class UPointLightComponent* LightRear_L;
    class UPointLightComponent* LightRear_R;
    class UStaticMeshComponent* RearLight_L;
    class UStaticMeshComponent* RearLight_R;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckBaseC(int32 EntryPoint);
};

#endif
