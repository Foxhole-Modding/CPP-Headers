#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

class UClothConfigBase : public UObject
{
};

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;
    FGuid AssetGuid;

};

class UClothingSimulationFactory : public UObject
{
};

class UClothingSimulationInteractor : public UObject
{

    void PhysicsAssetUpdated();
    void ClothConfigUpdated();
};

struct FClothVertBoneData
{
    int32 NumInfluences;
    uint16 BoneIndices;
    float BoneWeights;

};

class UClothPhysicalMeshDataBase : public UObject
{
    TArray<FVector> Vertices;
    TArray<FVector> Normals;
    TArray<uint32> Indices;
    TArray<float> InverseMasses;
    TArray<FClothVertBoneData> BoneData;
    int32 NumFixedVerts;
    int32 MaxBoneWeights;
    TArray<uint32> SelfCollisionIndices;

};

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;
    float Radius;
    FVector LocalPosition;

};

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;

};

struct FClothCollisionPrim_Convex
{
    TArray<FPlane> Planes;
    int32 BoneIndex;

};

struct FClothCollisionPrim_Box
{
    int32 BoneIndex;
    FVector LocalMin;
    FVector LocalMax;

};

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;
    TArray<FClothCollisionPrim_Convex> Convexes;
    TArray<FClothCollisionPrim_Box> Boxes;

};

struct FPointWeightMap
{
    FName Name;
    uint8 CurrentTarget;
    TArray<float> Values;
    bool bEnabled;

};

#endif
