#ifndef UE4SS_SDK_MagicLeapPlanes_HPP
#define UE4SS_SDK_MagicLeapPlanes_HPP

#include "MagicLeapPlanes_enums.hpp"

struct FMagicLeapPlaneResult
{
    FVector PlanePosition;
    FRotator PlaneOrientation;
    FRotator ContentOrientation;
    FVector2D PlaneDimensions;
    TArray<EMagicLeapPlaneQueryFlags> PlaneFlags;
    FGuid ID;

};

struct FMagicLeapPolygon
{
    TArray<FVector> Vertices;

};

struct FMagicLeapPlaneBoundary
{
    FMagicLeapPolygon Polygon;
    TArray<FMagicLeapPolygon> Holes;

};

struct FMagicLeapPlaneBoundaries
{
    FGuid ID;
    TArray<FMagicLeapPlaneBoundary> Boundaries;

};

class UMagicLeapPlanesComponent : public USceneComponent
{
    TArray<EMagicLeapPlaneQueryFlags> QueryFlags;
    class UBoxComponent* SearchVolume;
    int32 MaxResults;
    float MinHolePerimeter;
    float MinPlaneArea;
    FMagicLeapPlanesComponentOnPlanesQueryResult OnPlanesQueryResult;
    void MagicLeapPlanesResultDelegateMulti(const bool bSuccess, const TArray<FMagicLeapPlaneResult>& Planes, const TArray<FMagicLeapPlaneBoundaries>& Polygons);

    bool RequestPlanesAsync();
};

struct FMagicLeapPlanesQuery
{
    TArray<EMagicLeapPlaneQueryFlags> Flags;
    class UBoxComponent* SearchVolume;
    int32 MaxResults;
    float MinHoleLength;
    float MinPlaneArea;
    FVector SearchVolumePosition;
    FQuat SearchVolumeOrientation;
    FVector SearchVolumeExtents;

};

class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags);
    void RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags);
    bool PlanesQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FPlanesQueryBeginAsyncResultDelegate& ResultDelegate);
    bool IsTrackerValid();
    FTransform GetContentScale(const class AActor* ContentActor, const FMagicLeapPlaneResult& PlaneResult);
    bool DestroyTracker();
    bool CreateTracker();
};

#endif
