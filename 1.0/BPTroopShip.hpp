#ifndef UE4SS_SDK_BPTroopShip_HPP
#define UE4SS_SDK_BPTroopShip_HPP

class ABPTroopShip_C : public ATroopShip
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* DriverSeat0;
    class UAudioComponent* Idle;
    class UBoxComponent* WorkVolume;
    class UStaticMeshComponent* Light_Midship;
    class USpotLightComponent* SpotLight_Forward;
    class USpotLightComponent* SpotLight_Aft;
    class USpotLightComponent* SpotLight_Midship;
    class UStaticMeshComponent* Light_Forward;
    class UStaticMeshComponent* Light_Aft;
    class USceneComponent* RampEnd (Editor Only);
    class USceneComponent* RampStart (Editor Only);
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTroopShip(int32 EntryPoint);
};

#endif
