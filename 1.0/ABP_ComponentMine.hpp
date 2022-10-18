#ifndef UE4SS_SDK_ABP_ComponentMine_HPP
#define UE4SS_SDK_ABP_ComponentMine_HPP

class UABP_ComponentMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_A12E61744451328260B5659D08700247;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42C492DE423C52AA79574B98D5876339;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E5F6FAB5454F06A5CC5ED9B25201A2CA;
    bool IsActive;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_ComponentMine(int32 EntryPoint);
};

#endif
