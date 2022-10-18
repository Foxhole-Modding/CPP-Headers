#ifndef UE4SS_SDK_BPHalfTrackOffensiveWarden_HPP
#define UE4SS_SDK_BPHalfTrackOffensiveWarden_HPP

class ABPHalfTrackOffensiveWarden_C : public ABPHalfTrackBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LightTop;
    class USpotLightComponent* SpotLight;
    class UVehicleSeatComponent* GunnerSeat2;
    class USkeletalMeshComponent* MainBodyTop;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackOffensiveWarden(int32 EntryPoint);
};

#endif
