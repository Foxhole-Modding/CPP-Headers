#ifndef UE4SS_SDK_Character_HPP
#define UE4SS_SDK_Character_HPP

class ACharacter_C : public APlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* PlayerFire;

    void BPUpdateMaterialParameters(const FVector& Position);
    void BPUpdateHeatVisuals(bool bState);
    void ExecuteUbergraph_Character(int32 EntryPoint);
};

#endif
