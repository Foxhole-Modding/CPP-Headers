#ifndef UE4SS_SDK_BPItemStash_HPP
#define UE4SS_SDK_BPItemStash_HPP

class ABPItemStash_C : public AItemStash
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* BackpackPickup;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPItemStash(int32 EntryPoint);
};

#endif
