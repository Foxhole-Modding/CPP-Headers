#ifndef UE4SS_SDK_BPDestroyedTrainBridgeA_HPP
#define UE4SS_SDK_BPDestroyedTrainBridgeA_HPP

class ABPDestroyedTrainBridgeA_C : public ADestroyedDrawbridge
{
    class UStaticMeshComponent* SideB1;
    class UStaticMeshComponent* SideA1;
    class UBoxComponent* SuspendedBuildSurface;
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UStaticMeshComponent* SideB;
    class UStaticMeshComponent* SideA;

};

#endif
