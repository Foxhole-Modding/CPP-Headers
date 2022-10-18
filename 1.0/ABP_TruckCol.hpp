#ifndef UE4SS_SDK_ABP_TruckCol_HPP
#define UE4SS_SDK_ABP_TruckCol_HPP

class UABP_TruckCol_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_C6291C92430341C8D52C27862D8AB9F1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78405A9041FF77B23F18FAAF5E76BB11;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7C96EA0147E707AA44CCB39A54E60D86;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TruckCol(int32 EntryPoint);
};

#endif
