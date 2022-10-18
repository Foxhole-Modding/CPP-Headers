#ifndef UE4SS_SDK_BPFortCornerBuildSite_HPP
#define UE4SS_SDK_BPFortCornerBuildSite_HPP

class ABPFortCornerBuildSite_C : public AFortBuildSite
{
    class UBoxComponent* WorkBoxAngle;
    class UBoxComponent* WorkBoxLeft;
    class UBoxComponent* WorkBoxBack;
    class UBuildSocketComponent* AngleFortSocket;
    class UStaticMeshComponent* SideRope03;
    class UStaticMeshComponent* Side03;
    class UStaticMeshComponent* Side02;
    class UStaticMeshComponent* SideRope01;
    class UDecalComponent* BSDecal;
    class UStaticMeshComponent* Side01;
    class UBuildSocketComponent* BackFortSocket;
    class UBuildSocketComponent* LeftFortSocket;

};

#endif
