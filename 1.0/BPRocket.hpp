#ifndef UE4SS_SDK_BPRocket_HPP
#define UE4SS_SDK_BPRocket_HPP

class ABPRocket_C : public ARocket
{
    FPointerToUberGraphFrame UberGraphFrame;

    void BPBeginLaunch();
    void ExecuteUbergraph_BPRocket(int32 EntryPoint);
};

#endif
