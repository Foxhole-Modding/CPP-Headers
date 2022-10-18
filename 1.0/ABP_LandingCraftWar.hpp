#ifndef UE4SS_SDK_ABP_LandingCraftWar_HPP
#define UE4SS_SDK_ABP_LandingCraftWar_HPP

class UABP_LandingCraftWar_C : public ULandingCraftAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_BB67CBDE4345439747E88FAA22FA18DE;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EB365F47439CBD33F2BDCEB36CA68B6B;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_FAFA990A442D9D886554C8976BD14AF1;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_69FFCF8648CC55309D72C891878F0059;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2C153BC14E332834479876ACDCD23D5A;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6EEF8D0947DF6DA73469E2BBC78CA400;
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8C41B62A46C16FC3D27488B82E604A5C;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LandingCraftWar(int32 EntryPoint);
};

#endif
