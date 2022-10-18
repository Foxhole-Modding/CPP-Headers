#ifndef UE4SS_SDK_BPTrenchBuildSite_HPP
#define UE4SS_SDK_BPTrenchBuildSite_HPP

class ABPTrenchBuildSite_C : public AFortBuildSite
{
    class UStaticMeshComponent* SideRope01;
    class UStaticMeshComponent* SideRope04;
    class UStaticMeshComponent* SideRope03;
    class UStaticMeshComponent* SideRope02;
    class UStaticMeshComponent* Side03;
    class UStaticMeshComponent* Side02;
    class UDecalComponent* BSDecal03;
    class UDecalComponent* BSDecal02;
    class UDecalComponent* BSDecal01;
    class UStaticMeshComponent* Side01;
    class UBoxComponent* BuildsiteOverlapBlock;
    class UBuildSocketComponent* RightSocket;
    class UBuildSocketComponent* LeftSocket;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;
    class UBoxComponent* WorkBox;

};

#endif
