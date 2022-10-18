#ifndef UE4SS_SDK_BPTrenchEmpBuildGhost_HPP
#define UE4SS_SDK_BPTrenchEmpBuildGhost_HPP

class ABPTrenchEmpBuildGhost_C : public ABuildGhost
{
    class UStaticMeshComponent* FrontLeft;
    class UStaticMeshComponent* BackLeft;
    class UStaticMeshComponent* FrontRight;
    class UStaticMeshComponent* BackRight;
    class UStaticMeshComponent* Left;
    class UStaticMeshComponent* Back;
    class UStaticMeshComponent* Front;
    class UStaticMeshComponent* Right;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* BackRightSocket;
    class UBuildSocketComponent* FrontRightSocket;
    class UBuildSocketComponent* FrontLeftSocket;
    class UBuildSocketComponent* BackLeftSocket;
    class UBuildSocketComponent* RightSocket;
    class UBuildSocketComponent* FrontSocket;
    class UBuildSocketComponent* LeftSocket;

};

#endif
