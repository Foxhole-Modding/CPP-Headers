#ifndef UE4SS_SDK_ABP_Barge_03_HPP
#define UE4SS_SDK_ABP_Barge_03_HPP

class UABP_Barge_03_C : public UBargeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_235AFBB046ED6F11B0ADC1B70D2A0A8D;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_A7AE80E34950378FF21B058BA7D03E54;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_62AC3F424447DC89DD9833ABDD372E1E;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9335B87442F82E1F26DD4E9F89D59920;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D3EFCE74412CD6CE61530A9E9DA922BA;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2D9BF9A24A2C30AA4A68AF9B69E0AFA0;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Barge_03(int32 EntryPoint);
};

#endif
