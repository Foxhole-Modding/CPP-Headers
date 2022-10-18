#ifndef UE4SS_SDK_ABP_TrainCoal_HPP
#define UE4SS_SDK_ABP_TrainCoal_HPP

class UABP_TrainCoal_C : public URailVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_89F8CCBF4437C20EBAB533936F34F950;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63424880456028FBE70211A9A1964A99;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4B9F24F54F0B5851477C9787B57D2361;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_0689274F49FA1E6A69DE748BFF588654;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4D25CBE34154818FCEBCA5BFED60E656;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0F3DD88B4A953F03E73212905335D137;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E08435BD42C8F191B8EEAF98D7DB10B7;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5E70B9E4486FA5A92EEA9BB9D43681EF;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6D995B4E43BAE3AEEE6C2D88915A3B62;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainCoal(int32 EntryPoint);
};

#endif
