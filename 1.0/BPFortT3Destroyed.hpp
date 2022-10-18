#ifndef UE4SS_SDK_BPFortT3Destroyed_HPP
#define UE4SS_SDK_BPFortT3Destroyed_HPP

class ABPFortT3Destroyed_C : public AConcreteFort
{
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;
    class UTemplateComponent* FortCommon;
    class UStaticMeshComponent* DirtRight;
    class UStaticMeshComponent* DirtBack;
    class UStaticMeshComponent* DirtLeft;
    class UStaticMeshComponent* DirtFront;
    class UStaticMeshComponent* CornerFrontRight;
    class UStaticMeshComponent* CornerFrontLeft;
    class UStaticMeshComponent* CornerBackLeft;
    class UStaticMeshComponent* Floor;
    class UStaticMeshComponent* CornerBackRight;

};

#endif
