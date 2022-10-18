#ifndef UE4SS_SDK_BPFacilityResourceTransfer3_HPP
#define UE4SS_SDK_BPFacilityResourceTransfer3_HPP

class ABPFacilityResourceTransfer3_C : public ALiquidTransferStation
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UDecalComponent* OutputDecal0;
    class UDecalComponent* InputDecal0;
    class UBPStructurePipelineOutput_C* PipeOutput0;
    class UDecalComponent* FoundationDecal;
    class UTemplateComponent* BPFuelLightTemplate;
    class UBPStructurePipelineInput_C* PipeInput0;
    class UStaticMeshComponent* MainMesh;

};

#endif
