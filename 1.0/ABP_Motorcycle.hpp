#ifndef UE4SS_SDK_ABP_Motorcycle_HPP
#define UE4SS_SDK_ABP_Motorcycle_HPP

class UABP_Motorcycle_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_E8C680E442F1A07CF8331AB9E4758E4C;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_992B2AFD4EA22F359FFCC1AE4196F04D;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_96B4A81449CB5371A85DD29817A22536;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_51EAE36443B975E35E79008D1B406ECC;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_75764F4F4C1D0AE2CEE1C9A5DB0C2EB2;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_721EDF93462D25CBD4B585A015A63989;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_824C4AE041A1B780C1A9FB97B2CD2C73;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9FF7A19F447EE0C3BBDB6C980395B287;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Motorcycle(int32 EntryPoint);
};

#endif
