#ifndef UE4SS_SDK_BPTrenchConnectorT3_HPP
#define UE4SS_SDK_BPTrenchConnectorT3_HPP

class ABPTrenchConnectorT3_C : public AConcreteFortConnector
{
    class USceneComponent* RoofModSplineTarget;
    class UTemplateComponent* TrenchConnectorCommonT3;
    class UStaticMeshComponent* CornerBackRight;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* CornerFrontLeft;
    class UBPTrenchConnectorRoofModSlot_C* BPTrenchConnectorRoofModSlot;
    class UTemplateComponent* TrenchConnectorCommon;
    class UDecalComponent* GravelBack;
    class UDecalComponent* GravelFront;
    class UTemplateComponent* TrenchConnectorCommonMods;
    class UStaticMeshComponent* DirtCornerFrontRight;
    class UStaticMeshComponent* DirtCornerFrontLeft;
    class UStaticMeshComponent* DirtCornerBackLeft;
    class UStaticMeshComponent* DirtCornerBackRight;
    class UDecalComponent* DecalRight;
    class UDecalComponent* DecalLeft;
    class UDecalComponent* DecalBack;
    class UDecalComponent* DecalFront;
    class UStaticMeshComponent* WallRight;
    class UStaticMeshComponent* Floor;
    class UStaticMeshComponent* WallLeft;
    class UStaticMeshComponent* WallBack;
    class UStaticMeshComponent* WallFront;

};

#endif
