#ifndef UE4SS_SDK_ABP_FacilityVehicleFactory1_HPP
#define UE4SS_SDK_ABP_FacilityVehicleFactory1_HPP

class UABP_FacilityVehicleFactory1_C : public UAssemblyStationAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_3649745A417AC21DA8C5BFB2738EB0E4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96AC52944BB097AE9DFDC0975B060689;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94F972FF469DC95413CC2EB76C2C0031;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_61EE345E4C76049D782C3CB7D8B9868C;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityVehicleFactory1(int32 EntryPoint);
};

#endif
