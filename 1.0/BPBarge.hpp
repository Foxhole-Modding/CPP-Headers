#ifndef UE4SS_SDK_BPBarge_HPP
#define UE4SS_SDK_BPBarge_HPP

class ABPBarge_C : public ABarge
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleExitComponent* DriverExit0;
    class UVehicleTriggerComponent* DriverTrigger;
    class UVehicleSeatComponent* DriverSeat0;
    class USpotLightComponent* SpotLight2;
    class UStaticMeshComponent* Light3;
    class UStaticMeshComponent* Light2;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* Light1;
    class USceneComponent* Ramp End (Editor Only);
    class USceneComponent* Ramp Start (Editor Only);
    class UAudioComponent* Idle;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBarge(int32 EntryPoint);
};

#endif
