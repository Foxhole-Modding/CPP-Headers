#ifndef UE4SS_SDK_ABP_CoastalGun_HPP
#define UE4SS_SDK_ABP_CoastalGun_HPP

class UABP_CoastalGun_C : public UCoastalGunAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_48D83C304E6BD3480B76718F9A80C178;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3DF0C6544E1193E9757FC1B81A3E281C;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_94A0B6494353979172BAF5A7327F38EE;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1545BE9342EC08F839D57A9ACF990CF6;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_B5C08E5F4ECB84E4F9B89EB55277A1D0;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_08B658DD4EF34EEA933DAB88FA4E0474;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_421A20EE4FE2D999C54AED89D568F3EF;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A9EF42F2437EF26A94632B9AF8CAE4E5;
    FAnimNode_StateResult AnimGraphNode_StateResult_C62541B74D6D51B091BA029CA977DA81;
    FAnimNode_StateResult AnimGraphNode_StateResult_FB4B499848F70C1CB7053AB4235C288C;
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8B1EFFA445C9E40B272D9086694BA322;
    bool isShooting;
    float horizontalAiming_Yaw;
    float verticalAiming_Pitch;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_CoastalGun(int32 EntryPoint);
};

#endif
