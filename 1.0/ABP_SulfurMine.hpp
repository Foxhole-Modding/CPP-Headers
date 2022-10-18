#ifndef UE4SS_SDK_ABP_SulfurMine_HPP
#define UE4SS_SDK_ABP_SulfurMine_HPP

class UABP_SulfurMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54646662403876F1A84DD4B8F996107B;
    FAnimNode_Root AnimGraphNode_Root_9619F47547542C7496805AB03912A187;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_359277204339FF1F1F47769191C5756B;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AEEAE57146EEA701E0FDDF90DA2EF3CE;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B64BC70647A5FE2127B05A93DB0D8149;
    bool IsActive;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SulfurMine(int32 EntryPoint);
};

#endif
