#ifndef UE4SS_SDK_BPMediumTank2IndirectW_HPP
#define UE4SS_SDK_BPMediumTank2IndirectW_HPP

class ABPMediumTank2IndirectW_C : public ABPMediumTank2BaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPayloadStaticMeshComponent* PayloadStaticMesh0;
    class UPayloadStaticMeshComponent* PayloadStaticMesh7;
    class UPayloadStaticMeshComponent* PayloadStaticMesh6;
    class UPayloadStaticMeshComponent* PayloadStaticMesh5;
    class UPayloadStaticMeshComponent* PayloadStaticMesh4;
    class UPayloadStaticMeshComponent* PayloadStaticMesh3;
    class UPayloadStaticMeshComponent* PayloadStaticMesh2;
    class UPayloadStaticMeshComponent* PayloadStaticMesh1;
    class UParticleSystemComponent* Exhaust2;
    class USpotLightComponent* SpotLightTurret;
    class UStaticMeshComponent* LightTurret;
    class UVehicleExitComponent* Gunner2Exit;
    class UVehicleTriggerComponent* Gunner2Trigger;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2IndirectW(int32 EntryPoint);
};

#endif
