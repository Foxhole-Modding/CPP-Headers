#ifndef UE4SS_SDK_ABP_FacilityVehicleFactory2_HPP
#define UE4SS_SDK_ABP_FacilityVehicleFactory2_HPP

class UABP_FacilityVehicleFactory2_C : public UAssemblyStationAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_11F48EAF4C498EA0C15AB1B7ED5F4B85;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F07C0E1546182B163C34FAB4AA753BD2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D5697E674E81FCAD029874BE2668E0BB;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4308645A42393A5F4A6411AD1B8410F6;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FacilityVehicleFactory2(int32 EntryPoint);
};

#endif
