#ifndef UE4SS_SDK_BPStorageFacility_HPP
#define UE4SS_SDK_BPStorageFacility_HPP

class ABPStorageFacility_C : public AStorageFacility
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTemperatureModifierBoxComponent* TemperatureModifierBox;
    class UStaticMeshComponent* ItemCrate;
    class UStaticMeshComponent* HomeRegionTarp03;
    class UStaticMeshComponent* StaticMesh18;
    class UStaticMeshComponent* BasicCrates03;
    class UStaticMeshComponent* MachineryVarious01;
    class UDecalComponent* Decal1;
    class UChildActorComponent* Crates;
    class UStaticMeshComponent* Barrel_11;
    class UStaticMeshComponent* StaticMesh17;
    class UStaticMeshComponent* BulwarkDressingMetalBracket;
    class UChildActorComponent* ChildActor;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class USpotLightComponent* SpotLight3;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* Flag;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* Rope02;
    class USpotLightComponent* SpotLight;
    class UDecalComponent* Decal4;
    class UStaticMeshComponent* StaticMesh19;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* AmmoCrate;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* StaticMesh14;
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;
    class UStaticMeshComponent* StaticMesh;

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPStorageFacility(int32 EntryPoint);
};

#endif
