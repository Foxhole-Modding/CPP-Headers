#ifndef UE4SS_SDK_ABP_Tripod_HPP
#define UE4SS_SDK_ABP_Tripod_HPP

class UABP_Tripod_C : public UDeployedTripodAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_6E4899294BFCCC1F471D5092EECBD3A6;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_97CB5971452A29DCAC7613AC578EA9A8;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9CD1D202424571349854D3931D1CEC6C;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D272E00E40BF45C160F8C5ABAAC781DF;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_104BFD5E4EBCB7EE0D2E189B90EAD6CE;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_D5102401450D404C97EDB3AD65D4C338;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8A3CC69D46616C47C948D6AF9B43191B;
    FAnimNode_StateResult AnimGraphNode_StateResult_E6FBF3B04E01A5E0DDFEC6AC1E59541E;
    FAnimNode_StateResult AnimGraphNode_StateResult_EE653F984F39BD7EED2D3FB0FE3E0470;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7A5B62524FED6E6E8CD35C953148A2A5;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Tripod(int32 EntryPoint);
};

#endif
