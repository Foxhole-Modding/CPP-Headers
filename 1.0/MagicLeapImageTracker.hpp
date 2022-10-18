#ifndef UE4SS_SDK_MagicLeapImageTracker_HPP
#define UE4SS_SDK_MagicLeapImageTracker_HPP

class UMagicLeapImageTrackerComponent : public USceneComponent
{
    class UTexture2D* TargetImageTexture;
    FString Name;
    float LongerDimension;
    bool bIsStationary;
    bool bUseUnreliablePose;
    FMagicLeapImageTrackerComponentOnSetImageTargetSucceeded OnSetImageTargetSucceeded;
    void SetImageTargetSucceededMulti();
    FMagicLeapImageTrackerComponentOnSetImageTargetFailed OnSetImageTargetFailed;
    void SetImageTargetFailedMulti();
    FMagicLeapImageTrackerComponentOnImageTargetFound OnImageTargetFound;
    void ImageTargetFoundMulti();
    FMagicLeapImageTrackerComponentOnImageTargetLost OnImageTargetLost;
    void ImageTargetLostMulti();
    FMagicLeapImageTrackerComponentOnImageTargetUnreliableTracking OnImageTargetUnreliableTracking;
    void ImageTargetUnreliableTrackingMulti(const FVector& LastTrackedLocation, const FRotator& LastTrackedRotation, const FVector& NewUnreliableLocation, const FRotator& NewUnreliableRotation);

    bool SetTargetAsync(class UTexture2D* ImageTarget);
    bool RemoveTargetAsync();
};

class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
    bool IsImageTrackingEnabled();
    int32 GetMaxSimultaneousTargets();
    void EnableImageTracking(bool bEnable);
};

struct FMagicLeapImageTrackerTarget
{
};

#endif
