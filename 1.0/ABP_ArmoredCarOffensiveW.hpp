#ifndef UE4SS_SDK_ABP_ArmoredCarOffensiveW_HPP
#define UE4SS_SDK_ABP_ArmoredCarOffensiveW_HPP

class UABP_ArmoredCarOffensiveW_C : public USimVehicleGunnerSupportAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_39FAB641409FC10F391FBDA334304B7A;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5C1D4C7C408740D0A9171995D6EC704F;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_002F77A84BA84212F68D2995F5CDBCCE;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_987AA41043520A24C586399ADCD2E979;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4BECBB7A480BF05356E1D6A1BADFB9E0;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D5099E2A4B1BC394F1F22EA2CC0B3845;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7A7D6A6A461A0996320E95BB5F151B6A;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_017B02E54EDAE7861EC379B18C1FF22D;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_157089624761BFC723A5DD861089E740;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_59DB113940BFA9983B710EAE8E65A965;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5CDF01174D34F2A9B94DCDA184053FB3;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ArmoredCarOffensiveW_AnimGraphNode_BlendSpacePlayer_4BECBB7A480BF05356E1D6A1BADFB9E0();
    void ExecuteUbergraph_ABP_ArmoredCarOffensiveW(int32 EntryPoint);
};

#endif
