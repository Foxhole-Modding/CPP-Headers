#ifndef UE4SS_SDK_ABP_DrawBridgeA01_HPP
#define UE4SS_SDK_ABP_DrawBridgeA01_HPP

class UABP_DrawBridgeA01_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_F8241E2E407FCFE749EA788AEDC0B6D8;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C63B3A31468B0DBAF19CE8AC88C8BA7E;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2E1AEFBF4E86851359A92D8BAC10581E;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7F378A754F376583416CB3AFF057AE4F;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrawBridgeA01_AnimGraphNode_BlendSpacePlayer_2E1AEFBF4E86851359A92D8BAC10581E();
    void ExecuteUbergraph_ABP_DrawBridgeA01(int32 EntryPoint);
};

#endif
