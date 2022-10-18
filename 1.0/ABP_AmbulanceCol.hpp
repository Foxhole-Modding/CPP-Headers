#ifndef UE4SS_SDK_ABP_AmbulanceCol_HPP
#define UE4SS_SDK_ABP_AmbulanceCol_HPP

class UABP_AmbulanceCol_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_418A6B4D4E86C4D155EF0687DE0D1E15;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54142B0644C78CA8F9602FBD7A9FBF25;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CE551205485DD1BB936FF0A80F3163C5;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4BCA42F94640BB995FE95AA656EC55B9;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5DF0D6EE49F2514D5C29B3A394DC8E28;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_AmbulanceCol(int32 EntryPoint);
};

#endif
