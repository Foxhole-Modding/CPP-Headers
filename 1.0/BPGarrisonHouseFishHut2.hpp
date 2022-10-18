#ifndef UE4SS_SDK_BPGarrisonHouseFishHut2_HPP
#define UE4SS_SDK_BPGarrisonHouseFishHut2_HPP

class ABPGarrisonHouseFishHut2_C : public AGarrisonHouse
{
    class UStaticMeshComponent* StaticMesh;
    class UDecalComponent* AITurretMarker01;
    class UDecalComponent* AITurretMarker00;
    class UStaticMeshComponent* window02;
    class UStaticMeshComponent* window01;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret1;
    class UBPAIGarrisonTurret_C* BPAIGarrisonTurret;
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;
    class UMultiplexedStaticMeshComponent* MultiplexedHouse;
    class UStaticMeshComponent* HouseMesh;

};

#endif
