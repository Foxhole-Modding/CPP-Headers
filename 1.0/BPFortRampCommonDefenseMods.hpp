#ifndef UE4SS_SDK_BPFortRampCommonDefenseMods_HPP
#define UE4SS_SDK_BPFortRampCommonDefenseMods_HPP

class ABPFortRampCommonDefenseMods_C : public ATemplate
{
    class UBPFortDefenseModSlot_C* FrontDefenseModSlot;
    class UBPFortDefenseModSlot_C* LeftDefenseModSlot;
    class UBPFortDefenseModSlot_C* RightDefenseModSlot;
    class UBPFortDefenseModSlot_C* BackDefenseModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
