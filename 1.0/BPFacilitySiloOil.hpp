#ifndef UE4SS_SDK_BPFacilitySiloOil_HPP
#define UE4SS_SDK_BPFacilitySiloOil_HPP

class ABPFacilitySiloOil_C : public AFuelSilo
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UTemplateComponent* BPFuelLightTemplate;
    class UDecalComponent* OutputDecal0;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* StaticMesh;

};

#endif
