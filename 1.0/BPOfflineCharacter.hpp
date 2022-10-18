#ifndef UE4SS_SDK_BPOfflineCharacter_HPP
#define UE4SS_SDK_BPOfflineCharacter_HPP

class ABPOfflineCharacter_C : public AOfflineCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Particle;

    void UserConstructionScript();
    void BPApplyFatalHit();
    void ExecuteUbergraph_BPOfflineCharacter(int32 EntryPoint);
};

#endif
