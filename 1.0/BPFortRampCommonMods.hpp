#ifndef UE4SS_SDK_BPFortRampCommonMods_HPP
#define UE4SS_SDK_BPFortRampCommonMods_HPP

class ABPFortRampCommonMods_C : public ATemplate
{
    class UBPFortWallModSlot_C* BackModSlot;
    class UBPFortWallModSlot_C* LeftModSlot;
    class UBPFortWallModSlot_C* RightModSlot;
    class UBPFortUnderModSlot_C* UnderModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
