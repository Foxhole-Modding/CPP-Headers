#ifndef UE4SS_SDK_BPGateT1_HPP
#define UE4SS_SDK_BPGateT1_HPP

class ABPGateT1_C : public AGate
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* DamageBoxRight;
    class UBoxComponent* DamageBoxLeft;
    class USkeletalMeshComponent* BuildMeshDummy;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;
    class UStaticMeshComponent* PillarRight;
    class UStaticMeshComponent* PillarLeft;
    class UBuildSocketComponent* LeftSocket;
    class UBuildSocketComponent* RightSocket;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* FlagMesh;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPGateT1(int32 EntryPoint);
};

#endif
