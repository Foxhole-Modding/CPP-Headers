#ifndef UE4SS_SDK_BPDeployedTripod_HPP
#define UE4SS_SDK_BPDeployedTripod_HPP

class ABPDeployedTripod_C : public ADeployedTripod
{
    class UBuildSocketComponent* BuildSocket;
    class USkeletalMeshComponent* SkeletalMesh;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;

};

#endif
