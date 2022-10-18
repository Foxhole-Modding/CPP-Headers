#ifndef UE4SS_SDK_BPTrenchT3_HPP
#define UE4SS_SDK_BPTrenchT3_HPP

class ABPTrenchT3_C : public AConcreteFort
{
    class UBPTrenchRoofModSlot_C* BPTrenchRoofModSlot;
    class UTemplateComponent* TrenchCommonMods;
    class UTemplateComponent* TrenchCommon;
    class UDecalComponent* Decal;
    class UDecalComponent* Decal1;
    class UDecalComponent* Decal2;
    class UDecalComponent* Decal3;
    class UStaticMeshComponent* OpenWallRight;
    class UStaticMeshComponent* OpenWallLeft;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerFrontLeft;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* CornerBackRight;
    class UStaticMeshComponent* WallRight;
    class UStaticMeshComponent* Floor;
    class UStaticMeshComponent* WallLeft;
    class UStaticMeshComponent* WallBack;
    class UStaticMeshComponent* WallFront;

};

#endif
