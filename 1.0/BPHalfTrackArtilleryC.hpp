#ifndef UE4SS_SDK_BPHalfTrackArtilleryC_HPP
#define UE4SS_SDK_BPHalfTrackArtilleryC_HPP

class ABPHalfTrackArtilleryC_C : public ABPHalfTrackBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* MainBodyTop;
    class UVehicleSeatComponent* GunnerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackArtilleryC(int32 EntryPoint);
};

#endif
