#ifndef UE4SS_SDK_ABP_ConcreteMixer_HPP
#define UE4SS_SDK_ABP_ConcreteMixer_HPP

class UABP_ConcreteMixer_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_49956EDF4CF68AC6841AAC80ED187CB9;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_109F8E544B6CBABE6D1041BB85C347E6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F434E7F34D4D783EC25BF19D337A5E10;
    bool IsActive;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ConcreteMixer(int32 EntryPoint);
};

#endif
