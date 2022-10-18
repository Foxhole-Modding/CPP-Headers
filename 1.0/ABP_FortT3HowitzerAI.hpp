#ifndef UE4SS_SDK_ABP_FortT3HowitzerAI_HPP
#define UE4SS_SDK_ABP_FortT3HowitzerAI_HPP

class UABP_FortT3HowitzerAI_C : public UFortStaticArtilleryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_B66829E1494B75404F5A1B8C07094139;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F256562842FE8F676D1859A6423FA5BD;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_201F97914C58A630C8A8CBA09AF8FBAD;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9EA3A1FA41D148CA5FB3CD8F1BFF6397;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT3HowitzerAI(int32 EntryPoint);
};

#endif
