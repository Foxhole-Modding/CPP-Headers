#ifndef UE4SS_SDK_ABP_CarriedCharacter_HPP
#define UE4SS_SDK_ABP_CarriedCharacter_HPP

class UABP_CarriedCharacter_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_2571EA9640B2ED3B033F2CAD98C069FD;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3925B11147309409F5932C84746D5D23;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_CarriedCharacter(int32 EntryPoint);
};

#endif
