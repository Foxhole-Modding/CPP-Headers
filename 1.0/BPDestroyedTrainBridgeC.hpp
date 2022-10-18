#ifndef UE4SS_SDK_BPDestroyedTrainBridgeC_HPP
#define UE4SS_SDK_BPDestroyedTrainBridgeC_HPP

class ABPDestroyedTrainBridgeC_C : public ADestroyedDrawbridge
{
    class UStaticMeshComponent* SideB2;
    class UStaticMeshComponent* SideA2;
    class UStaticMeshComponent* SideB1;
    class UStaticMeshComponent* SideA1;
    class UBoxComponent* SuspendedBuildSurface;
    class UBoxComponent* BelowBlockingB;
    class UBoxComponent* BelowBlockingA;
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UStaticMeshComponent* SideB;
    class UStaticMeshComponent* SideA;

};

#endif
