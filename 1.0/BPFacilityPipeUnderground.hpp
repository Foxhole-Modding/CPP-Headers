#ifndef UE4SS_SDK_BPFacilityPipeUnderground_HPP
#define UE4SS_SDK_BPFacilityPipeUnderground_HPP

class ABPFacilityPipeUnderground_C : public APipeline
{
    class UBuildSocketComponent* FrontSurfaceCheckSocket;
    class UBuildSocketComponent* BackSurfaceCheckSocket;
    class UStaticMeshComponent* FrontMesh;
    class UStaticMeshComponent* BackMesh;

};

#endif
