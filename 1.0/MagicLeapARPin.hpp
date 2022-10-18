#ifndef UE4SS_SDK_MagicLeapARPin_HPP
#define UE4SS_SDK_MagicLeapARPin_HPP

#include "MagicLeapARPin_enums.hpp"

class UMagicLeapARPinComponent : public USceneComponent
{
    FString ObjectUID;
    int32 UserIndex;
    EMagicLeapAutoPinType AutoPinType;
    bool bShouldPinActor;
    TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass;
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;
    void PersistentEntityPinned(bool bRestoredOrSynced);
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;
    void PersistentEntityPinLost();
    FGuid PinnedCFUID;
    class USceneComponent* PinnedSceneComponent;
    class UMagicLeapARPinSaveGame* PinData;

    void UnPin();
    bool PinSceneComponent(class USceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(class AActor* ActorToPin);
    void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
    void PersistentEntityPinLost__DelegateSignature();
    bool IsPinned();
    bool GetPinnedPinID(FGuid& PinID);
    class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
};

class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsTrackerValid();
    EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);
    EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    EMagicLeapPassableWorldError DestroyTracker();
    EMagicLeapPassableWorldError CreateTracker();
};

class UMagicLeapARPinSaveGame : public USaveGame
{
    FGuid PinnedID;
    FTransform ComponentWorldTransform;
    FTransform PinTransform;

};

#endif
