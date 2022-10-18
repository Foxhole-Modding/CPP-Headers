#ifndef UE4SS_SDK_InteractiveToolsFramework_HPP
#define UE4SS_SDK_InteractiveToolsFramework_HPP

#include "InteractiveToolsFramework_enums.hpp"

class UInputBehavior : public UObject
{
};

class UAnyButtonInputBehavior : public UInputBehavior
{
    int32 ButtonNumber;

};

class UInteractiveGizmoBuilder : public UObject
{
};

class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UInteractiveGizmo : public UObject
{
    class UInputBehaviorSet* InputBehaviors;

};

class UAxisAngleGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoFloatParameterSource> AngleSource;
    TScriptInterface<class IGizmoClickTarget> HitTarget;
    TScriptInterface<class IGizmoStateTarget> StateTarget;
    bool bInInteraction;
    FVector RotationOrigin;
    FVector RotationAxis;
    FVector RotationPlaneX;
    FVector RotationPlaneY;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    float InteractionStartAngle;
    float InteractionCurAngle;

};

class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UAxisPositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;
    TScriptInterface<class IGizmoClickTarget> HitTarget;
    TScriptInterface<class IGizmoStateTarget> StateTarget;
    bool bInInteraction;
    FVector InteractionOrigin;
    FVector InteractionAxis;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    float InteractionStartParameter;
    float InteractionCurParameter;

};

class UGizmoConstantAxisSource : public UObject
{
    FVector Origin;
    FVector Direction;

};

class UGizmoWorldAxisSource : public UObject
{
    FVector Origin;
    int32 AxisIndex;

};

class UGizmoComponentAxisSource : public UObject
{
    class USceneComponent* Component;
    int32 AxisIndex;
    bool bLocalAxes;

};

class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
};

class UInteractiveToolBuilder : public UObject
{
};

class UClickDragToolBuilder : public UInteractiveToolBuilder
{
};

class UInteractiveTool : public UObject
{
    class UInputBehaviorSet* InputBehaviors;
    TArray<class UObject*> ToolPropertyObjects;

};

class UClickDragTool : public UInteractiveTool
{
};

class AInternalToolFrameworkActor : public AActor
{
};

class AGizmoActor : public AInternalToolFrameworkActor
{
};

class UGizmoBaseComponent : public UPrimitiveComponent
{
    FLinearColor Color;
    float HoverSizeMultiplier;
    float PixelHitDistanceThreshold;

    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
};

class UGizmoArrowComponent : public UGizmoBaseComponent
{
    FVector Direction;
    float Gap;
    float Length;
    float Thickness;

};

class UGizmoCircleComponent : public UGizmoBaseComponent
{
    FVector Normal;
    float Radius;
    float Thickness;
    int32 NumSides;
    bool bViewAligned;
    bool bOnlyAllowFrontFacingHits;

};

class IGizmoTransformSource : public IInterface
{

    void SetTransform(const FTransform& NewTransform);
    FTransform GetTransform();
};

class IGizmoAxisSource : public IInterface
{

    bool HasTangentVectors();
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);
    FVector GetOrigin();
    FVector GetDirection();
};

class IGizmoClickTarget : public IInterface
{

    void UpdateHoverState(bool bHovering);
};

class IGizmoStateTarget : public IInterface
{

    void EndUpdate();
    void BeginUpdate();
};

class IGizmoFloatParameterSource : public IInterface
{

    void SetParameter(float NewValue);
    float GetParameter();
    void EndModify();
    void BeginModify();
};

class IGizmoVec2ParameterSource : public IInterface
{

    void SetParameter(const FVector2D& NewValue);
    FVector2D GetParameter();
    void EndModify();
    void BeginModify();
};

class UGizmoRectangleComponent : public UGizmoBaseComponent
{
    FVector DirectionX;
    FVector DirectionY;
    float OffsetX;
    float OffsetY;
    float LengthX;
    float LengthY;
    float Thickness;

};

class UGizmoLambdaHitTarget : public UObject
{
};

class UGizmoComponentHitTarget : public UObject
{
    class UPrimitiveComponent* Component;

};

struct FBehaviorInfo
{
    class UInputBehavior* Behavior;

};

class UInputBehaviorSet : public UObject
{
    TArray<FBehaviorInfo> Behaviors;

};

class IInputBehaviorSource : public IInterface
{
};

class UInputRouter : public UObject
{
    bool bAutoInvalidateOnHover;
    bool bAutoInvalidateOnCapture;
    class UInputBehaviorSet* ActiveInputBehaviors;

};

struct FActiveGizmo
{
};

class UInteractiveGizmoManager : public UObject
{
    TArray<FActiveGizmo> ActiveGizmos;
    TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;

};

class UInteractiveToolPropertySet : public UObject
{
    class UObject* CachedProperties;

};

class IToolContextTransactionProvider : public IInterface
{
};

class UInteractiveToolManager : public UObject
{
    class UInteractiveTool* ActiveLeftTool;
    class UInteractiveTool* ActiveRightTool;
    TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;

};

class IToolFrameworkComponent : public IInterface
{
};

class UInteractiveToolsContext : public UObject
{
    class UInputRouter* InputRouter;
    class UInteractiveToolManager* ToolManager;
    class UInteractiveGizmoManager* GizmoManager;

};

class UKeyAsModifierInputBehavior : public UInputBehavior
{
};

class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
};

class USingleSelectionTool : public UInteractiveTool
{
};

class UMeshSurfacePointTool : public USingleSelectionTool
{
};

class UMeshSurfacePointToolMouseBehavior : public UAnyButtonInputBehavior
{
};

class UMouseHoverBehavior : public UInputBehavior
{
};

class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
};

class UMultiSelectionTool : public UInteractiveTool
{
};

class UGizmoBaseFloatParameterSource : public UObject
{
};

struct FGizmoFloatParameterChange
{
    float InitialValue;
    float CurrentValue;

};

class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
    float Value;
    FGizmoFloatParameterChange LastChange;

};

class UGizmoBaseVec2ParameterSource : public UObject
{
};

struct FGizmoVec2ParameterChange
{
    FVector2D InitialValue;
    FVector2D CurrentValue;

};

class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
    FVector2D Value;
    FGizmoVec2ParameterChange LastChange;

};

class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float Parameter;
    FGizmoFloatParameterChange LastChange;
    FVector CurTranslationAxis;
    FVector CurTranslationOrigin;
    FTransform InitialTransform;

};

class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    FVector2D Parameter;
    FGizmoVec2ParameterChange LastChange;
    FVector CurTranslationOrigin;
    FVector CurTranslationNormal;
    FVector CurTranslationAxisX;
    FVector CurTranslationAxisY;
    FTransform InitialTransform;

};

class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoTransformSource> TransformSource;
    float Angle;
    FGizmoFloatParameterChange LastChange;
    FVector CurRotationAxis;
    FVector CurRotationOrigin;
    FTransform InitialTransform;

};

class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UPlanePositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;
    TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;
    TScriptInterface<class IGizmoClickTarget> HitTarget;
    TScriptInterface<class IGizmoStateTarget> StateTarget;
    bool bInInteraction;
    FVector InteractionOrigin;
    FVector InteractionNormal;
    FVector InteractionAxisX;
    FVector InteractionAxisY;
    FVector InteractionStartPoint;
    FVector InteractionCurPoint;
    FVector2D InteractionStartParameter;
    FVector2D InteractionCurParameter;

};

class USelectionSet : public UObject
{
};

class UMeshSelectionSet : public USelectionSet
{
    TArray<int32> Vertices;
    TArray<int32> Edges;
    TArray<int32> Faces;
    TArray<int32> Groups;

};

class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
    bool HitTestOnRelease;

};

class USingleClickToolBuilder : public UInteractiveToolBuilder
{
};

class USingleClickTool : public UInteractiveTool
{
};

class UGizmoNilStateTarget : public UObject
{
};

class UGizmoLambdaStateTarget : public UObject
{
};

class UGizmoObjectModifyStateTarget : public UObject
{
};

class UGizmoTransformChangeStateTarget : public UObject
{
    TScriptInterface<class IToolContextTransactionProvider> TransactionManager;

};

class ATransformGizmoActor : public AGizmoActor
{
    class UPrimitiveComponent* TranslateX;
    class UPrimitiveComponent* TranslateY;
    class UPrimitiveComponent* TranslateZ;
    class UPrimitiveComponent* TranslateYZ;
    class UPrimitiveComponent* TranslateXZ;
    class UPrimitiveComponent* TranslateXY;
    class UPrimitiveComponent* RotateX;
    class UPrimitiveComponent* RotateY;
    class UPrimitiveComponent* RotateZ;

};

class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
};

class UTransformGizmo : public UInteractiveGizmo
{
    class UTransformProxy* ActiveTarget;
    TArray<class UPrimitiveComponent*> ActiveComponents;
    TArray<class UInteractiveGizmo*> ActiveGizmos;
    class UGizmoComponentAxisSource* AxisXSource;
    class UGizmoComponentAxisSource* AxisYSource;
    class UGizmoComponentAxisSource* AxisZSource;
    class UGizmoTransformChangeStateTarget* StateTarget;

};

class UTransformProxy : public UObject
{
    bool bRotatePerObject;
    bool bSetPivotMode;
    FTransform SharedTransform;
    FTransform InitialSharedTransform;

};

class UGizmoBaseTransformSource : public UObject
{
};

class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
    class USceneComponent* Component;
    bool bModifyComponentOnTransform;

};

class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
    class UTransformProxy* Proxy;

};

struct FInputRayHit
{
};

#endif
