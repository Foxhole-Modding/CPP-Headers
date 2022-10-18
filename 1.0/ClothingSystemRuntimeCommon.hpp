#ifndef UE4SS_SDK_ClothingSystemRuntimeCommon_HPP
#define UE4SS_SDK_ClothingSystemRuntimeCommon_HPP

class UClothingAssetCustomData : public UObject
{
};

class UClothingAssetCommon : public UClothingAssetBase
{
    class UPhysicsAsset* PhysicsAsset;
    class UClothConfigBase* ClothSimConfig;
    TArray<class UClothLODDataBase*> ClothLODData;
    TArray<int32> LodMap;
    TArray<FName> UsedBoneNames;
    TArray<int32> UsedBoneIndices;
    int32 ReferenceBoneIndex;
    class UClothingAssetCustomData* CustomData;

};

class UClothLODDataBase : public UObject
{
    class UClothPhysicalMeshDataBase* PhysicalMeshData;
    FClothCollisionData CollisionData;

};

#endif
