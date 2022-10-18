#ifndef UE4SS_SDK_BPLargeCrane_HPP
#define UE4SS_SDK_BPLargeCrane_HPP

class ABPLargeCrane_C : public ARailVehicleCrane
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Exhaust;
    class UBoxComponent* RightLegWheelCollision;
    class UBoxComponent* LeftLegWheelCollision;
    class UBoxComponent* LeftLegCollision;
    class UBoxComponent* RightLegCollision;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleTriggerComponent* DriverTrigger;
    class UCameraComponent* Camera;
    class UVehicleSeatComponent* DriverSeat0;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLargeCrane(int32 EntryPoint);
};

#endif
