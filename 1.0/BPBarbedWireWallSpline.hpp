#ifndef UE4SS_SDK_BPBarbedWireWallSpline_HPP
#define UE4SS_SDK_BPBarbedWireWallSpline_HPP

class ABPBarbedWireWallSpline_C : public ABarbedWire
{
    class USceneComponent* BarbedWireTarget;
    class USplineConnectorComponent* BarbedWire;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

#endif
