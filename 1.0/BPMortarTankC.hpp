#ifndef UE4SS_SDK_BPMortarTankC_HPP
#define UE4SS_SDK_BPMortarTankC_HPP

class ABPMortarTankC_C : public ABPMortarTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* CommanderSeat2;
    class USkeletalMeshComponent* Chassis;
    class UParticleSystemComponent* Exhaust;
    class UCameraComponent* Camera;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMortarTankC(int32 EntryPoint);
};

#endif
