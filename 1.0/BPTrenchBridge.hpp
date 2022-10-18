#ifndef UE4SS_SDK_BPTrenchBridge_HPP
#define UE4SS_SDK_BPTrenchBridge_HPP

class ABPTrenchBridge_C : public AModificationTemplate
{
    class USceneComponent* SplineTargetBackRight;
    class USceneComponent* SplineTargetBackLeft;
    class USceneComponent* SplineTargetFrontRight;
    class USceneComponent* SplineTargetFrontLeft;
    class UStaticMeshComponent* BridgeBase;
    class UStaticMeshComponent* Bridge;
    class USceneComponent* DefaultSceneRoot;

};

#endif
