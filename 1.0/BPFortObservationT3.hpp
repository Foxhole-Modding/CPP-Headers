#ifndef UE4SS_SDK_BPFortObservationT3_HPP
#define UE4SS_SDK_BPFortObservationT3_HPP

class ABPFortObservationT3_C : public AConcreteFortObservation
{
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerFrontLeft;
    class UStaticMeshComponent* CornerBackRight;
    class UStaticMeshComponent* ObservationBunkerT3;
    class UTemplateComponent* FortCommonDirtT3;
    class UTemplateComponent* FortCommonDefenseMods;
    class UTemplateComponent* FortCommonMods;
    class UTemplateComponent* FortCommon;
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;
    class UStaticMeshComponent* Floor;

};

#endif
