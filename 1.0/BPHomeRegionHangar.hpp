#ifndef UE4SS_SDK_BPHomeRegionHangar_HPP
#define UE4SS_SDK_BPHomeRegionHangar_HPP

class ABPHomeRegionHangar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* HomeRegionHangar2;
    class UStaticMeshComponent* HomeRegionHangar1;
    class UStaticMeshComponent* HomeRegionHangar;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_1_Emissive_6E9CA2C647469A3052AF2D9624720432;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_6E9CA2C647469A3052AF2D9624720432;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Intensity_06E2D2D74A0B4FC0783E9CB728EA517D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_06E2D2D74A0B4FC0783E9CB728EA517D;
    class UTimelineComponent* Timeline_0;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void UpdateLights();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPHomeRegionHangar(int32 EntryPoint);
};

#endif
