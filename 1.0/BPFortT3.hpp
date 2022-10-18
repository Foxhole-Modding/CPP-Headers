#ifndef UE4SS_SDK_BPFortT3_HPP
#define UE4SS_SDK_BPFortT3_HPP

class ABPFortT3_C : public AConcreteFort
{
    class UTemplateComponent* FortCommonT3Mods;
    class UTemplateComponent* FortCommonT2T3Mods;
    class UTemplateComponent* FortCommonDirtT3;
    class UTemplateComponent* FortCommonDefenseMods;
    class UTemplateComponent* FortCommonMods;
    class UTemplateComponent* FortCommon;
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerFrontLeft;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* Floor;
    class UStaticMeshComponent* CornerBackRight;

};

#endif
