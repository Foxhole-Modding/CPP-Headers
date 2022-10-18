#ifndef UE4SS_SDK_BPFacilitySupplyStation_HPP
#define UE4SS_SDK_BPFacilitySupplyStation_HPP

class ABPFacilitySupplyStation_C : public AFacilitySupplyStation
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* PowerLineConnector;
    class UDecalComponent* FoundationDecal;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* FVFLight;

};

#endif
