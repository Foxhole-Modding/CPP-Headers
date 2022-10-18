#ifndef UE4SS_SDK_BPMediumTank2TwinC_HPP
#define UE4SS_SDK_BPMediumTank2TwinC_HPP

class ABPMediumTank2TwinC_C : public ABPMediumTank2BaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLightTurret;
    class UStaticMeshComponent* LightBodyTurret;
    class UPayloadStaticMeshComponent* PayloadStaticMesh3;
    class UPayloadStaticMeshComponent* PayloadStaticMesh2;
    class UPayloadStaticMeshComponent* PayloadStaticMesh1;
    class UPayloadStaticMeshComponent* PayloadStaticMesh0;
    class USpotLightComponent* SpotLightBodyLeft;
    class UStaticMeshComponent* LightBodyLeft;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2TwinC(int32 EntryPoint);
};

#endif
