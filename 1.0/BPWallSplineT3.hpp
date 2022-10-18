#ifndef UE4SS_SDK_BPWallSplineT3_HPP
#define UE4SS_SDK_BPWallSplineT3_HPP

class ABPWallSplineT3_C : public AConcreteWall
{
    class UStaticMeshComponent* FrontPillar;
    class UStaticMeshComponent* BackPIllar;
    class UTemplateComponent* WallSplineCommon;
    class USceneComponent* WallTarget;
    class USplineConnectorComponent* Wall;

};

#endif
