#ifndef UE4SS_SDK_ABP_Motorboat_HPP
#define UE4SS_SDK_ABP_Motorboat_HPP

class UABP_Motorboat_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_A5C01A1C4A5C8396D3F7418237E22E60;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B5973086402C8FEF4A44B0AAA8EF2064;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_0BA2E74240488500F567138A9A8842BD;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Motorboat(int32 EntryPoint);
};

#endif
