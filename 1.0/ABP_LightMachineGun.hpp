#ifndef UE4SS_SDK_ABP_LightMachineGun_HPP
#define UE4SS_SDK_ABP_LightMachineGun_HPP

class UABP_LightMachineGun_C : public UWeaponAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_AFD77C444EEF84C2A9EAE18881F8BEEA;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B4B901FF451B6781DEFE22AE1557FAB3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CC8ED5E646568964C35F83B95615FFAF;
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_FCC2EA9041763623ECCB34BEECD13C8D;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_LightMachineGun(int32 EntryPoint);
};

#endif
