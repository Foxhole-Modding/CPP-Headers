#ifndef UE4SS_SDK_BPFortCornerCommonDefenseMods_HPP
#define UE4SS_SDK_BPFortCornerCommonDefenseMods_HPP

class ABPFortCornerCommonDefenseMods_C : public ATemplate
{
    class USceneComponent* AngleDefenseModSlotTarget;
    class USceneComponent* RightDefenseModSlotTarget;
    class USceneComponent* BackDefenseModSlotTarget;
    class USceneComponent* LeftDefenseModSlotTarget;
    class USceneComponent* FrontDefenseModSlotTarget;
    class UBPFortDefenseModSlot_C* RightDefenseModSlot;
    class UBPFortDefenseModSlot_C* LeftDefenseModSlot;
    class UBPFortDefenseModSlot_C* FrontDefenseModSlot;
    class UBPFortDefenseModSlot_C* BackDefenseModSlot;
    class UBPFortDefenseModSlot_C* AngleDefenseModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
