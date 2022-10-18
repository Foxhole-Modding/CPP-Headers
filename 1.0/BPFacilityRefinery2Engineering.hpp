#ifndef UE4SS_SDK_BPFacilityRefinery2Engineering_HPP
#define UE4SS_SDK_BPFacilityRefinery2Engineering_HPP

class ABPFacilityRefinery2Engineering_C : public AModificationTemplate
{
    class UStaticMeshComponent* PipeInputMesh1;
    class UDecalComponent* InputDecal1;
    class UBPStructurePipelineInput_C* PipeInput1;
    class UDecalComponent* FoundationDecal;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* PipeInputMesh0;
    class UBPStructurePipelineInput_C* PipeInput0;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
