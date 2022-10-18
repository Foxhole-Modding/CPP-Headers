#ifndef UE4SS_SDK_BPFacilityResourceTransfer2_HPP
#define UE4SS_SDK_BPFacilityResourceTransfer2_HPP

class ABPFacilityResourceTransfer2_C : public AResourceTransferStation
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UDecalComponent* FoundationDecal;
    class UInstancedStaticMeshComponent* InstancedStaticMesh3;
    class UStaticMeshComponent* MaterialTransferStation;
    class UInstancedStaticMeshComponent* InstancedStaticMesh2;
    class UInstancedStaticMeshComponent* InstancedStaticMesh1;
    class UInstancedStaticMeshComponent* InstancedStaticMesh;
    class UItemGroupRenderComponent* ItemGroupRender;

};

#endif
