#ifndef UE4SS_SDK_ABP_FortMGunAI_HPP
#define UE4SS_SDK_ABP_FortMGunAI_HPP

class UABP_FortMGunAI_C : public UFoxholeTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_FBCDABF44DBEB139E60BC7AFBB95805F;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_F45EB9E8445D890FCA5E46AD43AE1DF3;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortMGunAI(int32 EntryPoint);
};

#endif
