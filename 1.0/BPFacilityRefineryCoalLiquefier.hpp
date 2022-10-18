#ifndef UE4SS_SDK_BPFacilityRefineryCoalLiquefier_HPP
#define UE4SS_SDK_BPFacilityRefineryCoalLiquefier_HPP

class ABPFacilityRefineryCoalLiquefier_C : public AModificationTemplate
{
    class UParticleSystemComponent* ProducingFX2;
    class UParticleSystemComponent* ProducingFX1;
    class UDecalComponent* OutputDecal0;
    class UStaticMeshComponent* OutputMesh0;
    class UBPStructurePipelineOutput_C* PipeOutput0;
    class UDecalComponent* InputDecal0;
    class UStaticMeshComponent* ModMesh;
    class UStaticMeshComponent* InputMesh0;
    class UBPStructurePipelineInput_C* PipeInput0;
    class USceneComponent* DefaultSceneRoot;

};

#endif
