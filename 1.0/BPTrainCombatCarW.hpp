#ifndef UE4SS_SDK_BPTrainCombatCarW_HPP
#define UE4SS_SDK_BPTrainCombatCarW_HPP

class ABPTrainCombatCarW_C : public AInfantryRailVehicle
{
    class UVehicleExitComponent* PassengerSeat1Exit;
    class UVehicleExitComponent* PassengerSeat2Exit;
    class UVehicleTriggerComponent* PassengerSeat1Trigger;
    class UVehicleTriggerComponent* PassengerSeat2Trigger;
    class UVehicleSeatComponent* PassengerSeat5;
    class UVehicleSeatComponent* PassengerSeat4;
    class UVehicleTriggerComponent* CommanderSeat2Trigger;
    class UVehicleTriggerComponent* CommanderSeat1Trigger;
    class UVehicleExitComponent* CommanderSeat2Exit;
    class UVehicleExitComponent* CommanderSeat1Exit;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleSeatComponent* RearGunner1;
    class UVehicleSeatComponent* MainGunner0;
    class UCameraComponent* Camera;
    class UVehicleExitComponent* RearGunnerExit;
    class UVehicleExitComponent* MainGunnerExit;
    class UVehicleTriggerComponent* RearGunnerTrigger;
    class UVehicleTriggerComponent* MainGunnerTrigger;
    class UBoxComponent* UseVolume;

};

#endif
