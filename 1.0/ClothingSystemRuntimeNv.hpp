#ifndef UE4SS_SDK_ClothingSystemRuntimeNv_HPP
#define UE4SS_SDK_ClothingSystemRuntimeNv_HPP

#include "ClothingSystemRuntimeNv_enums.hpp"

struct FClothConstraintSetup
{
    float Stiffness;
    float StiffnessMultiplier;
    float StretchLimit;
    float CompressionLimit;

};

class UClothConfigNv : public UClothConfigBase
{
    EClothingWindMethod WindMethod;
    FClothConstraintSetup VerticalConstraintConfig;
    FClothConstraintSetup HorizontalConstraintConfig;
    FClothConstraintSetup BendConstraintConfig;
    FClothConstraintSetup ShearConstraintConfig;
    float SelfCollisionRadius;
    float SelfCollisionStiffness;
    float SelfCollisionCullScale;
    FVector Damping;
    float Friction;
    float WindDragCoefficient;
    float WindLiftCoefficient;
    FVector LinearDrag;
    FVector AngularDrag;
    FVector LinearInertiaScale;
    FVector AngularInertiaScale;
    FVector CentrifugalInertiaScale;
    float SolverFrequency;
    float StiffnessFrequency;
    float GravityScale;
    FVector GravityOverride;
    bool bUseGravityOverride;
    float TetherStiffness;
    float TetherLimit;
    float CollisionThickness;
    float AnimDriveSpringStiffness;
    float AnimDriveDamperStiffness;

};

struct FClothConfig
{
    EClothingWindMethod WindMethod;
    FClothConstraintSetup VerticalConstraintConfig;
    FClothConstraintSetup HorizontalConstraintConfig;
    FClothConstraintSetup BendConstraintConfig;
    FClothConstraintSetup ShearConstraintConfig;
    float SelfCollisionRadius;
    float SelfCollisionStiffness;
    float SelfCollisionCullScale;
    FVector Damping;
    float Friction;
    float WindDragCoefficient;
    float WindLiftCoefficient;
    FVector LinearDrag;
    FVector AngularDrag;
    FVector LinearInertiaScale;
    FVector AngularInertiaScale;
    FVector CentrifugalInertiaScale;
    float SolverFrequency;
    float StiffnessFrequency;
    float GravityScale;
    FVector GravityOverride;
    bool bUseGravityOverride;
    float TetherStiffness;
    float TetherLimit;
    float CollisionThickness;
    float AnimDriveSpringStiffness;
    float AnimDriveDamperStiffness;

};

struct FClothPhysicalMeshData
{
    TArray<FVector> Vertices;
    TArray<FVector> Normals;
    TArray<uint32> Indices;
    TArray<float> MaxDistances;
    TArray<float> BackstopDistances;
    TArray<float> BackstopRadiuses;
    TArray<float> AnimDriveMultipliers;
    TArray<float> InverseMasses;
    TArray<FClothVertBoneData> BoneData;
    int32 MaxBoneWeights;
    int32 NumFixedVerts;
    TArray<uint32> SelfCollisionIndices;

};

struct FClothLODData
{
    FClothPhysicalMeshData PhysicalMeshData;
    FClothCollisionData CollisionData;

};

class UClothingAssetNv : public UClothingAssetCommon
{
    FClothConfig ClothConfig;
    TArray<FClothLODData> LODData;

};

class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
};

class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{

    void SetAnimDriveSpringStiffness(float InStiffness);
    void SetAnimDriveDamperStiffness(float InStiffness);
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
};

class UClothLODDataNv : public UClothLODDataBase
{
};

class UClothPhysicalMeshDataNv : public UClothPhysicalMeshDataBase
{
    TArray<float> MaxDistances;
    TArray<float> BackstopDistances;
    TArray<float> BackstopRadiuses;
    TArray<float> AnimDriveMultipliers;

};

struct FClothParameterMask_PhysMesh
{
    FName MaskName;
    MaskTarget_PhysMesh CurrentTarget;
    float MaxValue;
    float MinValue;
    TArray<float> Values;
    bool bEnabled;

};

#endif
