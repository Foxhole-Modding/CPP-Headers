#ifndef UE4SS_SDK_BPMech_HPP
#define UE4SS_SDK_BPMech_HPP

class ABPMech_C : public AMech
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* CommanderSeat4;
    class UVehicleSeatComponent* RightGunnerSeat3;
    class UVehicleSeatComponent* LeftGunnerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* BackExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* RightGunnerTrigger;
    class UVehicleTriggerComponent* LeftGunnerTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UStaticMeshComponent* RightFire;
    class UStaticMeshComponent* LeftFire;
    class USpotLightComponent* FrontLightLeft;
    class USpotLightComponent* FrontLightRight;
    class UAudioComponent* DriveIdle;
    class UParticleSystemComponent* ExhaustRight;
    class UParticleSystemComponent* ExhaustLeft;
    class UStaticMeshComponent* FrontLightLeftHeadlight;
    class UStaticMeshComponent* FrontLightRightHeadlight;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMech(int32 EntryPoint);
};

#endif
