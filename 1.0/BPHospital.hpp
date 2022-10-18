#ifndef UE4SS_SDK_BPHospital_HPP
#define UE4SS_SDK_BPHospital_HPP

class ABPHospital_C : public AHospital
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class USceneComponent* Curtains;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;
    class UStaticMeshComponent* Flag2;
    class UStaticMeshComponent* Flag;
    class UMultiplexedStaticMeshComponent* MultiplexedBase;
    class UStaticMeshComponent* Bed8;
    class UStaticMeshComponent* Bed7;
    class UStaticMeshComponent* Bed6;
    class UStaticMeshComponent* Bed5;
    class UStaticMeshComponent* Bed4;
    class UStaticMeshComponent* Bed3;
    class UStaticMeshComponent* Bed2;
    class UStaticMeshComponent* Bed1;
    class UVisibilityToggleAreaComponent* VisibilityToggleArea;
    class UStaticMeshComponent* HospitalRoof;
    class UStaticMeshComponent* Hospital;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPHospital(int32 EntryPoint);
};

#endif
