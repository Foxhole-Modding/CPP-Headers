#ifndef UE4SS_SDK_BPDestroyedDrawbridgeC_HPP
#define UE4SS_SDK_BPDestroyedDrawbridgeC_HPP

class ABPDestroyedDrawbridgeC_C : public ADestroyedDrawbridge
{
    class UBoxComponent* SuspendedBuildSurface;
    class UBoxComponent* BelowBlockingB;
    class UBoxComponent* BelowBlockingA;
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UStaticMeshComponent* SideB;
    class UStaticMeshComponent* SideA;

};

#endif
