#ifndef UE4SS_SDK_BPTrainEngine_HPP
#define UE4SS_SDK_BPTrainEngine_HPP

class ABPTrainEngine_C : public AEngineRailVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleTriggerComponent* FiremanTrigger;
    class UVehicleExitComponent* FiremanExit;
    class UVehicleSeatComponent* FiremanSeat;
    class UParticleSystemComponent* Exhaust03;
    class UParticleSystemComponent* Exhaust02;
    class UParticleSystemComponent* SparksDrive04;
    class UParticleSystemComponent* SparksDrive03;
    class UParticleSystemComponent* SparksDrive02;
    class UParticleSystemComponent* SparksDrive01;
    class UParticleSystemComponent* BrakeSparksL;
    class UParticleSystemComponent* BrakeSparksR;
    class UParticleSystemComponent* Exhaust01;
    class UCameraComponent* Camera;
    class UVehicleSeatComponent* DriverSeat;
    class UVehicleExitComponent* DriverExit;
    class UVehicleTriggerComponent* DriverTrigger;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTrainEngine(int32 EntryPoint);
};

#endif
