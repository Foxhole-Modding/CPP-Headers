#ifndef UE4SS_SDK_BPFirbush03Replacement_HPP
#define UE4SS_SDK_BPFirbush03Replacement_HPP

class ABPFirbush03Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFirbush03Replacement(int32 EntryPoint);
};

#endif
