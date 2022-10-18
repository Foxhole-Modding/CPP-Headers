#ifndef UE4SS_SDK_BPDestroyedDrawbridgeA_HPP
#define UE4SS_SDK_BPDestroyedDrawbridgeA_HPP

class ABPDestroyedDrawbridgeA_C : public ADestroyedDrawbridge
{
    class UBoxComponent* SuspendedBuildSurface;
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UStaticMeshComponent* SideB;
    class UStaticMeshComponent* SideA;

};

#endif
