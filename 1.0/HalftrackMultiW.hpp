#ifndef UE4SS_SDK_HalftrackMultiW_HPP
#define UE4SS_SDK_HalftrackMultiW_HPP

class AHalftrackMultiW_C : public AMultiLauncherCar
{
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh2;
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh1;
    class USkeletalMeshComponent* Chassis;
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh0;
    class UCameraComponent* Camera;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleSeatComponent* PassengerSeat1;

};

#endif
