#ifndef UE4SS_SDK_BPFieldMultiW_HPP
#define UE4SS_SDK_BPFieldMultiW_HPP

class ABPFieldMultiW_C : public AMultiLauncherVehicle
{
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UCameraComponent* Camera;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;

};

#endif
