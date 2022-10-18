#ifndef UE4SS_SDK_BPTrenchConnectorBuildSite_HPP
#define UE4SS_SDK_BPTrenchConnectorBuildSite_HPP

class ABPTrenchConnectorBuildSite_C : public AFortConnectorBuildSite
{
    class USceneComponent* ReferenceB;
    class USceneComponent* ReferenceD;
    class USceneComponent* ReferenceA;
    class USceneComponent* ReferenceC;
    class USceneComponent* SplineCollisionTarget;
    class USplineConnectorComponent* SplineCollision;
    class UDecalComponent* Decal1;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal3;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* RopeRight;
    class UStaticMeshComponent* RopeLeft;
    class UStaticMeshComponent* BackSide;
    class UStaticMeshComponent* FrontSide;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

#endif
