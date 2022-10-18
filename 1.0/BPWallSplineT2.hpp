#ifndef UE4SS_SDK_BPWallSplineT2_HPP
#define UE4SS_SDK_BPWallSplineT2_HPP

class ABPWallSplineT2_C : public AWall
{
    class UStaticMeshComponent* FrontPillar;
    class UStaticMeshComponent* BackPIllar;
    class UTemplateComponent* WallSplineCommon;
    class USceneComponent* WallTarget;
    class USplineConnectorComponent* Wall;

};

#endif
