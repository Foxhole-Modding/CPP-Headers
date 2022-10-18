#ifndef UE4SS_SDK_BPHalfTrackW_HPP
#define UE4SS_SDK_BPHalfTrackW_HPP

class ABPHalfTrackW_C : public ABPHalfTrackBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LightTop;
    class USpotLightComponent* SpotLight;
    class UVehicleSeatComponent* GunnerSeat2;
    class USkeletalMeshComponent* MainBodyTop;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackW(int32 EntryPoint);
};

#endif
