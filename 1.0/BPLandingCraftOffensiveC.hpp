#ifndef UE4SS_SDK_BPLandingCraftOffensiveC_HPP
#define UE4SS_SDK_BPLandingCraftOffensiveC_HPP

class ABPLandingCraftOffensiveC_C : public ABPLandingCraftBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat2;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleTriggerComponent* GunnerTrigger;
    class USkeletalMeshComponent* GunnerMounting;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLandingCraftOffensiveC(int32 EntryPoint);
};

#endif
