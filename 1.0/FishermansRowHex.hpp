#ifndef UE4SS_SDK_FishermansRowHex_HPP
#define UE4SS_SDK_FishermansRowHex_HPP

class AFishermansRowHex_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_FishermansRowHex(int32 EntryPoint);
};

#endif
