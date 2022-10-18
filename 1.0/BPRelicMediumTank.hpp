#ifndef UE4SS_SDK_BPRelicMediumTank_HPP
#define UE4SS_SDK_BPRelicMediumTank_HPP

class ABPRelicMediumTank_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat6;
    class UVehicleSeatComponent* PassengerSeat5;
    class UVehicleExitComponent* Passenger6Exit;
    class UVehicleTriggerComponent* Passenger6Trigger;
    class UVehicleTriggerComponent* Passenger5Trigger;
    class UVehicleExitComponent* Passenger5Exit;
    class UVehicleTriggerComponent* Passenger4Trigger;
    class UVehicleExitComponent* Passenger4Exit;
    class UVehicleSeatComponent* PassengerSeat4;
    class USpotLightComponent* SpotLightBody2;
    class UStaticMeshComponent* LightTurret1;
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleTriggerComponent* Gunner2Trigger;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleSeatComponent* GunnerSeat2;
    class UStaticMeshComponent* LightTurret4;
    class UStaticMeshComponent* LightTurret3;
    class UStaticMeshComponent* LightTurret2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicMediumTank(int32 EntryPoint);
};

#endif
