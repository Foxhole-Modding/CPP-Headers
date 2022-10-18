#ifndef UE4SS_SDK_BPTrainBridgeC_HPP
#define UE4SS_SDK_BPTrainBridgeC_HPP

class ABPTrainBridgeC_C : public ADrawbridge
{
    class UStaticMeshComponent* SideBColumn;
    class UStaticMeshComponent* SideAColumn;
    class UStaticMeshComponent* TrimMesh2;
    class UStaticMeshComponent* TrimMesh1;
    class UBoxComponent* BelowBlockingA;
    class UBoxComponent* BelowBlockingB;
    class UStaticMeshComponent* TrainBridgeSectionSideA;
    class UStaticMeshComponent* TrainBridgeSectionSideB;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;

};

#endif
