#ifndef UE4SS_SDK_BPHalfTrackC_HPP
#define UE4SS_SDK_BPHalfTrackC_HPP

class ABPHalfTrackC_C : public ABPHalfTrackBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat2;
    class USkeletalMeshComponent* MainBodyTop;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackC(int32 EntryPoint);
};

#endif
