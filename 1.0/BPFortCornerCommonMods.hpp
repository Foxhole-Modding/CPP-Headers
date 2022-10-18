#ifndef UE4SS_SDK_BPFortCornerCommonMods_HPP
#define UE4SS_SDK_BPFortCornerCommonMods_HPP

class ABPFortCornerCommonMods_C : public ATemplate
{
    class UBPFortCornerUnderModSlot_C* UnderModSlot;
    class UBPFortWallModSlot_C* AngleModSlot;
    class UBPFortWallModSlot_C* BackModSlot;
    class UBPFortWallModSlot_C* LeftModSlot;
    class UBPFortInfraModSlot_C* AngleInfraModSlot;
    class UBPFortInfraModSlot_C* BackInfraModSlot;
    class UBPFortInfraModSlot_C* LeftInfraModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
