#ifndef UE4SS_SDK_BPTrainCombatCarC_HPP
#define UE4SS_SDK_BPTrainCombatCarC_HPP

class ABPTrainCombatCarC_C : public AInfantryRailVehicle
{
    class UParticleSystemComponent* DisabledTurretFX;
    class UCameraComponent* Camera;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleSeatComponent* LeftGunner2;
    class UVehicleSeatComponent* RightGunner1;
    class UVehicleExitComponent* LeftGunnerExit;
    class UVehicleExitComponent* RightGunnerExit;
    class UVehicleExitComponent* MainGunnerExit;
    class UVehicleTriggerComponent* MainGunnerTrigger;
    class UVehicleSeatComponent* MainGunner0;
    class UVehicleTriggerComponent* LeftGunnerTrigger;
    class UVehicleTriggerComponent* RightGunnerTrigger;
    class UBoxComponent* UseVolume;
    class UStaticMeshComponent* Cylinder7;
    class UStaticMeshComponent* Cylinder6;
    class UStaticMeshComponent* Cylinder5;
    class UStaticMeshComponent* Cylinder4;
    class UStaticMeshComponent* Cylinder3;
    class UStaticMeshComponent* Cylinder2;
    class UStaticMeshComponent* Cylinder1;
    class UStaticMeshComponent* Cylinder;

};

#endif
