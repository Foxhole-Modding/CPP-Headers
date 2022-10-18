#ifndef UE4SS_SDK_BPScoutVehicleBaseC_HPP
#define UE4SS_SDK_BPScoutVehicleBaseC_HPP

class ABPScoutVehicleBaseC_C : public ABPScoutVehicleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Cabin;
    class UStaticMeshComponent* Base;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_R;
    class UStaticMeshComponent* Light_L;
    class USpotLightComponent* SpotLight_L;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutVehicleBaseC(int32 EntryPoint);
};

#endif
