#ifndef UE4SS_SDK_BPTruckRepaireCol_HPP
#define UE4SS_SDK_BPTruckRepaireCol_HPP

class ABPTruckRepaireCol_C : public AActor
{
    class UBoxComponent* BoxCollision;
    class UStaticMeshComponent* TruckDamagedCol;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* ModularVehiclesPartPiping1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* ModularVehiclesPartPigingL;
    class UStaticMeshComponent* ModularVehiclesPartCharger;
    class UStaticMeshComponent* Toolbox1;
    class UStaticMeshComponent* Toolbox;
    class UStaticMeshComponent* ModularVehiclesPartEnginePart;
    class UStaticMeshComponent* ModularVehiclesPartCylinders;
    class UStaticMeshComponent* ModularVehiclesPartPiping;
    class UStaticMeshComponent* ModularVehiclesPartBattery;
    class USceneComponent* DefaultSceneRoot;

};

#endif
