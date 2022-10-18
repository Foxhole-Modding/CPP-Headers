#ifndef UE4SS_SDK_BPLandingDock_HPP
#define UE4SS_SDK_BPLandingDock_HPP

class ABPLandingDock_C : public AVehicleFactory
{
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UDockComponent* DockingVolume;
    class UStaticMeshComponent* Factory;

};

#endif
