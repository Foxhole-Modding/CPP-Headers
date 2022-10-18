#ifndef UE4SS_SDK_BPTankStop_HPP
#define UE4SS_SDK_BPTankStop_HPP

class ABPTankStop_C : public ABarbedWire
{
    class UBuildSocketComponent* LandscapeCheckSocket2;
    class UBuildSocketComponent* LandscapeCheckSocket1;
    class UBuildSocketComponent* LandscapeCheckSocket;
    class UBoxComponent* CollisionBox;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* TankStopMesh;

};

#endif
