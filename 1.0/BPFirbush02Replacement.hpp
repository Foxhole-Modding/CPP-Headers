#ifndef UE4SS_SDK_BPFirbush02Replacement_HPP
#define UE4SS_SDK_BPFirbush02Replacement_HPP

class ABPFirbush02Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;
    EClientFoliageReplacementState NewVar_0;

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFirbush02Replacement(int32 EntryPoint);
};

#endif
