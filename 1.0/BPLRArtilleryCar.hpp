#ifndef UE4SS_SDK_BPLRArtilleryCar_HPP
#define UE4SS_SDK_BPLRArtilleryCar_HPP

class ABPLRArtilleryCar_C : public AArtilleryRailVehicle
{
    class UVehicleSeatComponent* GunnerSeat;
    class UBoxComponent* RearBogieCollision;
    class UBoxComponent* FrontBogieCollision;
    class UVehicleExitComponent* LeftExit;
    class UVehicleExitComponent* RightExit;
    class UVehicleTriggerComponent* RightTrigger;
    class UBoxComponent* UseVolume;

};

#endif
