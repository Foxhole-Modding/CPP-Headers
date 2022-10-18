#ifndef UE4SS_SDK_ABP_EmplacedAT_HPP
#define UE4SS_SDK_ABP_EmplacedAT_HPP

class UABP_EmplacedAT_C : public UEmplacedWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_ECAF84F94A6E864AFE8F3883A33D81AF;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_56D693124FA08FB483692888EFEF8C9F;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9EF59492476234C24A81959EC5896A93;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8C6F04BF47857CA614E0F590B26DB8C2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AB4737494475D6B413E8F59D0CCE5EAC;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A278789840363E709805928AEFCA3556;
    FAnimNode_StateResult AnimGraphNode_StateResult_53360A29483FC87B4F2F5880054EAF78;
    FAnimNode_StateResult AnimGraphNode_StateResult_D822960F4BC74CAC5A0CC6AED5EC6300;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F54A1014479AB6530A147B834B204E34;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10D7A1B446B7620279C95ABD1BD59EEC;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C337AE52408EDC796EC882BA5ED9F089;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0216C2F34C621EEC19E6919881DD4CB2;
    FAnimNode_StateResult AnimGraphNode_StateResult_53555D604061BD2E68B1D4A58189A7B6;
    FAnimNode_StateResult AnimGraphNode_StateResult_58CBBEC44EB87F68BFFF059BC55F5E24;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C0B532E3422C767024CF81886B70D935;
    FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_19D92DFD4EC8D225E8BDF5B9971E7A98;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EmplacedAT_AnimGraphNode_TransitionResult_10D7A1B446B7620279C95ABD1BD59EEC();
    void AnimNotify_ShootingComplete();
    void ExecuteUbergraph_ABP_EmplacedAT(int32 EntryPoint);
};

#endif
