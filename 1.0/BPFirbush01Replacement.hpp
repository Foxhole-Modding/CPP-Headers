#ifndef UE4SS_SDK_BPFirbush01Replacement_HPP
#define UE4SS_SDK_BPFirbush01Replacement_HPP

class ABPFirbush01Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFirbush01Replacement(int32 EntryPoint);
};

#endif
