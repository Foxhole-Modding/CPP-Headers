#ifndef UE4SS_SDK_ABP_TrainBridgeLever_HPP
#define UE4SS_SDK_ABP_TrainBridgeLever_HPP

class UABP_TrainBridgeLever_C : public UDrawbridgeAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_F026448745CA5DAD59109B82A3CBD888;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_C6A302DD4B6AD30BAF9A16ADD1B2CBE7;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TrainBridgeLever_AnimGraphNode_BlendSpacePlayer_C6A302DD4B6AD30BAF9A16ADD1B2CBE7();
    void ExecuteUbergraph_ABP_TrainBridgeLever(int32 EntryPoint);
};

#endif
