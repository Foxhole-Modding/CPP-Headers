#ifndef UE4SS_SDK_BPWallSplineT1_HPP
#define UE4SS_SDK_BPWallSplineT1_HPP

class ABPWallSplineT1_C : public AWall
{
    class UStaticMeshComponent* FrontPillar;
    class UStaticMeshComponent* BackPIllar;
    class UTemplateComponent* WallSplineCommon;
    class USceneComponent* WallTarget;
    class USplineConnectorComponent* Wall;

};

#endif
