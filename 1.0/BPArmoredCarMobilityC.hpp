#ifndef UE4SS_SDK_BPArmoredCarMobilityC_HPP
#define UE4SS_SDK_BPArmoredCarMobilityC_HPP

class ABPArmoredCarMobilityC_C : public ABPArmoredCarBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVehicleExitComponent* PassengerExit;
    class UVehicleTriggerComponent* PassengerTrigger;
    class UVehicleSeatComponent* PassengerSeat3;
    class UVehicleSeatComponent* PassengerSeat2;

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarMobilityC(int32 EntryPoint);
};

#endif
