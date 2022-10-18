#ifndef UE4SS_SDK_BPFacilityCatwalkBridge_HPP
#define UE4SS_SDK_BPFacilityCatwalkBridge_HPP

class ABPFacilityCatwalkBridge_C : public ABuildableStructure
{
    class USplineConnectorComponent* SplineConnector;
    class UStaticMeshComponent* BackLeftCorner;
    class UStaticMeshComponent* BackRightCorner;
    class UStaticMeshComponent* FrontRightCorner;
    class UStaticMeshComponent* FrontLeftCorner;
    class UStaticMeshComponent* FrontRailing;
    class UStaticMeshComponent* BackRailing;
    class UStaticMeshComponent* FrontSupport;
    class UStaticMeshComponent* BackSupport;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

#endif
