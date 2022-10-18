#ifndef UE4SS_SDK_ABP_LongRangeArtilleryBase_HPP
#define UE4SS_SDK_ABP_LongRangeArtilleryBase_HPP

class UABP_LongRangeArtilleryBase_C : public UStaticArtilleryAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_EB07C0F543926DF0C65E18B05BE36E2D;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D23BCB944C4EB72BE09B5696BFA397CD;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LongRangeArtilleryBase(int32 EntryPoint);
};

#endif
