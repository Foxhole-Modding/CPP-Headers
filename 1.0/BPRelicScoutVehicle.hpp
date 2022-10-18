#ifndef UE4SS_SDK_BPRelicScoutVehicle_HPP
#define UE4SS_SDK_BPRelicScoutVehicle_HPP

class ABPRelicScoutVehicle_C : public AScoutVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat1;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UParticleSystemComponent* Exhaust;
    class USpotLightComponent* SpotLight_R;
    class UStaticMeshComponent* Headlight_R;
    class UStaticMeshComponent* Headlight_L;
    class USpotLightComponent* SpotLight_L;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicScoutVehicle(int32 EntryPoint);
};

#endif
