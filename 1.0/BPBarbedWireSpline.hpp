#ifndef UE4SS_SDK_BPBarbedWireSpline_HPP
#define UE4SS_SDK_BPBarbedWireSpline_HPP

class ABPBarbedWireSpline_C : public ABarbedWire
{
    class UStaticMeshComponent* PillarFront;
    class UStaticMeshComponent* PillarBack;
    class UBuildSocketComponent* FrontSocket;
    class USceneComponent* WireTarget;
    class USplineConnectorComponent* Wire;
    class UBuildSocketComponent* BackSocket;

};

#endif
