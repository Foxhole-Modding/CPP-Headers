#ifndef UE4SS_SDK_MagicLeap_HPP
#define UE4SS_SDK_MagicLeap_HPP

#include "MagicLeap_enums.hpp"

struct FPurchaseItemDetails
{
    FString Price;
    FString Name;
    PurchaseType Type;

};

struct FPurchaseConfirmation
{
    FString PackageName;
    PurchaseType Type;

};

class UInAppPurchaseComponent : public UActorComponent
{
    FInAppPurchaseComponentInAppPurchaseLogMessage InAppPurchaseLogMessage;
    void InAppPurchaseLogMessage(FString LogMessage);
    FInAppPurchaseComponentGetItemsDetailsSuccess GetItemsDetailsSuccess;
    void GetItemsDetailsSuccess(const TArray<FPurchaseItemDetails>& ItemsDetails);
    FInAppPurchaseComponentGetItemsDetailsFailure GetItemsDetailsFailure;
    void GetItemsDetailsFailure();
    FInAppPurchaseComponentPurchaseConfirmationSuccess PurchaseConfirmationSuccess;
    void PurchaseConfirmationSuccess(const FPurchaseConfirmation& PurchaseConfirmations);
    FInAppPurchaseComponentPurchaseConfirmationFailure PurchaseConfirmationFailure;
    void PurchaseConfirmationFailure();
    FInAppPurchaseComponentGetPurchaseHistorySuccess GetPurchaseHistorySuccess;
    void GetPurchaseHistorySuccess(const TArray<FPurchaseConfirmation>& PurchaseHistory);
    FInAppPurchaseComponentGetPurchaseHistoryFailure GetPurchaseHistoryFailure;
    void GetPurchaseHistoryFailure();

    bool TryPurchaseItemAsync(const FPurchaseItemDetails& ItemDetails);
    bool TryGetPurchaseHistoryAsync(int32 InNumPages);
    bool TryGetItemsDetailsAsync(const TArray<FString>& ItemIDs);
    void PurchaseConfirmationSuccess__DelegateSignature(const FPurchaseConfirmation& PurchaseConfirmations);
    void PurchaseConfirmationFailure__DelegateSignature();
    void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);
    void GetPurchaseHistorySuccess__DelegateSignature(const TArray<FPurchaseConfirmation>& PurchaseHistory);
    void GetPurchaseHistoryFailure__DelegateSignature();
    void GetItemsDetailsSuccess__DelegateSignature(const TArray<FPurchaseItemDetails>& ItemsDetails);
    void GetItemsDetailsFailure__DelegateSignature();
};

class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{
    FLuminApplicationLifecycleComponentDeviceHasReactivatedDelegate DeviceHasReactivatedDelegate;
    void LuminApplicationLifetimeDelegate();
    FLuminApplicationLifecycleComponentDeviceWillEnterRealityModeDelegate DeviceWillEnterRealityModeDelegate;
    void LuminApplicationLifetimeDelegate();
    FLuminApplicationLifecycleComponentDeviceWillGoInStandbyDelegate DeviceWillGoInStandbyDelegate;
    void LuminApplicationLifetimeDelegate();

};

class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingLost OnHeadTrackingLost;
    void VRNotificationsDelegate();
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingRecovered OnHeadTrackingRecovered;
    void VRNotificationsDelegate();
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingRecoveryFailed OnHeadTrackingRecoveryFailed;
    void VRNotificationsDelegate();
    FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingNewSessionStarted OnHeadTrackingNewSessionStarted;
    void VRNotificationsDelegate();

};

struct FMagicLeapHeadTrackingState
{
    EMagicLeapHeadTrackingMode Mode;
    EMagicLeapHeadTrackingError Error;
    float Confidence;

};

class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetStabilizationDepthActor(const class AActor* InStabilizationDepthActor, bool bSetFocusActor);
    void SetFocusActor(const class AActor* InFocusActor, bool bSetStabilizationActor);
    void SetBaseRotation(const FRotator& InBaseRotation);
    void SetBasePosition(const FVector& InBasePosition);
    void SetBaseOrientation(const FQuat& InBaseOrientation);
    bool SetAppReady();
    bool IsRunningOnMagicLeapHMD();
    int32 GetMLSDKVersionRevision();
    int32 GetMLSDKVersionMinor();
    int32 GetMLSDKVersionMajor();
    FString GetMLSDKVersion();
    bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);
    bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);
};

class UMagicLeapSettings : public UObject
{
    bool bEnableZI;
    bool bUseVulkanForZI;
    bool bUseMLAudioForZI;

};

struct FMagicLeapMeshBlockInfo
{
    FGuid BlockID;
    FVector BlockPosition;
    FRotator BlockOrientation;
    FVector BlockDimensions;
    FTimespan Timestamp;
    EMagicLeapMeshState BlockState;

};

struct FMagicLeapTrackingMeshInfo
{
    FTimespan Timestamp;
    TArray<FMagicLeapMeshBlockInfo> BlockData;

};

struct FMagicLeapMeshBlockRequest
{
    FGuid BlockID;
    EMagicLeapMeshLOD LevelOfDetail;

};

class IMagicLeapMeshBlockSelectorInterface : public IInterface
{

    void SelectMeshBlocks(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);
};

class UMeshTrackerComponent : public USceneComponent
{
    FMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;
    void OnMeshTrackerUpdated(FGuid ID, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    bool ScanWorld;
    EMagicLeapMeshType MeshType;
    class UBoxComponent* BoundingVolume;
    EMagicLeapMeshLOD LevelOfDetail;
    float PerimeterOfGapsToFill;
    bool Planarize;
    float DisconnectedSectionArea;
    bool RequestNormals;
    bool RequestVertexConfidence;
    EMagicLeapMeshVertexColorMode VertexColorMode;
    TArray<FColor> BlockVertexColors;
    FLinearColor VertexColorFromConfidenceZero;
    FLinearColor VertexColorFromConfidenceOne;
    bool RemoveOverlappingTriangles;
    class UMRMeshComponent* MRMesh;
    int32 BricksPerFrame;

    void SelectMeshBlocks(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);
    void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    int32 GetNumQueuedBlockUpdates();
    void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void DisconnectBlockSelector();
    void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void ConnectBlockSelector(TScriptInterface<class IMagicLeapMeshBlockSelectorInterface> Selector);
};

struct FMagicLeapRaycastQueryParams
{
    FVector Position;
    FVector Direction;
    FVector UpVector;
    int32 Width;
    int32 Height;
    float HorizontalFovDegrees;
    bool CollideWithUnobserved;
    int32 UserData;

};

struct FMagicLeapRaycastHitResult
{
    EMagicLeapRaycastResultState HitState;
    FVector HitPoint;
    FVector Normal;
    float Confidence;
    int32 UserData;

};

class UMagicLeapRaycastComponent : public UActorComponent
{

    bool RequestRaycast(const FMagicLeapRaycastQueryParams& RequestParams, const FRequestRaycastResultDelegate& ResultDelegate);
    void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);
};

class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{

    FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32 Width, int32 Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32 UserData);
};

#endif
