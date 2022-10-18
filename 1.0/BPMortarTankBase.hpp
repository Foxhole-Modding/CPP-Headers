#ifndef UE4SS_SDK_BPMortarTankBase_HPP
#define UE4SS_SDK_BPMortarTankBase_HPP

class ABPMortarTankBase_C : public ABattleTank
{
    class USpotLightComponent* SpotLight_L;
    class UStaticMeshComponent* Light_L;
    class UStaticMeshComponent* Light_R;
    class USpotLightComponent* SpotLight_R;
    class UVehicleExitComponent* CommanderExit;
    class UVehicleExitComponent* GunnerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* CommanderTrigger;
    class UVehicleTriggerComponent* GunnerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* DriverSeat0;

};

#endif
