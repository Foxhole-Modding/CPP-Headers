#ifndef UE4SS_SDK_TownWLargeG1Destroyed_HPP
#define UE4SS_SDK_TownWLargeG1Destroyed_HPP

class ATownWLargeG1Destroyed_C : public ATownWLargeGS1Destroyed_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_TownWLargeG1Destroyed(int32 EntryPoint);
};

#endif
