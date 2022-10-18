#ifndef UE4SS_SDK_ABP_FacilityMineResource1_HPP
#define UE4SS_SDK_ABP_FacilityMineResource1_HPP

class UABP_FacilityMineResource1_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_21D388224AF9086684614A9C5197C4A4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3D17A242482D043E7ED788A20E35AB10;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FacilityMineResource1_AnimGraphNode_SequencePlayer_3D17A242482D043E7ED788A20E35AB10();
    void ExecuteUbergraph_ABP_FacilityMineResource1(int32 EntryPoint);
};

#endif
