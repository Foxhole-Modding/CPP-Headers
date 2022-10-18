#ifndef UE4SS_SDK_BPScoutVehicleBaseW_HPP
#define UE4SS_SDK_BPScoutVehicleBaseW_HPP

class ABPScoutVehicleBaseW_C : public ABPScoutVehicleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Cabin;
    class UStaticMeshComponent* Base;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_R;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutVehicleBaseW(int32 EntryPoint);
};

#endif
