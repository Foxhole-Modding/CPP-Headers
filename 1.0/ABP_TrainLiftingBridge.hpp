#ifndef UE4SS_SDK_ABP_TrainLiftingBridge_HPP
#define UE4SS_SDK_ABP_TrainLiftingBridge_HPP

class UABP_TrainLiftingBridge_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_DCBDE1294F35EF9EB60078A74CFC5909;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_49D542854EA777E4F91CBBA7BC93B31D;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainLiftingBridge(int32 EntryPoint);
};

#endif
