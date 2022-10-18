#ifndef UE4SS_SDK_Paper2D_HPP
#define UE4SS_SDK_Paper2D_HPP

#include "Paper2D_enums.hpp"

class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
    bool bSampleAdditionalTextures;
    int32 AdditionalSlotIndex;
    FText SlotDisplayName;

};

class APaperCharacter : public ACharacter
{
    class UPaperFlipbookComponent* Sprite;

};

struct FPaperFlipbookKeyFrame
{
    class UPaperSprite* Sprite;
    int32 FrameRun;

};

class UPaperFlipbook : public UObject
{
    float FramesPerSecond;
    TArray<FPaperFlipbookKeyFrame> KeyFrames;
    class UMaterialInterface* DefaultMaterial;
    TEnumAsByte<EFlipbookCollisionMode::Type> CollisionSource;

    bool IsValidKeyFrameIndex(int32 Index);
    float GetTotalDuration();
    class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
    class UPaperSprite* GetSpriteAtFrame(int32 FrameIndex);
    int32 GetNumKeyFrames();
    int32 GetNumFrames();
    int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

class APaperFlipbookActor : public AActor
{
    class UPaperFlipbookComponent* RenderComponent;

};

class UPaperFlipbookComponent : public UMeshComponent
{
    class UPaperFlipbook* SourceFlipbook;
    class UMaterialInterface* Material;
    float PlayRate;
    uint8 bLooping;
    uint8 bReversePlayback;
    uint8 bPlaying;
    float AccumulatedTime;
    int32 CachedFrameIndex;
    FLinearColor SpriteColor;
    class UBodySetup* CachedBodySetup;
    FPaperFlipbookComponentOnFinishedPlaying OnFinishedPlaying;
    void FlipbookFinishedPlaySignature();

    void Stop();
    void SetSpriteColor(FLinearColor NewColor);
    void SetPlayRate(float NewRate);
    void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetPlayRate();
    int32 GetPlaybackPositionInFrames();
    float GetPlaybackPosition();
    int32 GetFlipbookLengthInFrames();
    float GetFlipbookLength();
    float GetFlipbookFramerate();
    class UPaperFlipbook* GetFlipbook();
};

class APaperGroupedSpriteActor : public AActor
{
    class UPaperGroupedSpriteComponent* RenderComponent;

};

struct FSpriteInstanceData
{
    FMatrix Transform;
    class UPaperSprite* SourceSprite;
    FColor VertexColor;
    int32 MaterialIndex;

};

class UPaperGroupedSpriteComponent : public UMeshComponent
{
    TArray<class UMaterialInterface*> InstanceMaterials;
    TArray<FSpriteInstanceData> PerInstanceSpriteData;

    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
    void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);
    bool RemoveInstance(int32 InstanceIndex);
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    int32 GetInstanceCount();
    void ClearInstances();
    int32 AddInstance(const FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);
};

class UPaperRuntimeSettings : public UObject
{
    bool bEnableSpriteAtlasGroups;
    bool bEnableTerrainSplineEditing;
    bool bResizeSpriteDataToMatchTextures;

};

struct FPaperSpriteSocket
{
    FTransform LocalTransform;
    FName SocketName;

};

class UPaperSprite : public UObject
{
    TArray<class UTexture*> AdditionalSourceTextures;
    FVector2D BakedSourceUV;
    FVector2D BakedSourceDimension;
    class UTexture2D* BakedSourceTexture;
    class UMaterialInterface* DefaultMaterial;
    class UMaterialInterface* AlternateMaterial;
    TArray<FPaperSpriteSocket> Sockets;
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    float PixelsPerUnrealUnit;
    class UBodySetup* BodySetup;
    int32 AlternateMaterialSplitIndex;
    TArray<FVector4> BakedRenderData;

};

class APaperSpriteActor : public AActor
{
    class UPaperSpriteComponent* RenderComponent;

};

class UPaperSpriteAtlas : public UObject
{
};

class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);
};

class UPaperSpriteComponent : public UMeshComponent
{
    class UPaperSprite* SourceSprite;
    class UMaterialInterface* MaterialOverride;
    FLinearColor SpriteColor;

    void SetSpriteColor(FLinearColor NewColor);
    bool SetSprite(class UPaperSprite* NewSprite);
    class UPaperSprite* GetSprite();
};

class APaperTerrainActor : public AActor
{
    class USceneComponent* DummyRoot;
    class UPaperTerrainSplineComponent* SplineComponent;
    class UPaperTerrainComponent* RenderComponent;

};

class UPaperTerrainComponent : public UPrimitiveComponent
{
    class UPaperTerrainMaterial* TerrainMaterial;
    bool bClosedSpline;
    bool bFilledSpline;
    class UPaperTerrainSplineComponent* AssociatedSpline;
    int32 RandomSeed;
    float SegmentOverlapAmount;
    FLinearColor TerrainColor;
    int32 ReparamStepsPerSegment;
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    float CollisionThickness;
    class UBodySetup* CachedBodySetup;

    void SetTerrainColor(FLinearColor NewColor);
};

struct FPaperTerrainMaterialRule
{
    class UPaperSprite* StartCap;
    TArray<class UPaperSprite*> Body;
    class UPaperSprite* EndCap;
    float MinimumAngle;
    float MaximumAngle;
    bool bEnableCollision;
    float CollisionOffset;
    int32 DrawOrder;

};

class UPaperTerrainMaterial : public UDataAsset
{
    TArray<FPaperTerrainMaterialRule> Rules;
    class UPaperSprite* InteriorFill;

};

class UPaperTerrainSplineComponent : public USplineComponent
{
};

struct FPaperTileInfo
{
    class UPaperTileSet* TileSet;
    int32 PackedTileIndex;

};

class UPaperTileLayer : public UObject
{
    FText LayerName;
    int32 LayerWidth;
    int32 LayerHeight;
    uint8 bHiddenInGame;
    uint8 bLayerCollides;
    uint8 bOverrideCollisionThickness;
    uint8 bOverrideCollisionOffset;
    float CollisionThicknessOverride;
    float CollisionOffsetOverride;
    FLinearColor LayerColor;
    int32 AllocatedWidth;
    int32 AllocatedHeight;
    TArray<FPaperTileInfo> AllocatedCells;
    class UPaperTileSet* TileSet;
    TArray<int32> AllocatedGrid;

};

class UPaperTileMap : public UObject
{
    int32 MapWidth;
    int32 MapHeight;
    int32 TileWidth;
    int32 TileHeight;
    float PixelsPerUnrealUnit;
    float SeparationPerTileX;
    float SeparationPerTileY;
    float SeparationPerLayer;
    TSoftObjectPtr<UPaperTileSet> SelectedTileSet;
    class UMaterialInterface* Material;
    TArray<class UPaperTileLayer*> TileLayers;
    float CollisionThickness;
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    TEnumAsByte<ETileMapProjectionMode::Type> ProjectionMode;
    int32 HexSideLength;
    class UBodySetup* BodySetup;
    int32 LayerNameIndex;

};

class APaperTileMapActor : public AActor
{
    class UPaperTileMapComponent* RenderComponent;

};

class UPaperTileMapComponent : public UMeshComponent
{
    int32 MapWidth;
    int32 MapHeight;
    int32 TileWidth;
    int32 TileHeight;
    class UPaperTileSet* DefaultLayerTileSet;
    class UMaterialInterface* Material;
    TArray<class UPaperTileLayer*> TileLayers;
    FLinearColor TileMapColor;
    int32 UseSingleLayerIndex;
    bool bUseSingleLayer;
    class UPaperTileMap* TileMap;

    void SetTileMapColor(FLinearColor NewColor);
    bool SetTileMap(class UPaperTileMap* NewTileMap);
    void SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue);
    void SetLayerColor(FLinearColor NewColor, int32 Layer);
    void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
    void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
    void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
    void RebuildCollision();
    bool OwnsTileMap();
    void MakeTileMapEditable();
    void GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace);
    FLinearColor GetTileMapColor();
    FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
    FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
    FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer);
    void GetMapSize(int32& MapWidth, int32& MapHeight, int32& NumLayers);
    FLinearColor GetLayerColor(int32 Layer);
    void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
    class UPaperTileLayer* AddNewLayer();
};

struct FIntMargin
{
    int32 Left;
    int32 Top;
    int32 Right;
    int32 Bottom;

};

struct FSpriteGeometryShape
{
    ESpriteShapeType ShapeType;
    TArray<FVector2D> Vertices;
    FVector2D BoxSize;
    FVector2D BoxPosition;
    float Rotation;
    bool bNegativeWinding;

};

struct FSpriteGeometryCollection
{
    TArray<FSpriteGeometryShape> Shapes;
    TEnumAsByte<ESpritePolygonMode::Type> GeometryType;
    int32 PixelsPerSubdivisionX;
    int32 PixelsPerSubdivisionY;
    bool bAvoidVertexMerging;
    float AlphaThreshold;
    float DetailAmount;
    float SimplifyEpsilon;

};

struct FPaperTileMetadata
{
    FName UserDataName;
    FSpriteGeometryCollection CollisionData;
    uint8 TerrainMembership;

};

struct FPaperTileSetTerrain
{
    FString TerrainName;
    int32 CenterTileIndex;

};

class UPaperTileSet : public UObject
{
    FIntPoint TileSize;
    class UTexture2D* TileSheet;
    TArray<class UTexture*> AdditionalSourceTextures;
    FIntMargin BorderMargin;
    FIntPoint PerTileSpacing;
    FIntPoint DrawingOffset;
    int32 WidthInTiles;
    int32 HeightInTiles;
    int32 AllocatedWidth;
    int32 AllocatedHeight;
    TArray<FPaperTileMetadata> PerTileData;
    TArray<FPaperTileSetTerrain> Terrains;
    int32 TileWidth;
    int32 TileHeight;
    int32 Margin;
    int32 Spacing;

};

class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FPaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
    FName GetTileUserData(FPaperTileInfo Tile);
    FTransform GetTileTransform(FPaperTileInfo Tile);
    void BreakTile(FPaperTileInfo Tile, int32& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
};

struct FPaperSpriteAtlasSlot
{
    TSoftObjectPtr<UPaperSprite> SpriteRef;
    int32 AtlasIndex;
    int32 X;
    int32 Y;
    int32 Width;
    int32 Height;

};

struct FSpriteDrawCallRecord
{
    FVector Destination;
    class UTexture* BaseTexture;
    FColor Color;

};

struct FSpriteAssetInitParameters
{
};

#endif
