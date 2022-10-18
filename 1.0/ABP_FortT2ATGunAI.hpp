#ifndef UE4SS_SDK_ABP_FortT2ATGunAI_HPP
#define UE4SS_SDK_ABP_FortT2ATGunAI_HPP

class UABP_FortT2ATGunAI_C : public UGunTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_CA3842194EAE2B7EBF9503A5E85A203C;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_285F5103407ABA4EB1ECA394CDAC88B5;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT2ATGunAI(int32 EntryPoint);
};

#endif
