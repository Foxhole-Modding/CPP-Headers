#ifndef UE4SS_SDK_BPTrenchConnectorCommon_HPP
#define UE4SS_SDK_BPTrenchConnectorCommon_HPP

class ABPTrenchConnectorCommon_C : public ATemplate
{
    class UBPWaterStencilComponent_C* WaterStencil;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;
    class USceneComponent* ReferenceD;
    class USceneComponent* ReferenceC;
    class USceneComponent* ReferenceB;
    class USceneComponent* ReferenceA;
    class UBoatHullComponent* BoatHull;
    class UBoxComponent* LandscapeOverlap;
    class USceneComponent* DefaultSceneRoot;

};

#endif
