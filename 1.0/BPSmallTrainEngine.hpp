#ifndef UE4SS_SDK_BPSmallTrainEngine_HPP
#define UE4SS_SDK_BPSmallTrainEngine_HPP

class ABPSmallTrainEngine_C : public AEngineRailVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* SparksDrive02;
    class UParticleSystemComponent* SparksDrive01;
    class UParticleSystemComponent* BrakeSparksR;
    class UParticleSystemComponent* BrakeSparksL;
    class UParticleSystemComponent* Exhaust02;
    class UParticleSystemComponent* Exhaust01;
    class UCameraComponent* Camera;
    class UVehicleSeatComponent* DriverSeat;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* DriverTrigger;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSmallTrainEngine(int32 EntryPoint);
};

#endif
