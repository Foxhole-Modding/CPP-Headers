#ifndef UE4SS_SDK_ABP_FortT3MGunAI_HPP
#define UE4SS_SDK_ABP_FortT3MGunAI_HPP

class UABP_FortT3MGunAI_C : public UFoxholeTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_21FD1FBB4B2434C7849592BFA5CF4CE1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BF19B7B44B99A6BA97BD34AAB1A50D88;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT3MGunAI(int32 EntryPoint);
};

#endif
