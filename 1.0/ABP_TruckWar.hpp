#ifndef UE4SS_SDK_ABP_TruckWar_HPP
#define UE4SS_SDK_ABP_TruckWar_HPP

class UABP_TruckWar_C : public USimVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_83A045FC41A81781ED0254BA03638AF7;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CE00AA42453ED22D07B4A195E05FD1D6;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_A012ADD94ACA91D0FC8616B2C998C5FF;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TruckWar(int32 EntryPoint);
};

#endif
