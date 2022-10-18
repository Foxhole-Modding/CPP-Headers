#ifndef UE4SS_SDK_ABP_DrawBridge_HPP
#define UE4SS_SDK_ABP_DrawBridge_HPP

class UABP_DrawBridge_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_4E974A914E9B85EB32BF51A13088A6FA;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BC96291C47D69D6DD37FEC8C79ABA7AB;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5ACC5BF4494822D6E8BE489D520005CA;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9F50B76E4E4D6592956AE688C2374612;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrawBridge_AnimGraphNode_BlendSpacePlayer_9F50B76E4E4D6592956AE688C2374612();
    void ExecuteUbergraph_ABP_DrawBridge(int32 EntryPoint);
};

#endif
