#ifndef UE4SS_SDK_ABP_EmplacementMortar_HPP
#define UE4SS_SDK_ABP_EmplacementMortar_HPP

class UABP_EmplacementMortar_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_9EA9C1534ED8CAAC30194CBC28570ACB;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D01A3E694F0CBA181F40009323872EAB;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D95C8780487E68B324FAD1B73AA73797;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1E5D19BB419F767F865A76B4BFFC25D8;
    FAnimNode_StateResult AnimGraphNode_StateResult_1F1BB747484E8071B9BC62A46E09DB15;
    FAnimNode_StateResult AnimGraphNode_StateResult_6F516D664848085F5BDA2297798CF9B4;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_27FFCBB24B143B9C92BD31B6C60A2BBD;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BC199F2A4A9EE8B4B37CE3AFC8A3892C;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F6C9EEE5482F02B46B55B2947B56BB8A;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7DE253EA4385328A6E06FCBB1C26DB68;
    bool isCannonCrankMoving;
    float CannonYaw;
    float CannonPitch;

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_EmplacementMortar(int32 EntryPoint);
};

#endif
