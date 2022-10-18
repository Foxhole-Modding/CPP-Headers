#ifndef UE4SS_SDK_ABP_FlatbedTruck_HPP
#define UE4SS_SDK_ABP_FlatbedTruck_HPP

class UABP_FlatbedTruck_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_FC16771C4E056E530E138CAE0E9136BF;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_240598E141B6DC13E56ED7AFFAA4C546;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3DD7A19E44F78D3B2B6CB9ACD3CC685A;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_EC762770428A8B081F50FF9BFDED6290;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E455904D429429E54158C79D30828127;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2ABB177D4488252186D7FDA366319E4C;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FlatbedTruck(int32 EntryPoint);
};

#endif
