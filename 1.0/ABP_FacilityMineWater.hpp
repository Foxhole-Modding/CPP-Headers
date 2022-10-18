#ifndef UE4SS_SDK_ABP_FacilityMineWater_HPP
#define UE4SS_SDK_ABP_FacilityMineWater_HPP

class UABP_FacilityMineWater_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_D9BA90E0475C5836FE3EBB91F40C5586;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12412FE24E51D9EE81B4F3B8FCDE5A4B;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1826C5164A1CF3FEAB7A5481B52B98C4;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityMineWater(int32 EntryPoint);
};

#endif
