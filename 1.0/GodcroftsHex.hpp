#ifndef UE4SS_SDK_GodcroftsHex_HPP
#define UE4SS_SDK_GodcroftsHex_HPP

class AGodcroftsHex_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_GodcroftsHex(int32 EntryPoint);
};

#endif
