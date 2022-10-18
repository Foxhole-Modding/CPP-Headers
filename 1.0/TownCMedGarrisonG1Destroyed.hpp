#ifndef UE4SS_SDK_TownCMedGarrisonG1Destroyed_HPP
#define UE4SS_SDK_TownCMedGarrisonG1Destroyed_HPP

class ATownCMedGarrisonG1Destroyed_C : public ADestroyedGarrisonHouse
{
    class UBPStructureInteriorArea_C* BPStructureInteriorArea;
    class UStaticMeshComponent* RoofMesh;
    class URuinedMeshComponent* RuinedMesh;
    class UStaticMeshComponent* HouseMesh;

};

#endif
