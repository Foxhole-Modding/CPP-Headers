#ifndef UE4SS_SDK_ABP_DrawBridgeB01_HPP
#define UE4SS_SDK_ABP_DrawBridgeB01_HPP

class UABP_DrawBridgeB01_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_A8645E6D4AAF130A929E2CB47EA3A91D;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4AC29A6B434464044BF1F5BC44F903BA;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_01F22C2E49D2FB60751133BC27D3EBDE;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4D5B44A943180BB5895D059219EABDFD;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrawBridgeB01_AnimGraphNode_BlendSpacePlayer_4AC29A6B434464044BF1F5BC44F903BA();
    void ExecuteUbergraph_ABP_DrawBridgeB01(int32 EntryPoint);
};

#endif
