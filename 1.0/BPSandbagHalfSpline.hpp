#ifndef UE4SS_SDK_BPSandbagHalfSpline_HPP
#define UE4SS_SDK_BPSandbagHalfSpline_HPP

class ABPSandbagHalfSpline_C : public AWall
{
    class USceneComponent* SandbagTarget;
    class USplineConnectorComponent* Sandbag;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

#endif
