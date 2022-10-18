#ifndef UE4SS_SDK_ABP_UniqueWWaterMillG1_HPP
#define UE4SS_SDK_ABP_UniqueWWaterMillG1_HPP

class UABP_UniqueWWaterMillG1_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_D360DA2745C58C681D95F8AC982A207A;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FEB4C1CC4837AFDC23C28181D69BDB60;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_UniqueWWaterMillG1(int32 EntryPoint);
};

#endif
