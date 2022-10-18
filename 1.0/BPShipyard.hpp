#ifndef UE4SS_SDK_BPShipyard_HPP
#define UE4SS_SDK_BPShipyard_HPP

class ABPShipyard_C : public AVehicleFactory
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTemperatureModifierBoxComponent* TemperatureModifierBox1;
    class UTemperatureModifierBoxComponent* TemperatureModifierBox;
    class UStaticMeshComponent* Flag;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight4;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UDockComponent* DockingVolume;
    class UStaticMeshComponent* Factory;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPShipyard(int32 EntryPoint);
};

#endif
