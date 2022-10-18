#ifndef UE4SS_SDK_ABP_OIlWell_HPP
#define UE4SS_SDK_ABP_OIlWell_HPP

class UABP_OIlWell_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_D2AEAFD741C70940A9DE2A8840D35A42;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1E14B3484208EE358512058422C836AA;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A6A583284871B4792BA92EA999003EFF;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_FA394A9E47F06A63CC37359BA7CEAEF9;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OIlWell_AnimGraphNode_BlendSpacePlayer_FA394A9E47F06A63CC37359BA7CEAEF9();
    void ExecuteUbergraph_ABP_OIlWell(int32 EntryPoint);
};

#endif
