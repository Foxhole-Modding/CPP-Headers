#ifndef UE4SS_SDK_BPSuperTankBaseW_HPP
#define UE4SS_SDK_BPSuperTankBaseW_HPP

class ABPSuperTankBaseW_C : public ABPSuperTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;
    class UParticleSystemComponent* ExhaustR;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankBaseW(int32 EntryPoint);
};

#endif
