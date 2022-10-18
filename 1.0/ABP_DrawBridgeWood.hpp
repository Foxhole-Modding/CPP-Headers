#ifndef UE4SS_SDK_ABP_DrawBridgeWood_HPP
#define UE4SS_SDK_ABP_DrawBridgeWood_HPP

class UABP_DrawBridgeWood_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_AC4AD60142B8DCDD15DD3CBAE82A9F64;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B58AE0444DCADFDD476868BACB955E80;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D8D69D714B02CB04497C058C65862E3E;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_210183A8425B23661C67A6A0CF8682CF;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrawBridgeWood_AnimGraphNode_BlendSpacePlayer_210183A8425B23661C67A6A0CF8682CF();
    void ExecuteUbergraph_ABP_DrawBridgeWood(int32 EntryPoint);
};

#endif
