#ifndef UE4SS_SDK_ABP_FacilityRefinery1MetalPress_HPP
#define UE4SS_SDK_ABP_FacilityRefinery1MetalPress_HPP

class UABP_FacilityRefinery1MetalPress_C : public UFacilityRefineryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_4B444BF344D616BB5DECF39CA72FD40A;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7DD41EE74F762819BF4B8EADEC7A7EB0;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_718EFED947D4F1C537FD96AC6A30DCF3;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityRefinery1MetalPress(int32 EntryPoint);
};

#endif
