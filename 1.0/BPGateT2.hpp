#ifndef UE4SS_SDK_BPGateT2_HPP
#define UE4SS_SDK_BPGateT2_HPP

class ABPGateT2_C : public AGate
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
    void ExecuteUbergraph_BPGateT2(int32 EntryPoint);
};

#endif
