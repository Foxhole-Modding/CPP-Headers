#ifndef UE4SS_SDK_BPScoutVehicleUtilityW_HPP
#define UE4SS_SDK_BPScoutVehicleUtilityW_HPP

class ABPScoutVehicleUtilityW_C : public AAmphibiousVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Exhaust;
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;
    class UCameraComponent* Camera;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleExitComponent* PassengerExit3;
    class UVehicleTriggerComponent* PassengerTrigger3;
    class UVehicleTriggerComponent* PassengerTrigger2;
    class UVehicleExitComponent* PassengerExit2;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* PassengerTrigger1;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleExitComponent* PassengerExit1;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Light_R;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutVehicleUtilityW(int32 EntryPoint);
};

#endif
