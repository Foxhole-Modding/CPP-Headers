#ifndef UE4SS_SDK_ABP_AmbulanceWar_HPP
#define UE4SS_SDK_ABP_AmbulanceWar_HPP

class UABP_AmbulanceWar_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_82B8116D4BA1139A448C2D93C43397F2;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_BB6D15154FFEBA0A1DC80B8D4C03FFB5;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55B460AD42D8FF1A542A92ACEE8D4E14;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32F025C54BE51EE19D4634BC71701CBA;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_DECABF24459921C41EB610949DD12FC5;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_AmbulanceWar(int32 EntryPoint);
};

#endif
