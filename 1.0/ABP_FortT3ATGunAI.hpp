#ifndef UE4SS_SDK_ABP_FortT3ATGunAI_HPP
#define UE4SS_SDK_ABP_FortT3ATGunAI_HPP

class UABP_FortT3ATGunAI_C : public UGunTurretAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_028BE0EF48AA9EFF4E0028A9B450E386;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BD07295047078824BF8C099B5488D028;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FortT3ATGunAI(int32 EntryPoint);
};

#endif
