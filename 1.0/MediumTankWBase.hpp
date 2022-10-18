#ifndef UE4SS_SDK_MediumTankWBase_HPP
#define UE4SS_SDK_MediumTankWBase_HPP

class AMediumTankWBase_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ExhaustR;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_MediumTankWBase(int32 EntryPoint);
};

#endif
