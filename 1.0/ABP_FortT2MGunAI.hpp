#ifndef UE4SS_SDK_ABP_FortT2MGunAI_HPP
#define UE4SS_SDK_ABP_FortT2MGunAI_HPP

class UABP_FortT2MGunAI_C : public UFoxholeTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_39667FE5422D3CE11603418CE822D398;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_81DE1183417EAD9B75CE2CBFC0D7870C;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT2MGunAI(int32 EntryPoint);
};

#endif
