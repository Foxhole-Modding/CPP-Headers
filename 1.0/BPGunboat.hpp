#ifndef UE4SS_SDK_BPGunboat_HPP
#define UE4SS_SDK_BPGunboat_HPP

class ABPGunboat_C : public AGunboat
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleSeatComponent* SternGunnerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* SternGunnerExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* CommanderTrigger0;
    class UVehicleTriggerComponent* SternGunnerTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UStaticMeshComponent* Light1;
    class USpotLightComponent* SpotLightRight;
    class UStaticMeshComponent* Light4;
    class UStaticMeshComponent* Light3;
    class USpotLightComponent* SpotLightLeft;
    class USpotLightComponent* SpotLightFront;
    class UStaticMeshComponent* Light2;
    class USpotLightComponent* SpotLightBack;
    class UAudioComponent* Idle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPGunboat(int32 EntryPoint);
};

#endif
