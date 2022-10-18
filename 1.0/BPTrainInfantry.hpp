#ifndef UE4SS_SDK_BPTrainInfantry_HPP
#define UE4SS_SDK_BPTrainInfantry_HPP

class ABPTrainInfantry_C : public AInfantryRailVehicle
{
    class UVehicleSeatComponent* PassengerSeat5;
    class UVehicleSeatComponent* PassengerSeat4;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleExitComponent* LeftExit;
    class UVehicleExitComponent* RightExit;
    class UVehicleTriggerComponent* LeftTrigger;
    class UVehicleTriggerComponent* RightTrigger;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* RightGunnerSeat;
    class UBoxComponent* UseVolume;

};

#endif
