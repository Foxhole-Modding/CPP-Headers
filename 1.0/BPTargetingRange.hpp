#ifndef UE4SS_SDK_BPTargetingRange_HPP
#define UE4SS_SDK_BPTargetingRange_HPP

class ABPTargetingRange_C : public ATargetingRange
{
    class UCapsuleComponent* Capsule2;
    class UCapsuleComponent* Capsule1;
    class UCapsuleComponent* Capsule;
    class UBoxComponent* Box3;
    class UBoxComponent* Box2;
    class UBoxComponent* Box1;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

};

#endif
