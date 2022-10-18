#ifndef UE4SS_SDK_BPDestroyedDrawbridge_HPP
#define UE4SS_SDK_BPDestroyedDrawbridge_HPP

class ABPDestroyedDrawbridge_C : public ADestroyedBridge
{
    class UBoxComponent* SuspendedBuildSurface;
    class UBoxComponent* VehicleBlocking2;
    class UBoxComponent* VehicleBlocking;
    class UStaticMeshComponent* SideB;
    class UStaticMeshComponent* SideA;

};

#endif
