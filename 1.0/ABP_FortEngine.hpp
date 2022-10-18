#ifndef UE4SS_SDK_ABP_FortEngine_HPP
#define UE4SS_SDK_ABP_FortEngine_HPP

class UABP_FortEngine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_BC5C506D4116076404CF99AF04CBB138;
    FAnimNode_Slot AnimGraphNode_Slot_4851820E41A0674515840498F56B0BE7;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortEngine(int32 EntryPoint);
};

#endif
