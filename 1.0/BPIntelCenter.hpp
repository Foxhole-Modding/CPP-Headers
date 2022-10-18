#ifndef UE4SS_SDK_BPIntelCenter_HPP
#define UE4SS_SDK_BPIntelCenter_HPP

class ABPIntelCenter_C : public AIntelCenter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBPFortUnderModSlot_C* UnderModSlot;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* RoofBaseMesh;
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;
    class UBoxComponent* LandscapeHole;
    class UBoatHullComponent* BoatHull;
    class UStaticMeshComponent* Flag2;
    class UStaticMeshComponent* Flag;
    class UStaticMeshComponent* RoofMesh;
    class UStaticMeshComponent* FloorMesh;
    class UBuildSocketComponent* FrontFortSocket;
    class UBuildSocketComponent* RightFortSocket;
    class UBuildSocketComponent* BackFortSocket;
    class UBuildSocketComponent* LeftFortSocket;
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPIntelCenter(int32 EntryPoint);
};

#endif
