#ifndef UE4SS_SDK_BPHalfTrackDefensiveC_HPP
#define UE4SS_SDK_BPHalfTrackDefensiveC_HPP

class ABPHalfTrackDefensiveC_C : public ABPHalfTrackBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* GunnerSeat2;
    class USkeletalMeshComponent* MainBodyTop;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackDefensiveC(int32 EntryPoint);
};

#endif
