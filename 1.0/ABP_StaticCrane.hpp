#ifndef UE4SS_SDK_ABP_StaticCrane_HPP
#define UE4SS_SDK_ABP_StaticCrane_HPP

class UABP_StaticCrane_C : public UCraneComponentAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_4FEE286F468A9B2956175D8EBF4AD1DF;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_8F5EFB6D4DF9AF3C58F9D0A0C483911B;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EE86026A4C7CC55C5ACC30B7AFFBA765;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4E0BEC474351C353D7169CB099B544B1;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_41AC4689434A62577CE9B5B2F5D0E8EB;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_F1C685FF4971380ECF2FA3A7B1EE90BC;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_StaticCrane(int32 EntryPoint);
};

#endif
