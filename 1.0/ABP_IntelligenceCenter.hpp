#ifndef UE4SS_SDK_ABP_IntelligenceCenter_HPP
#define UE4SS_SDK_ABP_IntelligenceCenter_HPP

class UABP_IntelligenceCenter_C : public UIntelCenterAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_BECC296C49F0237A01299B937A0E4D1F;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7DAB7BB7479E431D2FD8B4B5FF770B49;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0E5AA4674D588AD12FF43F9C98EF25C5;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3FC6AD624BA22E337CD21391A51A1446;
    float Test;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_IntelligenceCenter(int32 EntryPoint);
};

#endif
