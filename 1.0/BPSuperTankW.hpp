#ifndef UE4SS_SDK_BPSuperTankW_HPP
#define UE4SS_SDK_BPSuperTankW_HPP

class ABPSuperTankW_C : public ABPSuperTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLightBodyR;
    class USpotLightComponent* SpotLightTurret;
    class UStaticMeshComponent* LightBodyR;
    class UStaticMeshComponent* LightTurret;
    class UVehicleExitComponent* EngineerExit;
    class UVehicleTriggerComponent* EngineerTrigger4;
    class UVehicleExitComponent* Gunner3Exit;
    class UVehicleTriggerComponent* Gunner3Trigger;
    class UVehicleSeatComponent* EngineerSeat4;
    class UVehicleSeatComponent* GunnerSeat3;
    class UVehicleSeatComponent* CommanderSeat5;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankW(int32 EntryPoint);
};

#endif
