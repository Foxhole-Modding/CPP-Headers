#ifndef UE4SS_SDK_BPTrenchCommon_HPP
#define UE4SS_SDK_BPTrenchCommon_HPP

class ABPTrenchCommon_C : public ATemplate
{
    class UBuildSocketComponent* BackSocket;
    class UBPWaterStencilComponent_C* WaterStencil;
    class UBuildSocketComponent* RightSocket;
    class UBuildSocketComponent* FrontSocket;
    class UBuildSocketComponent* LeftSocket;
    class UBoxComponent* LandscapeOverlap;
    class UBoatHullComponent* BoatHull;
    class USceneComponent* DefaultSceneRoot;

};

#endif
