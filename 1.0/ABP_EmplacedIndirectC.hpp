#ifndef UE4SS_SDK_ABP_EmplacedIndirectC_HPP
#define UE4SS_SDK_ABP_EmplacedIndirectC_HPP

class UABP_EmplacedIndirectC_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_3FB6CF8A48DE169CACADC79F07CA1384;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_86F20E5C49711FEAA38A0A91E0307CCF;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_704DD34E47B4AF237C9E458962DCA77C;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_B416A5AA467255DF05B63AAED092C40B;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_08504D17491EC4D8BF6170B20C1FF167;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41D25B0D4E14E501B8A0CAA8A9DE321A;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10EFA39049AE7FF71C2198947AF96259;
    FAnimNode_StateResult AnimGraphNode_StateResult_1D8B18F04F8E4A182D718A98B08B67F9;
    FAnimNode_StateResult AnimGraphNode_StateResult_6757259942549ECD5E7BD7AF623EF1DB;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C6113066481064FF58DFB09A3200595C;
    float EmplacedIndirectC;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_EmplacedIndirectC(int32 EntryPoint);
};

#endif
