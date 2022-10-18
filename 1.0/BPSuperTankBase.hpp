#ifndef UE4SS_SDK_BPSuperTankBase_HPP
#define UE4SS_SDK_BPSuperTankBase_HPP

class ABPSuperTankBase_C : public ABattleTank
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Exhaust;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankBase(int32 EntryPoint);
};

#endif
