#ifndef UE4SS_SDK_BPBicycle_HPP
#define UE4SS_SDK_BPBicycle_HPP

class ABPBicycle_C : public ABicycle
{
    class UParticleSystemComponent* BikeDirt;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* DriverSeat;
    class UCameraComponent* Camera;

};

#endif
