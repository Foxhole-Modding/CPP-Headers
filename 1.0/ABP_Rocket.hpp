#ifndef UE4SS_SDK_ABP_Rocket_HPP
#define UE4SS_SDK_ABP_Rocket_HPP

class UABP_Rocket_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_90E824104DC6503F8AB67C93D20EE1D9;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C5C3CEF0433E2D750603B0BC300C096C;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7EA682CE451A2EFD4A1F37980E6CFFF2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1B99656145BD857B455618A84389CDB3;
    FAnimNode_StateResult AnimGraphNode_StateResult_5D9C734D4EBB32245E61B386838756BB;
    FAnimNode_StateResult AnimGraphNode_StateResult_61B9A37A4B4D5243B20E44A4CBE01722;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C8DDA712416562CC3C3AAB8D96EF35CE;
    bool rocketIsLaunched;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Rocket(int32 EntryPoint);
};

#endif
