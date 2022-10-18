#ifndef UE4SS_SDK_BPSandbagFullSpline_HPP
#define UE4SS_SDK_BPSandbagFullSpline_HPP

class ABPSandbagFullSpline_C : public AWall
{
    class USceneComponent* SandbagTarget;
    class USplineConnectorComponent* Sandbag;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

#endif
