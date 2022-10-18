#ifndef UE4SS_SDK_BPFacilityCatwalkPlatform_HPP
#define UE4SS_SDK_BPFacilityCatwalkPlatform_HPP

class ABPFacilityCatwalkPlatform_C : public ABuildableStructure
{
    class UStaticMeshComponent* BackLeftCorner;
    class UStaticMeshComponent* BackRightCorner;
    class UStaticMeshComponent* FrontRightCorner;
    class UStaticMeshComponent* FrontLeftCorner;
    class UStaticMeshComponent* RightRailing;
    class UStaticMeshComponent* BackRailing;
    class UStaticMeshComponent* LeftRailing;
    class UStaticMeshComponent* FrontRailing;
    class UBuildSocketComponent* RightSocket;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* LeftSocket;
    class UBuildSocketComponent* FrontSocket;
    class UStaticMeshComponent* FacilityCatwalkRamp;

};

#endif
