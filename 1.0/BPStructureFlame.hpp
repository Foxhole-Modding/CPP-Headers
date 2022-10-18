#ifndef UE4SS_SDK_BPStructureFlame_HPP
#define UE4SS_SDK_BPStructureFlame_HPP

class ABPStructureFlame_C : public AFlameActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Smoke;
    class UParticleSystemComponent* Flame3;
    class UParticleSystemComponent* Flame2;
    class UParticleSystemComponent* Flame;
    class USceneComponent* DefaultSceneRoot;
    bool UseSmoke;

    void ReceiveBeginPlay();
    void BPOnFireIntensityChanged(uint8 Previous, uint8 NewIntensity);
    void BPDeactivate();
    void ExecuteUbergraph_BPStructureFlame(int32 EntryPoint);
};

#endif
