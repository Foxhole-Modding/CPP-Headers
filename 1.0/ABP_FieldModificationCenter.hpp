#ifndef UE4SS_SDK_ABP_FieldModificationCenter_HPP
#define UE4SS_SDK_ABP_FieldModificationCenter_HPP

class UABP_FieldModificationCenter_C : public UAssemblyStationAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root_5E230739427833958B7B36986EA9AC69;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3D475A9A40C92E195A4DB19A7C9D75D6;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_629B90094DBAFF5F2AB6D19167ED4806;
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_DD78D46F464FC279F8731AB00447AFA2;

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FieldModificationCenter(int32 EntryPoint);
};

#endif
