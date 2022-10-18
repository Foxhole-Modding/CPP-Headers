#ifndef UE4SS_SDK_ABP_ScrapMine_HPP
#define UE4SS_SDK_ABP_ScrapMine_HPP

class UABP_ScrapMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_BBD5DB684FD6B4690E7981B0D668E3E5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C06E7E8F4875B7340777039E056B1422;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24EFE54D43FC8360DEF53A835A16D9D9;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_95EFE262413AA28C4705FF9317797BA4;
    bool IsActive;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_ScrapMine(int32 EntryPoint);
};

#endif
