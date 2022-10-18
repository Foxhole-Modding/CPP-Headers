#ifndef UE4SS_SDK_BPFortCommon_HPP
#define UE4SS_SDK_BPFortCommon_HPP

class ABPFortCommon_C : public ATemplate
{
    class UDecalComponent* DecalFront;
    class UDecalComponent* DecalRight;
    class UDecalComponent* DecalBack;
    class UDecalComponent* DecalLeft;
    class UBPLeftFortSocket_C* LeftFortSocket;
    class UBoatHullComponent* BoatHull;
    class UBoxComponent* LandscapeHole;
    class UBuildSocketComponent* FoundationSocket;
    class UBPFrontFortSocket_C* FrontFortSocket;
    class UBPRightFortSocket_C* RightFortSocket;
    class UBPBackFortSocket_C* BackFortSocket;
    class UBPWaterStencilComponent_C* WaterStencil;
    class USceneComponent* DefaultSceneRoot;

};

#endif
