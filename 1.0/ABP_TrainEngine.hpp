#ifndef UE4SS_SDK_ABP_TrainEngine_HPP
#define UE4SS_SDK_ABP_TrainEngine_HPP

class UABP_TrainEngine_C : public URailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_60B7E3AF470F3EAEE1AD9298BEAA23D3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18501A304A855546AF131D9F64946F70;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_51E3A4014A3A665D12443F8C6A3166A7;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E728639640A658DF92E77F92E2181AAD;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F91C2BB942516193F9D6B5B69E0C881B;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainEngine(int32 EntryPoint);
};

#endif
