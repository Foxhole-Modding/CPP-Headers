#ifndef UE4SS_SDK_MagicLeapAR_HPP
#define UE4SS_SDK_MagicLeapAR_HPP

#include "MagicLeapAR_enums.hpp"

class ULuminARUObjectManager : public UObject
{
    TArray<class UARPin*> AllAnchors;

};

class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration);
};

struct FLuminARLightEstimate
{
    bool bIsValid;
    float PixelIntensity;
    FVector RGBScaleFactor;

};

class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool LuminARLineTrace(class UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults);
    ELuminARTrackingState GetTrackingState();
    void GetLightEstimation(FLuminARLightEstimate& OutLightEstimate);
};

class ULuminARSessionConfig : public UARSessionConfig
{
    int32 MaxPlaneQueryResults;
    int32 MinPlaneArea;
    bool bArbitraryOrientationPlaneDetection;
    FVector PlaneSearchExtents;
    TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags;
    bool bDiscardZeroExtentPlanes;

};

#endif
