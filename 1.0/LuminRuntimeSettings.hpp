#ifndef UE4SS_SDK_LuminRuntimeSettings_HPP
#define UE4SS_SDK_LuminRuntimeSettings_HPP

#include "LuminRuntimeSettings_enums.hpp"

struct FLuminComponentSubElement
{
    ELuminComponentSubElementType ElementType;
    FString Value;

};

struct FLuminComponentElement
{
    FString Name;
    FString VisibleName;
    FString ExecutableName;
    ELuminComponentType ComponentType;
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;

};

class ULuminRuntimeSettings : public UObject
{
    FString PackageName;
    FString ApplicationDisplayName;
    bool bIsScreensApp;
    ELuminFrameTimingHint FrameTimingHint;
    bool bProtectedContent;
    bool bUseMobileRendering;
    bool bUseVulkan;
    FFilePath Certificate;
    FDirectoryPath IconModelPath;
    FDirectoryPath IconPortalPath;
    int32 VersionCode;
    int32 MinimumAPILevel;
    TArray<ELuminPrivilege> AppPrivileges;
    TArray<FLuminComponentSubElement> ExtraComponentSubElements;
    TArray<FLuminComponentElement> ExtraComponentElements;
    FString SpatializationPlugin;
    FString ReverbPlugin;
    FString OcclusionPlugin;
    int32 SoundCueCookQualityIndex;
    bool bRemoveDebugInfo;
    FDirectoryPath VulkanValidationLayerLibs;
    bool bFrameVignette;

};

#endif
