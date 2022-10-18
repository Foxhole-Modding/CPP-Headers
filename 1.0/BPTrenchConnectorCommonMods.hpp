#ifndef UE4SS_SDK_BPTrenchConnectorCommonMods_HPP
#define UE4SS_SDK_BPTrenchConnectorCommonMods_HPP

class ABPTrenchConnectorCommonMods_C : public ATemplate
{
    class USceneComponent* RightModSlotSplineTarget;
    class USceneComponent* LeftModSlotSplineTarget;
    class UBPTrenchDefenseModSlot_C* RightDefenseModSlot;
    class UBPTrenchConnectorUnderModSlot_C* UnderModSlot;
    class UBPTrenchDefenseModSlot_C* LeftDefenseModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
