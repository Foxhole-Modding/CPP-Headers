#ifndef UE4SS_SDK_BPMediumTank2BaseC_HPP
#define UE4SS_SDK_BPMediumTank2BaseC_HPP

class ABPMediumTank2BaseC_C : public ABattleTank
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* Chassis;
    class UParticleSystemComponent* Exhaust;
    class USpotLightComponent* SpotLightBody;
    class UStaticMeshComponent* LightBody;
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
    void ExecuteUbergraph_BPMediumTank2BaseC(int32 EntryPoint);
};

#endif
