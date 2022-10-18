#ifndef UE4SS_SDK_ABP_FacilityRefinery1Recycler_HPP
#define UE4SS_SDK_ABP_FacilityRefinery1Recycler_HPP

class UABP_FacilityRefinery1Recycler_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_5ADA20DF41F65D6C303E28B2AB2AFCD0;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6A74C41E4D5C347F22B181BBC29A1DB1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DB8D957445B7A24EBE86E7BB14492596;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityRefinery1Recycler(int32 EntryPoint);
};

#endif
