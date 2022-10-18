#ifndef UE4SS_SDK_BPRelicAPC_HPP
#define UE4SS_SDK_BPRelicAPC_HPP

class ABPRelicAPC_C : public ARelicAPC
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat7;
    class UVehicleSeatComponent* PassengerSeat6;
    class UVehicleSeatComponent* PassengerSeat5;
    class UVehicleSeatComponent* PassengerSeat4;
    class UVehicleSeatComponent* GunnerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;
    class UVehicleSeatComponent* CommanderSeat3;
    class UVehicleSeatComponent* DriverSeat0;
    class UVehicleExitComponent* BackExit;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* BackTrigger;
    class UVehicleTriggerComponent* RightTrigger;
    class UVehicleTriggerComponent* LeftTrigger;
    class UVehicleTriggerComponent* DriverTrigger;
    class UParticleSystemComponent* Exhaust;
    class UAudioComponent* DriveIdle;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* TestMesh;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicAPC(int32 EntryPoint);
};

#endif
