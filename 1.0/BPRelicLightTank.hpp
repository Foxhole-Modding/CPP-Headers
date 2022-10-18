#ifndef UE4SS_SDK_BPRelicLightTank_HPP
#define UE4SS_SDK_BPRelicLightTank_HPP

class ABPRelicLightTank_C : public ALightTank
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* CommanderSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UParticleSystemComponent* ExhaustR;
    class UStaticMeshComponent* TurretLightMesh;
    class USpotLightComponent* TurretLight;
    class UParticleSystemComponent* ExhaustL;
    class UAudioComponent* DriveIdle;
    class UStaticMeshComponent* FrontLightMesh;
    class USpotLightComponent* FrontLight;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicLightTank(int32 EntryPoint);
};

#endif
