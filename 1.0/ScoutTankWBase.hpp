#ifndef UE4SS_SDK_ScoutTankWBase_HPP
#define UE4SS_SDK_ScoutTankWBase_HPP

class AScoutTankWBase_C : public AScoutTank
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* ExhaustR;
    class UStaticMeshComponent* LightTurret;
    class USpotLightComponent* SpotLightTurret;
    class UParticleSystemComponent* ExhaustL;
    class UStaticMeshComponent* LightBody;
    class USpotLightComponent* SpotLightBody;
    class UVehicleSeatComponent* CommanderSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_ScoutTankWBase(int32 EntryPoint);
};

#endif
