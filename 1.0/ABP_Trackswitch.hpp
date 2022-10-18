#ifndef UE4SS_SDK_ABP_Trackswitch_HPP
#define UE4SS_SDK_ABP_Trackswitch_HPP

class UABP_Trackswitch_C : public UTrackSwitchAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_209DE730407A75BC3810F6A156D2F56C;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B0DDA1E543E1DF8D531B8893CE74D170;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Trackswitch(int32 EntryPoint);
};

#endif
