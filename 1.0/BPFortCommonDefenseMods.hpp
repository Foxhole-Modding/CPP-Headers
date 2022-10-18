#ifndef UE4SS_SDK_BPFortCommonDefenseMods_HPP
#define UE4SS_SDK_BPFortCommonDefenseMods_HPP

class ABPFortCommonDefenseMods_C : public ATemplate
{
    class USceneComponent* BackDefenseModSlotTarget;
    class USceneComponent* RightDefenseModSlotTarget;
    class USceneComponent* LeftDefenseModSlotTarget;
    class USceneComponent* FrontDefenseModSlotTarget;
    class UBPFortDefenseModSlot_C* BackDefenseModSlot;
    class UBPFortDefenseModSlot_C* FrontDefenseModSlot;
    class UBPFortDefenseModSlot_C* LeftDefenseModSlot;
    class UBPFortDefenseModSlot_C* RightDefenseModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
