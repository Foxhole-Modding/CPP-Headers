#ifndef UE4SS_SDK_BPTrenchCommonMods_HPP
#define UE4SS_SDK_BPTrenchCommonMods_HPP

class ABPTrenchCommonMods_C : public ATemplate
{
    class UBPTrenchDefenseModSlot_C* RightMiddleDefenseModSlot;
    class UBPTrenchDefenseModSlot_C* RightBackDefenseModSlot;
    class UBPTrenchDefenseModSlot_C* RightFrontDefenseModSlot;
    class UBPTrenchDefenseModSlot_C* FrontDefenseModSlot;
    class UBPTrenchDefenseModSlot_C* BackDefenseModSlot;
    class UBPTrenchBridgeModSlot_C* BridgeModSlot;
    class UBPTrenchDefenseModSlot_C* LeftFrontDefenseModSlot;
    class UBPTrenchUnderModSlot_C* UnderModSlot;
    class UBPTrenchEndModSlot_C* FrontEndModSlot;
    class UBPTrenchDefenseModSlot_C* LeftMiddleDefenseModSlot;
    class UBPTrenchEndModSlot_C* BackEndModSlot;
    class UBPTrenchDefenseModSlot_C* LeftBackDefenseModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
