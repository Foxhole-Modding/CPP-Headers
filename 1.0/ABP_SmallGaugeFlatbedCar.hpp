#ifndef UE4SS_SDK_ABP_SmallGaugeFlatbedCar_HPP
#define UE4SS_SDK_ABP_SmallGaugeFlatbedCar_HPP

class UABP_SmallGaugeFlatbedCar_C : public UInfantryRailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_A09F1160466A99A03EDB4FB7F5228409;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_514781D64CB5F06A7F8DE69121FD157E;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_87A6BC5C4E66556F60391FB361C49388;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_AAACA6674023FE54D6B4A9B8BF03D5C6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3B9FB553428C124FFF65A4A5ED61E16C;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SmallGaugeFlatbedCar(int32 EntryPoint);
};

#endif
