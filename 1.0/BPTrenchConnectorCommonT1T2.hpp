#ifndef UE4SS_SDK_BPTrenchConnectorCommonT1T2_HPP
#define UE4SS_SDK_BPTrenchConnectorCommonT1T2_HPP

class ABPTrenchConnectorCommonT1T2_C : public ATemplate
{
    class USceneComponent* DirtSplineRightTarget;
    class USceneComponent* DirtSplineLeftTarget;
    class UStaticMeshComponent* DirtFront;
    class UStaticMeshComponent* DirtBack;
    class UStaticMeshComponent* DirtBackRight;
    class UStaticMeshComponent* DirtFrontLeft;
    class UStaticMeshComponent* DirtBackLeft;
    class UStaticMeshComponent* DirtFrontRight;
    class USplineConnectorComponent* DirtSplineLeft;
    class USplineConnectorComponent* DirtSplineRight;
    class USceneComponent* DefaultSceneRoot;

};

#endif
