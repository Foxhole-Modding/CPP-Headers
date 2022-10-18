#ifndef UE4SS_SDK_BPFortBuildSite_HPP
#define UE4SS_SDK_BPFortBuildSite_HPP

class ABPFortBuildSite_C : public AFortBuildSite
{
    class UStaticMeshComponent* Side02;
    class UStaticMeshComponent* SideRope02;
    class UStaticMeshComponent* SideRope01;
    class UDecalComponent* BSDecal;
    class UStaticMeshComponent* Side01;
    class UBuildSocketComponent* FrontFortSocket;
    class UBuildSocketComponent* RightFortSocket;
    class UBuildSocketComponent* BackFortSocket;
    class UBuildSocketComponent* LeftFortSocket;
    class UBoxComponent* WorkBox;

};

#endif
