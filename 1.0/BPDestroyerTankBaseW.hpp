#ifndef UE4SS_SDK_BPDestroyerTankBaseW_HPP
#define UE4SS_SDK_BPDestroyerTankBaseW_HPP

class ABPDestroyerTankBaseW_C : public ABattleTank
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCameraComponent* Camera;
    class UVehicleSeatComponent* CommanderSeat2;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UParticleSystemComponent* Exhaust;
    class USpotLightComponent* SpotLightTurret;
    class UStaticMeshComponent* LightTurret;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPDestroyerTankBaseW(int32 EntryPoint);
};

#endif
