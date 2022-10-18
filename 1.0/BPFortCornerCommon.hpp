#ifndef UE4SS_SDK_BPFortCornerCommon_HPP
#define UE4SS_SDK_BPFortCornerCommon_HPP

class ABPFortCornerCommon_C : public ATemplate
{
    class UDecalComponent* DecalRight;
    class UBPWaterStencilComponent_C* WaterStencil;
    class UDecalComponent* DecalFront;
    class UDecalComponent* DecalBack;
    class UDecalComponent* DecalLeft;
    class UBuildSocketComponent* FoundationSocket;
    class UBuildSocketComponent* AngleFortSocket;
    class UBoxComponent* LandscapeHole;
    class UBuildSocketComponent* BackFortSocket;
    class UBuildSocketComponent* LeftFortSocket;
    class UBoatHullComponent* BoatHull;
    class USceneComponent* DefaultSceneRoot;

};

#endif
