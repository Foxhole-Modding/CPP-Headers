#ifndef UE4SS_SDK_BPFacilityRefineryOilReformer_HPP
#define UE4SS_SDK_BPFacilityRefineryOilReformer_HPP

class ABPFacilityRefineryOilReformer_C : public AModificationTemplate
{
    class UParticleSystemComponent* ProducingFX1;
    class UDecalComponent* Decal;
    class UDecalComponent* InputDecal1;
    class UStaticMeshComponent* InputMesh1;
    class UBPStructurePipelineInput_C* PipeInput1;
    class UStaticMeshComponent* ModMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
