#ifndef UE4SS_SDK_MagicLeapEyeTracker_HPP
#define UE4SS_SDK_MagicLeapEyeTracker_HPP

#include "MagicLeapEyeTracker_enums.hpp"

struct FMagicLeapFixationComfort
{
    bool FixationDepthIsUncomfortable;
    bool FixationDepthViolationHasOccurred;
    float RemainingTimeAtUncomfortableDepth;

};

struct FMagicLeapEyeBlinkState
{
    bool LeftEyeBlinked;
    bool RightEyeBlinked;

};

class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool GetFixationComfort(FMagicLeapFixationComfort& FixationComfort);
    bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);
    EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
};

#endif
