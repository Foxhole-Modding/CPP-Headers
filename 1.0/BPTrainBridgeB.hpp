#ifndef UE4SS_SDK_BPTrainBridgeB_HPP
#define UE4SS_SDK_BPTrainBridgeB_HPP

class ABPTrainBridgeB_C : public ABridge
{
    class UStaticMeshComponent* TrimMesh2;
    class UStaticMeshComponent* TrimMesh1;
    class UStaticMeshComponent* BridgeSectionSideB;
    class UStaticMeshComponent* BridgeSectionSideA;
    class UStaticMeshComponent* BridgeEndSideB;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* BridgeEndSideA;

};

#endif
