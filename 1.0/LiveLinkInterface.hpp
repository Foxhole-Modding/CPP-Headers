#ifndef UE4SS_SDK_LiveLinkInterface_HPP
#define UE4SS_SDK_LiveLinkInterface_HPP

#include "LiveLinkInterface_enums.hpp"

class ULiveLinkSourceFactory : public UObject
{
};

struct FLiveLinkSourceHandle
{
};

class ULiveLinkRole : public UObject
{
};

class ULiveLinkBasicRole : public ULiveLinkRole
{
};

class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
};

class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
};

class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
};

class ULiveLinkController : public UObject
{
};

struct FLiveLinkSourceBufferManagementSettings
{
    float ValidEngineTime;
    float EngineTimeOffset;
    FFrameRate TimecodeFrameRate;
    bool bGenerateSubFrame;
    FFrameRate SourceTimecodeFrameRate;
    int32 ValidTimecodeFrame;
    int32 TimecodeFrameOffset;
    int32 LatestOffset;
    int32 MaxNumberOfFrameToBuffered;
    bool bKeepAtLeastOneFrame;

};

class ULiveLinkSourceSettings : public UObject
{
    ELiveLinkSourceMode Mode;
    FLiveLinkSourceBufferManagementSettings BufferSettings;
    FString ConnectionString;
    TSubclassOf<class ULiveLinkSourceFactory> Factory;

};

struct FLiveLinkCurveConversionSettings
{
    TMap<class FString, class FSoftObjectPath> CurveConversionAssetMap;

};

class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
    FLiveLinkCurveConversionSettings CurveConversionSettings;

};

class ULiveLinkFrameInterpolationProcessor : public UObject
{
};

class ULiveLinkFramePreProcessor : public UObject
{
};

class ULiveLinkFrameTranslator : public UObject
{
};

class ULiveLinkLightRole : public ULiveLinkTransformRole
{
};

class ULiveLinkSubjectSettings : public UObject
{
    TArray<class ULiveLinkFramePreProcessor*> PreProcessors;
    class ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;
    TArray<class ULiveLinkFrameTranslator*> Translators;
    TSubclassOf<class ULiveLinkRole> Role;

};

struct FLiveLinkSubjectName
{
    FName Name;

};

class ULiveLinkVirtualSubject : public UObject
{
    TSubclassOf<class ULiveLinkRole> Role;
    TArray<FLiveLinkSubjectName> Subjects;
    TArray<class ULiveLinkFrameTranslator*> FrameTranslators;

};

struct FLiveLinkBaseBlueprintData
{
};

struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
};

struct FLiveLinkTransform
{
};

struct FCachedSubjectFrame
{
};

struct FSubjectMetadata
{
    TMap<class FName, class FString> StringMetadata;
    FTimecode SceneTimecode;
    FFrameRate SceneFramerate;

};

struct FLiveLinkWorldTime
{
    double Time;
    double Offset;

};

struct FLiveLinkMetaData
{
    TMap<class FName, class FString> StringMetadata;
    FQualifiedFrameTime SceneTime;

};

struct FLiveLinkBaseFrameData
{
    FLiveLinkWorldTime WorldTime;
    FLiveLinkMetaData MetaData;
    TArray<float> PropertyValues;

};

struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
    TArray<FTransform> Transforms;

};

struct FLiveLinkBaseStaticData
{
    TArray<FName> PropertyNames;

};

struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
    TArray<FName> BoneNames;
    TArray<int32> BoneParents;

};

struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkBaseStaticData StaticData;
    FLiveLinkBaseFrameData FrameData;

};

struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
};

struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
    bool bIsFieldOfViewSupported;
    bool bIsAspectRatioSupported;
    bool bIsFocalLengthSupported;
    bool bIsProjectionModeSupported;
    float FilmBackWidth;
    float FilmBackHeight;
    bool bIsApertureSupported;
    bool bIsFocusDistanceSupported;

};

struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
    FTransform Transform;

};

struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
    float FieldOfView;
    float AspectRatio;
    float FocalLength;
    float Aperture;
    float FocusDistance;
    ELiveLinkCameraProjectionMode ProjectionMode;

};

struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkCameraStaticData StaticData;
    FLiveLinkCameraFrameData FrameData;

};

struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
    bool bIsTemperatureSupported;
    bool bIsIntensitySupported;
    bool bIsLightColorSupported;
    bool bIsInnerConeAngleSupported;
    bool bIsOuterConeAngleSupported;
    bool bIsAttenuationRadiusSupported;
    bool bIsSourceLenghtSupported;
    bool bIsSourceRadiusSupported;
    bool bIsSoftSourceRadiusSupported;

};

struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
    float Temperature;
    float Intensity;
    FColor LightColor;
    float InnerConeAngle;
    float OuterConeAngle;
    float AttenuationRadius;
    float SourceRadius;
    float SoftSourceRadius;
    float SourceLength;

};

struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkLightStaticData StaticData;
    FLiveLinkLightFrameData FrameData;

};

struct FLiveLinkSubjectKey
{
    FGuid Source;
    FLiveLinkSubjectName SubjectName;

};

struct FLiveLinkSubjectPreset
{
    FLiveLinkSubjectKey Key;
    TSubclassOf<class ULiveLinkRole> Role;
    class ULiveLinkSubjectSettings* Settings;
    class ULiveLinkVirtualSubject* VirtualSubject;
    bool bEnabled;

};

struct FLiveLinkSourcePreset
{
    FGuid Guid;
    class ULiveLinkSourceSettings* Settings;

};

struct FLiveLinkRefSkeleton
{
    TArray<FName> BoneNames;
    TArray<int32> BoneParents;

};

struct FLiveLinkSubjectRepresentation
{
    FLiveLinkSubjectName Subject;
    TSubclassOf<class ULiveLinkRole> Role;

};

struct FLiveLinkInterpolationSettings
{
    bool bUseInterpolation;
    float InterpolationOffset;

};

struct FLiveLinkTimeSynchronizationSettings
{
    FFrameRate FrameRate;
    FFrameNumber FrameOffset;

};

struct FLiveLinkSourceDebugInfo
{
    FLiveLinkSubjectName SubjectName;
    int32 SnapshotIndex;
    int32 NumberOfBufferAtSnapshot;

};

struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkTransformStaticData StaticData;
    FLiveLinkTransformFrameData FrameData;

};

struct FLiveLinkCurveElement
{
    FName CurveName;
    float CurveValue;

};

struct FLiveLinkFrameData
{
    TArray<FTransform> Transforms;
    TArray<FLiveLinkCurveElement> CurveElements;
    FLiveLinkWorldTime WorldTime;
    FLiveLinkMetaData MetaData;

};

struct FLiveLinkFrameRate : public FFrameRate
{
};

struct FLiveLinkTimeCode_Base_DEPRECATED
{
    int32 Seconds;
    int32 Frames;
    FLiveLinkFrameRate FrameRate;

};

struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{
};

struct FLiveLinkTime
{
    double WorldTime;
    FQualifiedFrameTime SceneTime;

};

#endif
