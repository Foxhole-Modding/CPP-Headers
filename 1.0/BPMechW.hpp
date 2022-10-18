#ifndef UE4SS_SDK_BPMechW_HPP
#define UE4SS_SDK_BPMechW_HPP

class ABPMechW_C : public ASpiderMech
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* FireL;
    class UStaticMeshComponent* FireR;
    class UAudioComponent* VehicleIdle;
    class UParticleSystemComponent* Exhaust_L;
    class UParticleSystemComponent* Exhaust_R;
    class USpotLightComponent* SpotLight_Headlight;
    class USpotLightComponent* SpotLight_Turret;
    class UStaticMeshComponent* Light_Turret;
    class UStaticMeshComponent* Light_Front;
    class UVehicleExitComponent* FrontLeftExit;
    class UVehicleExitComponent* BackExit;
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleSeatComponent* MachineGunnerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* RightExit;
    class UVehicleExitComponent* BackLeftExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* MachineGunnerTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UAudioComponent* DriveIdle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMechW(int32 EntryPoint);
};

#endif
