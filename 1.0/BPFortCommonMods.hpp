#ifndef UE4SS_SDK_BPFortCommonMods_HPP
#define UE4SS_SDK_BPFortCommonMods_HPP

class ABPFortCommonMods_C : public ATemplate
{
    class UBPFortInfraModSlot_C* BackInfraModSlot;
    class UBPFortWallModSlot_C* BackModSlot;
    class UBPFortInfraModSlot_C* RightInfraModSlot;
    class UBPFortWallModSlot_C* RightModSlot;
    class UBPFortInfraModSlot_C* LeftInfraModSlot;
    class UBPFortUnderModSlot_C* UnderModSlot;
    class UBPFortWallModSlot_C* LeftModSlot;
    class UBPFortWallModSlot_C* FrontModSlot;
    class UBPFortInfraModSlot_C* FrontInfraModSlot;
    class USceneComponent* DefaultSceneRoot;

};

#endif
