#ifndef UE4SS_SDK_BPFuelLightTemplate_HPP
#define UE4SS_SDK_BPFuelLightTemplate_HPP

class ABPFuelLightTemplate_C : public ATemplate
{
    class UStaticMeshComponent* FuelLightMesh3;
    class UStaticMeshComponent* FuelLightMesh2;
    class UStaticMeshComponent* FuelLightMesh1;
    class UStaticMeshComponent* FuelLightMesh0;
    class UFacilityFuelLightComponent* FacilityFuelLight;
    class UStaticMeshComponent* FacilityIndicatorFrame;
    class USceneComponent* DefaultSceneRoot;

};

#endif
