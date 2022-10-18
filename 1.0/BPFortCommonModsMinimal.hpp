#ifndef UE4SS_SDK_BPFortCommonModsMinimal_HPP
#define UE4SS_SDK_BPFortCommonModsMinimal_HPP

class ABPFortCommonModsMinimal_C : public ATemplate
{
    class UBPFortWallModSlotMinimal_C* BackModSlot;
    class UBPFortWallModSlotMinimal_C* RightModSlot;
    class UBPFortWallModSlotMinimal_C* FrontModSlot;
    class UBPFortWallModSlotMinimal_C* LeftModSlot;
    class UBPFortUnderModSlot_C* UnderModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
