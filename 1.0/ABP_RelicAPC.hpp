#ifndef UE4SS_SDK_ABP_RelicAPC_HPP
#define UE4SS_SDK_ABP_RelicAPC_HPP

class UABP_RelicAPC_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_ABCF6D2144B4D6E32F4FE8A030B60986;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28BD46004A1BCCEA7945AF81F75B14F4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EA17864D400EF7D00E89AD9E4896EE81;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_880B91BD4C3A042D0CD988BDE1EBB39E;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_398489CE4F27385D47927F8FE1EA9841;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_FC2BD80F41349CB3A35D27A2940876B6;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21F5A0C2499A33DE8B91A1BD551BFCA4;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1193ED2E49590628E2F5F88C766951F7;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_RelicAPC(int32 EntryPoint);
};

#endif
