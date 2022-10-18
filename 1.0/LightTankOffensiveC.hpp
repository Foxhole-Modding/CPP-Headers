#ifndef UE4SS_SDK_LightTankOffensiveC_HPP
#define UE4SS_SDK_LightTankOffensiveC_HPP

class ALightTankOffensiveC_C : public ABPLightTankBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat2;
    class USkeletalMeshComponent* SkeletalMesh;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_LightTankOffensiveC(int32 EntryPoint);
};

#endif
