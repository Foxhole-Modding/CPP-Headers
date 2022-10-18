#ifndef UE4SS_SDK_BPLightTank2InfantryC_HPP
#define UE4SS_SDK_BPLightTank2InfantryC_HPP

class ABPLightTank2InfantryC_C : public ABPMortarTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleExitComponent* Passenger4Exit;
    class UVehicleTriggerComponent* Passenger4Trigger;
    class UVehicleSeatComponent* PassengerSeat4;
    class UVehicleExitComponent* Passenger3Exit;
    class UVehicleTriggerComponent* Passenger3Trigger;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;
    class UVehicleSeatComponent* GunnerSeat2;
    class USkeletalMeshComponent* Chassis;
    class UParticleSystemComponent* Exhaust;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTank2InfantryC(int32 EntryPoint);
};

#endif
