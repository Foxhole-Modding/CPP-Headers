#ifndef UE4SS_SDK_BPTruckBaseW_HPP
#define UE4SS_SDK_BPTruckBaseW_HPP

class ABPTruckBaseW_C : public ABPTruckBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight_R;
    class UPointLightComponent* Light_Rear;
    class UStaticMeshComponent* RearLight;
    class UStaticMeshComponent* Light_R;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckBaseW(int32 EntryPoint);
};

#endif
