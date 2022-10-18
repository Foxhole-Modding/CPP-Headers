#ifndef UE4SS_SDK_ABP_SmallGaugeEngine_HPP
#define UE4SS_SDK_ABP_SmallGaugeEngine_HPP

class UABP_SmallGaugeEngine_C : public UInfantryRailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_3F9BC9ED46926B8E92C2D486D11C4F57;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_EE12B8F14D1D4169641FC9853E990E4A;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_BD9017B14C5ABBFAC65B8EB5090CE13B;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32ECA82F45317A8CD596D29CD15669CB;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SmallGaugeEngine(int32 EntryPoint);
};

#endif
