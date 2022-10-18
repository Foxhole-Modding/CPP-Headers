#ifndef UE4SS_SDK_BPFacilityPipeOverhead_HPP
#define UE4SS_SDK_BPFacilityPipeOverhead_HPP

class ABPFacilityPipeOverhead_C : public APipeline
{
    class UStaticMeshComponent* BackMeshConnected;
    class UStaticMeshComponent* FrontMeshConnected;
    class UStaticMeshComponent* FrontMesh;
    class UStaticMeshComponent* BackMesh;
    class UArrowComponent* Arrow3;
    class UArrowComponent* Arrow2;
    class UArrowComponent* Arrow1;
    class UArrowComponent* Arrow;

};

#endif
