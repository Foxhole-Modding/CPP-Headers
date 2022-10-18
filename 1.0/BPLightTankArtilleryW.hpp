#ifndef UE4SS_SDK_BPLightTankArtilleryW_HPP
#define UE4SS_SDK_BPLightTankArtilleryW_HPP

class ABPLightTankArtilleryW_C : public ABPLightTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleSeatComponent* PassengerSeat2;
    class UVehicleSeatComponent* GunnerSeat1;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankArtilleryW(int32 EntryPoint);
};

#endif
