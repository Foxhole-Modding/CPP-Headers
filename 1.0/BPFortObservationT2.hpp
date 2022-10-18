#ifndef UE4SS_SDK_BPFortObservationT2_HPP
#define UE4SS_SDK_BPFortObservationT2_HPP

class ABPFortObservationT2_C : public AFortObservation
{
    class UStaticMeshComponent* CornerBackRight;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerFrontLeft;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* Roof;
    class UStaticMeshComponent* ObservationBunkerT2;
    class UTemplateComponent* FortCommonDirt;
    class UTemplateComponent* FortCommonDefenseMods;
    class UTemplateComponent* FortCommonMods;
    class UTemplateComponent* FortCommon;
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMeshFloor;
    class UStaticMeshComponent* Floor;

};

#endif
