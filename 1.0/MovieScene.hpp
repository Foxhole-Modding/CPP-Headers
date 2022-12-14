#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

class UMovieSceneSignedObject : public UObject
{
    FGuid Signature;

};

struct FMovieSceneSectionEvalOptions
{
    bool bCanEditCompletionMode;
    EMovieSceneCompletionMode CompletionMode;

};

struct FMovieSceneEasingSettings
{
    int32 AutoEaseInDuration;
    int32 AutoEaseOutDuration;
    TScriptInterface<class IMovieSceneEasingFunction> EaseIn;
    bool bManualEaseIn;
    int32 ManualEaseInDuration;
    TScriptInterface<class IMovieSceneEasingFunction> EaseOut;
    bool bManualEaseOut;
    int32 ManualEaseOutDuration;

};

struct FMovieSceneFrameRange
{
};

struct FOptionalMovieSceneBlendType
{
    EMovieSceneBlendType BlendType;
    bool bIsValid;

};

class UMovieSceneSection : public UMovieSceneSignedObject
{
    FMovieSceneSectionEvalOptions EvalOptions;
    FMovieSceneEasingSettings Easing;
    FMovieSceneFrameRange SectionRange;
    FFrameNumber PreRollFrames;
    FFrameNumber PostRollFrames;
    int32 RowIndex;
    int32 OverlapPriority;
    uint8 bIsActive;
    uint8 bIsLocked;
    float StartTime;
    float EndTime;
    float PrerollTime;
    float PostrollTime;
    uint8 bIsInfinite;
    bool bSupportsInfiniteRange;
    FOptionalMovieSceneBlendType BlendType;

    void SetRowIndex(int32 NewRowIndex);
    void SetPreRollFrames(int32 InPreRollFrames);
    void SetPostRollFrames(int32 InPostRollFrames);
    void SetOverlapPriority(int32 NewPriority);
    void SetIsLocked(bool bInIsLocked);
    void SetIsActive(bool bInIsActive);
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    void SetBlendType(EMovieSceneBlendType InBlendType);
    bool IsLocked();
    bool IsActive();
    int32 GetRowIndex();
    int32 GetPreRollFrames();
    int32 GetPostRollFrames();
    int32 GetOverlapPriority();
    EMovieSceneCompletionMode GetCompletionMode();
    FOptionalMovieSceneBlendType GetBlendType();
};

struct FMovieSceneTrackEvalOptions
{
    uint8 bCanEvaluateNearestSection;
    uint8 bEvalNearestSection;
    uint8 bEvaluateInPreroll;
    uint8 bEvaluateInPostroll;
    uint8 bEvaluateNearestSection;

};

class UMovieSceneTrack : public UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;
    bool bIsEvalDisabled;

};

class UMovieSceneNameableTrack : public UMovieSceneTrack
{
};

struct FMovieSceneTrackIdentifier
{
    uint32 Value;

};

struct FMovieSceneSegment
{
};

struct FMovieSceneEvaluationTrackSegments
{
    TArray<int32> SegmentIdentifierToIndex;
    TArray<FMovieSceneSegment> SortedSegments;

};

struct FSectionEvaluationDataTree
{
};

struct FMovieSceneEvalTemplatePtr
{
};

struct FMovieSceneTrackImplementationPtr
{
};

struct FMovieSceneEvaluationTrack
{
    FGuid ObjectBindingId;
    uint16 EvaluationPriority;
    EEvaluationMethod EvaluationMethod;
    FMovieSceneEvaluationTrackSegments Segments;
    class UMovieSceneTrack* SourceTrack;
    FSectionEvaluationDataTree EvaluationTree;
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    FMovieSceneTrackImplementationPtr TrackTemplate;
    FName EvaluationGroup;
    uint8 bEvaluateInPreroll;
    uint8 bEvaluateInPostroll;
    uint8 bTearDownPriority;

};

struct FMovieSceneEvaluationGroupLUTIndex
{
    int32 LUTOffset;
    int32 NumInitPtrs;
    int32 NumEvalPtrs;

};

struct FMovieSceneSequenceID
{
    uint32 Value;

};

struct FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSequenceID SequenceID;
    FMovieSceneTrackIdentifier TrackIdentifier;

};

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;

};

struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSegmentIdentifier SegmentID;

};

struct FMovieSceneEvaluationGroup
{
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;

};

struct FMovieSceneEvaluationKey
{
    FMovieSceneSequenceID SequenceID;
    FMovieSceneTrackIdentifier TrackIdentifier;
    uint32 SectionIndex;

};

struct FMovieSceneOrderedEvaluationKey
{
    FMovieSceneEvaluationKey Key;
    uint16 SetupIndex;
    uint16 TearDownIndex;

};

struct FMovieSceneEvaluationMetaData
{
    TArray<FMovieSceneSequenceID> ActiveSequences;
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;
    TMap<FMovieSceneSequenceID, uint32> SubTemplateSerialNumbers;

};

struct FMovieSceneEvaluationField
{
    TArray<FMovieSceneFrameRange> Ranges;
    TArray<FMovieSceneEvaluationGroup> Groups;
    TArray<FMovieSceneEvaluationMetaData> MetaData;

};

struct FMovieSceneSequenceTransform
{
    float TimeScale;
    FFrameTime Offset;

};

struct FMovieSceneSequenceInstanceDataPtr
{
};

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;
    FMovieSceneSequenceTransform RootToSequenceTransform;
    FFrameRate TickResolution;
    FMovieSceneSequenceID DeterministicSequenceID;
    FMovieSceneFrameRange PlayRange;
    FMovieSceneFrameRange PreRollRange;
    FMovieSceneFrameRange PostRollRange;
    int32 HierarchicalBias;
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    FGuid SubSectionSignature;
    FMovieSceneSequenceTransform OuterToInnerTransform;

};

struct FMovieSceneSequenceHierarchyNode
{
    FMovieSceneSequenceID ParentID;
    TArray<FMovieSceneSequenceID> Children;

};

struct FMovieSceneSequenceHierarchy
{
    TMap<class FMovieSceneSequenceID, class FMovieSceneSubSequenceData> SubSequences;
    TMap<class FMovieSceneSequenceID, class FMovieSceneSequenceHierarchyNode> Hierarchy;

};

struct FMovieSceneEvaluationTemplateSerialNumber
{
    uint32 Value;

};

struct FMovieSceneTemplateGenerationLedger
{
    FMovieSceneTrackIdentifier LastTrackIdentifier;
    TMap<class FGuid, class FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
    TMap<class FGuid, class FMovieSceneFrameRange> SubSectionRanges;

};

struct FMovieSceneTrackFieldData
{
};

struct FMovieSceneSubSectionFieldData
{
};

struct FMovieSceneEvaluationTemplate
{
    TMap<class FMovieSceneTrackIdentifier, class FMovieSceneEvaluationTrack> Tracks;
    FMovieSceneEvaluationField EvaluationField;
    FMovieSceneSequenceHierarchy Hierarchy;
    FGuid SequenceSignature;
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
    FMovieSceneTemplateGenerationLedger TemplateLedger;
    FMovieSceneTrackFieldData TrackFieldData;
    FMovieSceneSubSectionFieldData SubSectionFieldData;

};

struct FMovieSceneObjectBindingID
{
    int32 SequenceID;
    EMovieSceneObjectBindingSpace Space;
    FGuid Guid;

};

class UMovieSceneSequence : public UMovieSceneSignedObject
{
    FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;
    EMovieSceneCompletionMode DefaultCompletionMode;
    bool bParentContextsAreSignificant;
    bool bPlayableDirectly;

    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
};

struct FMovieSceneSequenceLoopCount
{
    int32 Value;

};

struct FMovieSceneSequencePlaybackSettings
{
    uint8 bAutoPlay;
    FMovieSceneSequenceLoopCount LoopCount;
    float PlayRate;
    float StartTime;
    uint8 bRandomStartTime;
    uint8 bRestoreState;
    uint8 bDisableMovementInput;
    uint8 bDisableLookAtInput;
    uint8 bHidePlayer;
    uint8 bHideHud;
    uint8 bDisableCameraCuts;
    uint8 bPauseAtEnd;

};

struct FMovieSceneRootEvaluationTemplateInstance
{
    TMap<class FMovieSceneSequenceID, class UObject*> DirectorInstances;

};

struct FMovieSceneSequenceReplProperties
{
    FFrameTime LastKnownPosition;
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;
    int32 LastKnownNumLoops;

};

class UMovieSceneSequencePlayer : public UObject
{
    FMovieSceneSequencePlayerOnPlay OnPlay;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnStop OnStop;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPause OnPause;
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnFinished OnFinished;
    void OnMovieSceneSequencePlayerEvent();
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;
    uint8 bReversePlayback;
    class UMovieSceneSequence* Sequence;
    FFrameNumber StartTime;
    int32 DurationFrames;
    int32 CurrentNumLoops;
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    FMovieSceneSequenceReplProperties NetSyncProps;
    TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;

    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackRange(const float NewStartTime, const float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32 StartFrame, int32 Duration);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(FString InLabel);
    void ScrubToFrame(FFrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(FString InLabel);
    void PlayToFrame(FFrameTime NewPosition);
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    void JumpToPosition(float NewPlaybackPosition);
    bool JumpToMarkedFrame(FString InLabel);
    void JumpToFrame(FFrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    float GetPlayRate();
    float GetPlaybackStart();
    float GetPlaybackPosition();
    float GetPlaybackEnd();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
    float GetLength();
    FFrameRate GetFrameRate();
    int32 GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
};

class IMovieScenePlaybackClient : public IInterface
{
};

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;
    TArray<FName> Tags;
    bool bContinuouslyRespawn;
    FGuid Guid;
    FString Name;
    class UObject* ObjectTemplate;
    TArray<FGuid> ChildPossessables;
    ESpawnOwnership Ownership;
    FName LevelName;

};

struct FMovieScenePossessable
{
    TArray<FName> Tags;
    FGuid Guid;
    FString Name;
    UClass* PossessedObjectClass;
    FGuid ParentGuid;

};

struct FMovieSceneBinding
{
    FGuid ObjectGuid;
    FString BindingName;
    TArray<class UMovieSceneTrack*> Tracks;

};

struct FMovieSceneObjectBindingIDs
{
    TArray<FMovieSceneObjectBindingID> Ids;

};

struct FMovieSceneMarkedFrame
{
    FFrameNumber FrameNumber;
    FString Label;

};

class UMovieScene : public UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;
    TArray<FMovieScenePossessable> Possessables;
    TArray<FMovieSceneBinding> ObjectBindings;
    TMap<class FName, class FMovieSceneObjectBindingIDs> BindingGroups;
    TArray<class UMovieSceneTrack*> MasterTracks;
    class UMovieSceneTrack* CameraCutTrack;
    FMovieSceneFrameRange SelectionRange;
    FMovieSceneFrameRange PlaybackRange;
    FFrameRate TickResolution;
    FFrameRate DisplayRate;
    EMovieSceneEvaluationType EvaluationType;
    EUpdateClockSource ClockSource;
    TArray<FMovieSceneMarkedFrame> MarkedFrames;

};

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingId;
    TWeakObjectPtr<class UObject> Object;
    bool bOverridesDefault;

};

class UMovieSceneBindingOverrides : public UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;

};

class IMovieSceneBindingOwnerInterface : public IInterface
{
};

class UMovieSceneBuiltInEasingFunction : public UObject
{
    EMovieSceneBuiltInEasing Type;

};

class UMovieSceneEasingExternalCurve : public UObject
{
    class UCurveFloat* Curve;

};

class IMovieSceneEasingFunction : public IInterface
{

    float OnEvaluate(float Interp);
};

class UMovieSceneFolder : public UObject
{
    FName FolderName;
    TArray<class UMovieSceneFolder*> ChildFolders;
    TArray<class UMovieSceneTrack*> ChildMasterTracks;
    TArray<FString> ChildObjectBindingStrings;

};

class IMovieSceneKeyProxy : public IInterface
{
};

struct FMovieSceneSectionParameters
{
    FFrameNumber StartFrameOffset;
    float TimeScale;
    int32 HierarchicalBias;
    float StartOffset;
    float PrerollTime;
    float PostrollTime;

};

class UMovieSceneSubSection : public UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;
    float StartOffset;
    float TimeScale;
    float PrerollTime;
    class UMovieSceneSequence* SubSequence;
    TLazyObjectPtr<class AActor> ActorToRecord;
    FString TargetSequenceName;
    FDirectoryPath TargetPathToRecordTo;

    void SetSequence(class UMovieSceneSequence* Sequence);
    class UMovieSceneSequence* GetSequence();
};

class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

class UTestMovieSceneTrack : public UMovieSceneTrack
{
    bool bHighPassFilter;
    TArray<class UMovieSceneSection*> SectionArray;

};

class UTestMovieSceneSection : public UMovieSceneSection
{
};

class UTestMovieSceneSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;

};

struct FMovieSceneChannel
{
};

struct FMovieSceneTangentData
{
    float ArriveTangent;
    float LeaveTangent;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    float ArriveTangentWeight;
    float LeaveTangentWeight;

};

struct FMovieSceneFloatValue
{
    float Value;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    FMovieSceneTangentData Tangent;

};

struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
};

struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    TArray<FFrameNumber> Times;
    TArray<FMovieSceneFloatValue> Values;
    float DefaultValue;
    bool bHasDefaultValue;
    FMovieSceneKeyHandleMap KeyHandles;
    FFrameRate TickResolution;

};

struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    bool DefaultValue;
    bool bHasDefaultValue;
    TArray<bool> Values;

};

struct FMovieSceneByteChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    uint8 DefaultValue;
    bool bHasDefaultValue;
    TArray<uint8> Values;
    class UEnum* Enum;

};

struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;
    int32 DefaultValue;
    bool bHasDefaultValue;
    TArray<int32> Values;

};

struct FMovieSceneObjectPathChannelKeyValue
{
    TSoftObjectPtr<UObject> SoftPtr;
    class UObject* HardPtr;

};

struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
    UClass* PropertyClass;
    TArray<FFrameNumber> Times;
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;
    FMovieSceneObjectPathChannelKeyValue DefaultValue;

};

struct FMovieSceneEvalTemplateBase
{
};

struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    EMovieSceneCompletionMode CompletionMode;
    TWeakObjectPtr<class UMovieSceneSection> SourceSectionPtr;

};

struct FMovieSceneSectionGroup
{
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;

};

struct FMovieSceneTrackLabels
{
    TArray<FString> Strings;

};

struct FMovieSceneExpansionState
{
    bool bExpanded;

};

struct FMovieSceneEditorData
{
    TMap<class FString, class FMovieSceneExpansionState> ExpansionStates;
    TArray<FString> PinnedNodes;
    double ViewStart;
    double ViewEnd;
    double WorkStart;
    double WorkEnd;
    TSet<FFrameNumber> MarkedFrames;
    FFloatRange WorkingRange;
    FFloatRange ViewRange;

};

struct FMovieSceneTimecodeSource
{
    FTimecode Timecode;
    FFrameNumber DeltaFrame;

};

struct FMovieSceneEmptyStruct
{
};

struct FMovieSceneEvaluationOperand
{
    FGuid ObjectBindingId;
    FMovieSceneSequenceID SequenceID;

};

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<class UMovieSceneSubSection> Section;
    FGuid ObjectBindingId;
    ESectionEvaluationFlags Flags;

};

struct FMovieSceneKeyStruct
{
};

struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
    FFrameNumber Time;

};

struct FGeneratedMovieSceneKeyStruct
{
};

struct FMovieScenePropertySectionData
{
    FName PropertyName;
    FString PropertyPath;
    FName FunctionName;
    FName NotifyFunctionName;

};

struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;

};

struct FSectionEvaluationData
{
    int32 ImplIndex;
    FFrameNumber ForcedTime;
    ESectionEvaluationFlags Flags;

};

struct FMovieSceneSequenceInstanceData
{
};

struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
};

struct FMovieSceneTrackDisplayOptions
{
    uint8 bShowVerticalFrames;

};

struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
};

#endif
