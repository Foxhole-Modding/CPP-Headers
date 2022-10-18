#ifndef UE4SS_SDK_BPRelicBase_HPP
#define UE4SS_SDK_BPRelicBase_HPP

class ABPRelicBase_C : public ARelicBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Flag4;
    class UStaticMeshComponent* Flag3;
    class UStaticMeshComponent* Flag2;
    class UStaticMeshComponent* Flag;
    class UCameraComponent* ViewTargetCamera;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPRelicBase(int32 EntryPoint);
};

#endif
