#ifndef UE4SS_SDK_War_HPP
#define UE4SS_SDK_War_HPP

#include "War_enums.hpp"

struct FItemInstance
{
    class AItemPickup* PickupCDO;
    class UItemComponent* ItemComponent;
    FName CodeName;
    int8 StackSize;
    uint16 Payload;
    uint16 HolderId;

};

struct FTooltipDetailText
{
    ETooltipDetailType TooltipDetailType;
    FText Text;

};

class AItemPickup : public AActor
{
    TSubclassOf<class UItemComponent> ItemComponentClass;
    int32 Encumbrance;
    int32 EquippedEncumbrance;
    bool bHideContent;
    FName CodeName;
    FText ChassisName;
    FText DisplayName;
    FText Description;
    class UTexture* Icon;
    FSlateBrush SubTypeIcon;
    EEquipmentSlot EquipmentSlot;
    EItemCategory ItemCategory;
    uint32 ItemFlagsMask;
    EItemProfileType ItemProfileType;
    EFactionId FactionVariant;
    ETechID TechID;
    FItemInstance ItemInstance;
    uint8 bIsLiquid;
    uint8 bIsLarge;
    uint8 bDoesNotDecay;
    uint8 bSupportsVehicleMounts;
    class UStaticMeshComponent* ItemMesh;
    class UBoxComponent* ItemBox;
    TArray<FTooltipDetailText> DescriptionDetails;

    void OnRep_ItemInstance();
};

class AGearPickup : public AItemPickup
{
};

class AAccessoryPickup : public AGearPickup
{
    EEquipmentSlot SlotToAccessorize;

};

class UAFKTimeoutComponent : public UActorComponent
{
    float TimeUntilTimeoutHours;

};

struct FHitNotify
{
    class USceneComponent* HitComponent;
    FVector_NetQuantize HitLocation;
    FVector_NetQuantizeNormal HitNormal;
    FVector_NetQuantizeNormal HitFromDirection;
    TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;
    float Damage;

};

class UAITurretComponent : public USceneComponent
{
    float MaximumRange;
    float MaximumReachability;
    FVector TriggerBoxOffset;
    FVector TriggerBoxExtents;
    bool bIs360ViewWhenMounted;
    TSubclassOf<class AImpactEffect> ImpactEffect;
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;
    TSubclassOf<class USimDamageType> DamageType;
    TSubclassOf<class USimDamageType> DamageTypeAlternate;
    class USoundCue* ShotSoundCue;
    class USoundCue* ShotAgainstVehicleSoundCue;
    class UParticleSystem* MuzzleFlashPS;
    float WeaponDamage;
    float WeaponDamageAgainstVehicles;
    float BestJitterConeHalfAngle;
    float WorstJitterConeHalfAngle;
    float FiringPeriod;
    float AttackDelayAgainstVehicles;
    float TimeToFullFireRateAndAccuracy;
    float EnemyPursueDuration;
    bool bIsMuzzleFlashStationary;
    float FiringConeAngle;
    TEnumAsByte<ECollisionChannel> EnemyType;
    TWeakObjectPtr<class AActor> CurrentEnemy;
    FHitNotify SimulatedHitNotify;
    bool bIsEnemyObscured;

    void OnRep_SimulatedHitNotify();
    void OnRep_IsEnemyObscured();
    void OnRep_CurrentEnemy();
};

class UAITurretsControllerComponent : public UActorComponent
{
    TArray<class UAITurretComponent*> AITurretComponents;
    TArray<class UOccupiableComponent*> OccupiableComponents;

};

struct FEncumbranceModifiers
{
    int32 BaselineEnc;
    int32 MaxEnc;
    float ZeroEncTurnRateMod;
    float ZeroEncMoveSpeedMod;
    float MaxEncTurnRateMod;
    float MaxEncWalkingSpeedMod;
    float OverEncWalkingSpeedMod;
    float OverEncTurnRateMod;
    float OverEncMaxStaminaDrainRateMod;
    float CurrentMaxSpeedModifier;
    float CurrentTurnModifier;
    float CurrentStaminaDrainModifier;

};

struct FEncumbranceManager
{
    bool bEnableEncumbranceModifiers;
    FEncumbranceModifiers EncumbranceModifiers;
    int32 CurrentEncumbrance;

};

class AWarCharacter : public ACharacter
{
    float ViewRadiusDegrees;
    float Temperature;
    uint8 ReplicatedTemperature;
    uint8 PlayerFlags;
    FEncumbranceManager EncumbranceManager;
    class UStealthComponent* StealthComponent;
    class ACalloutMarkerGhost* CalloutMarkerBeingPlaced;
    TArray<TWeakObjectPtr<AFlareExplosionEffect>> NearbyFlares;

    void ServerUseStructure(class AStructure* Structure);
    void ServerUnstuck();
    void ServerPlaceCalloutMarker(const FVector_NetQuantize& DestinationPosition);
    void OnRep_Temperature(const uint8 PreviousTemperature);
    void MulticastPlaceCalloutMarker(const int8 TeamId, const FVector_NetQuantize& DestinationPosition);
    bool IsPawnVisible(const class APawn* TargetPawn);
};

struct FShippableInfo
{
    EShippableType Type;

};

struct FArmourDirectionBoneNamesList
{
    EArmourDirection ArmourDirection;
    TArray<FName> BoneNamesList;

};

struct FFuelTank
{
    float RemainingFuel;
    float FuelCapacity;
    FName FuelItemCodeName;
    bool bCanRefuelFromTanker;
    bool bCanSiphon;

};

struct FHornData
{
    class USoundCue* Sound;
    float CooldownSeconds;

};

struct FVehicleMapIntelligenceProvider
{
    float TransmitPeriodSeconds;
    float DetectionRadius;

};

struct FTreadActorInfo
{
    class UPhysicalMaterial* PhysicalMaterial;
    TSubclassOf<class ADecalActor> TreadActor;

};

struct FTreadData
{
    int32 TrackMaterialIndices;
    float TrackLength;

};

struct FMuzzleInfo
{
    int32 GunnerIndex;
    int32 MuzzleIndex;
    FName SocketName;

};

struct FVehicleDeploymentLogic
{
    bool bRequiresDeployment;
    bool bRequiresHorizontalResetForUndeployment;
    float UndeployedAngle;
    bool bDeployed;
    float DeploymentTime;
    float HorizontalResetSpeed;

};

class ASimVehicle : public AWarCharacter
{
    FVector BuildOffset;
    FRotator BuildRotation;
    TWeakObjectPtr<class UPhysicalMaterial> RearTraceMaterial;
    TWeakObjectPtr<class UPhysicalMaterial> FrontTraceMaterial;
    TWeakObjectPtr<class AActor> FrontTraceActor;
    TWeakObjectPtr<class AActor> RearTraceActor;
    uint8 bInterpolatePitch;
    FText DisplayName;
    FText ChassisName;
    FText Description;
    class UTexture* Icon;
    ETechID TechID;
    FShippableInfo ShippableInfo;
    TSubclassOf<class AVehicleBuildSite> BuildSiteClass;
    EVehicleBuildType VehicleBuildType;
    EFactionId FactionVariant;
    FName CodeName;
    EVehicleProfileType VehicleProfileType;
    EVehicleMovementProfileType VehicleMovementProfileType;
    EArmourType ArmourType;
    bool bCanDriveOverTrenches;
    TArray<FArmourDirectionBoneNamesList> ArmourDirectionBoneNamesList;
    int32 Health;
    int32 TankArmour;
    uint8 Subsystems;
    uint8 ActiveModularMounts;
    FFuelTank FuelTank;
    uint8 bLimitInventoryToAmmo;
    uint8 bIsStockpilable;
    uint8 bIsReserveStockpiled;
    uint8 bIsVehicleOn;
    uint8 bIsVehicleLocked;
    uint8 bIsCommanderHatchOpen;
    uint8 bIsReservable;
    uint8 TeamId;
    float DepthCuttoffForSwimDamage;
    int32 CommanderIndex;
    class UStaticMeshComponent* DestroyedMesh;
    class UParticleSystemComponent* MinorDamagePS;
    class UParticleSystemComponent* MajorDamagePS;
    class UParticleSystem* DestroyedFX;
    class UParticleSystem* PenetrateFX;
    class USoundCue* PenetrateSoundCue;
    class UParticleSystem* PenetrateSmallFX;
    class USoundCue* PenetrateSmallSoundCue;
    class UParticleSystem* DeflectFX;
    class USoundCue* DeflectSoundCue;
    class USoundCue* DestroyedSoundCue;
    class USoundCue* BreakdownSoundCue;
    class USoundCue* BoostSoundCue;
    class USoundCue* CharatcerHitSound;
    class USoundCue* EnvironmentHitSound;
    class USoundCue* FrozenEnterSound;
    class UAudioComponent* DriveLoop;
    class UAudioComponent* BackUpSFXLoop;
    class USoundCue* LockSound;
    FHornData Horn;
    FVehicleMapIntelligenceProvider VehicleMapIntelligenceProvider;
    class UPlayerCameraRigComponent* CameraRigComponent;
    class USceneComponent* FrontAxleCastLocation;
    class USceneComponent* RearAxleCastLocation;
    class USceneComponent* FrontLeftRollCastLocation;
    class USceneComponent* FrontRightRollCastLocation;
    class USceneComponent* LeftSideTrackLocation;
    class USceneComponent* RightSideTrackLocation;
    class UBoxComponent* VehicleCollision;
    class UBoxComponent* PassengerArea;
    class UAFKTimeoutComponent* AFKTimeoutComponent;
    class UItemHolderComponent* ItemHolder;
    TArray<FItemInstance> ItemHolderItems;
    TArray<FTreadActorInfo> TreadInfo;
    float DefaultTreadTime;
    FTreadData Treads;
    class UCurveFloat* LinearSpeedToTurnSpeedMapCurve;
    class UCurveFloat* LinearSpeedToWaterTurnSpeedMapCurve;
    float BoostSpeedModifier;
    float BoostGasUsageModifier;
    TArray<FMuzzleInfo> MuzzleInfo;
    FVector BuildSpawnOffset;
    bool bCanMoveUnderBridges;
    EServerAnimTickMode ServerAnimTickMode;
    int32 CoalitionId;
    ETechTreeTier Tier;
    bool bIncludeInRecoverySaves;
    bool bDoPenetratingShotsReduceTankArmour;
    TArray<class UVehicleSeatComponent*> SeatComponents;
    FString LockingPlayerId;
    FString BuilderPlayerOnlineID;
    int32 VehiclesPerCrateBonusQuantity;
    FDateTime LastSavedTime;
    bool bSupportsFastAttachedMove;
    FVehicleDeploymentLogic DeploymentLogic;

    void VehicleCollisionTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ServerSwitchSeats(int32 NewSeatIndex);
    void ServerStartBoost();
    void ServerOnMount(class APlayerCharacter* PlayerCharacter);
    void ServerFire();
    void ServerDeployGunner();
    void OnRep_Tier();
    void OnRep_TankArmour();
    void OnRep_Subsystems(const uint8 PreviousSubsystems);
    void OnRep_ItemHolderItems();
    void OnRep_IsVehicleOn();
    void OnRep_IsCommanderHatchOpen();
    void OnRep_Health();
    void OnRep_FuelTank(const FFuelTank& PreviousFuelTank);
    void OnRep_ActiveModularMounts();
    void MulticastPlayLockFX();
    void MulticastPassengerExited(int32 SeatIndex);
    void MulticastPassengerEntered(int32 SeatIndex);
    void MulticastOnBoostEntered();
    void MulticastApplyPenetrateHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    void MulticastApplyFatalHit();
    void MulticastApplyDeflectHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    float GetTurnAngle();
    bool GetTopHatchOpen();
    void ClientEndActivityState(class ASimCharacter* CharacterToInterrupt);
    void BPOnVehicleOn(bool IsOn);
    void AllFire();
};

class ARWDSimVehicle : public ASimVehicle
{
    class UAudioComponent* IdleLoop;
    class UCurveFloat* DriveLoopPitchCurve;
    class UParticleSystemComponent* RearLeftTireDirtLowSpeedPS;
    class UParticleSystemComponent* RearLeftTireDirtHighSpeedPS;
    class UParticleSystemComponent* RearRightTireDirtLowSpeedPS;
    class UParticleSystemComponent* RearRightTireDirtHighSpeedPS;
    class UParticleSystemComponent* MainDirtLowSpeedPS;
    class UParticleSystemComponent* MainDirtHighSpeedPS;
    class UParticleSystemComponent* SkiddingDirtPS;
    class UParticleSystem* TireDirtLowSpeedTemplate;
    float TireFXLowSpeedThreshold;
    class UParticleSystem* TireDirtHighSpeedTemplate;
    float TireFXHighSpeedThreshold;
    class UParticleSystem* MainDirtLowSpeedTemplate;
    float MainFXLowSpeedThreshold;
    class UParticleSystem* MainDirtHighSpeedTemplate;
    float MainFXHighSpeedThreshold;
    class UParticleSystem* SkiddingDirtTemplate;
    float SkiddingFXSpeedThreshold;
    float SteeringAngle;

    void ServerMoveRwd(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMoveNoBaseRwd(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMoveDualRwd(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMoveDualNoBaseRwd(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ClientVeryShortAdjustPositionRwd(float Timestamp, FVector NewLoc, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FQuat NewRot, FVector NewAngularMomentum);
    void ClientAdjustPositionRwd(float Timestamp, FVector NewLoc, FVector NewVel, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FQuat NewRot, FVector NewAngularMomentum, float NewSteeringAngle);
};

class AAmbulance : public ARWDSimVehicle
{
};

struct FActivityStateInfo
{
    class UAnimMontage* ActivityMontage;
    bool IsLooping;
    bool bIsReversed;
    float Duration;
    FName SectionName;

};

class UItemComponent : public UActorComponent
{
    EEquippedWeaponGripType EquippedGripType;
    FActivityStateInfo ActivityStateInfos;
    class USoundCue* ReloadSoundCue;
    TSubclassOf<class UAnimInstance> AnimClass;
    FName MuzzleSocketName;
    FName CompatibleAmmoCodeName;
    bool SafeItem;
    class USkeletalMesh* AttachedItemMesh;
    FVector MeshOffset;
    FRotator MeshRotation;
    class UStaticMesh* GroundItemMesh;
    ECharacterActivityState GroundItemActivityState;
    FVector GroundItemOffset;
    bool bRequiresCoverOrLowStanceToInvoke;
    bool bAllowsMovementDuringReload;

    void ClientSyncAmmo(int32 CurrentAmmo);
};

class UMiscItemComponent : public UItemComponent
{
    bool bIsEquipped;

    void OnRep_IsEquipped();
};

class UAmmoBackpackItemComponent : public UMiscItemComponent
{
    FName ProvidedAmmoName;

};

class ABasicItemPickup : public AItemPickup
{
};

class AAmmoPickup : public ABasicItemPickup
{
};

struct FClaimStatus
{
    bool bIsEnabled;
    bool bCanBeDemolished;
    bool bCanBuildSiteBeDemolished;
    EFactionId FactionId;
    int32 SquadId;
    int64 ClaimTime;
    int64 OriginalBuildTime;
    int32 DemolishDurationHours;

};

class AStructure : public AActor
{
    TArray<FName> ConversionCodeNames;
    FName CodeName;
    FText DisplayName;
    EStructureProfileType ProfileType;
    EArmourType ArmourType;
    class UArrowComponent* ArrowComponent;
    class UBoxComponent* UseAreaBox;
    class UBoxComponent* KillVolume;
    class UParticleSystem* DestroyedFX;
    class USoundCue* DestroyedSoundCue;
    class UItemHolderComponent* ItemHolder;
    TArray<FItemInstance> ItemHolderItems;
    ETechID TechID;
    TArray<ETechComponentID> TechComponentIDs;
    class UGarrisonComponent* GarrisonComponent;
    class UInfrastructureComponent* InfrastructureComponent;
    class UMeshVisibilityComponent* MeshVisibilityComponent;
    TSubclassOf<class UMountComponent> MountComponent;
    int32 MaxHealth;
    int32 Health;
    EDynamicTier DynamicTier;
    EMapIconType MapIconType;
    FName UpgradeStructureCodeName;
    FVector DropLocationOffset;
    bool bRotateDropLocation;
    bool IsVaultable;
    ESimScreen ScreenToUse;
    float DecayRemainingTime;
    EMapIntelligenceType MapIntelligenceType;
    uint8 StructureFlags;
    EStructureNetRelevancySize StructureNetRelevancySize;
    bool bIsStockpilable;
    bool bIsReserveStockpiled;
    bool bIsBuiltNearBorder;
    bool bIgnoresRapidDecay;
    bool bIsPrototype;
    FString BuilderPlayerOnlineID;
    FString BuilderName;
    FClaimStatus ClaimStatus;
    bool bAddLandscapeHolesOnBeginPlay;
    bool bRemoveLandscapeHolesOnDestroy;
    bool bHasLandscapeHoles;
    bool bHasRemovedLandscapeHoles;
    TWeakObjectPtr<class AStructureIsland> Island;
    TArray<class UMultiplexedStaticMeshComponent*> MultiplexedStaticMeshComponents;
    TArray<class UMultiplexedSkeletalMeshComponent*> MultiplexedSkeletalMeshComponents;
    class UStealthComponent* StealthComponent;
    float StructureFlameCountFactor;
    int32 DecaySupplyDrain;
    EFireIntensity FireIntensity;
    float PreMitigationFireDamagePerTick;
    class UTemperatureModifierBoxComponent* BurningHeatArea;
    TArray<class AFlameActor*> FlameActors;
    class UParticleSystemComponent* FireSpreadFX;

    void Use(class AWarCharacter* UsingPlayer);
    void UpdateFireSpreadWindInfo();
    void OnRep_IsPrototype();
    void OnRep_Health();
    void OnRep_FireIntensity(EFireIntensity Previous);
    void OnRep_DynamicTier();
    void MulticastOnVehicleDrivingOverDamage();
    bool IsCollidingWithDuplicate();
    class UTechTreeComponent* GetTechTreeComponent();
    void BPOnVehicleDrivingOverDamage();
    void BPOnFireIntensityReduced(int32 OldIntensity, int32 NewIntensity);
    void BPOnFireIntensityIncreased(int32 OldIntensity, int32 NewIntensity);
};

struct FPathSocket
{
    uint8 ID;
    float PackedAlpha;
    TWeakObjectPtr<class UBuildSocketComponent> Socket;
    FTimerHandle CleanupHandle;

};

struct FConnectorConfiguration
{
    int8 SocketIndex;
    FVector TargetLocation;
    FQuat TargetRotation;
    bool bIsUnderRoad;
    uint8 CustomData;
    EConnectorConfigurationFlag Flags;

};

class ABuildableStructure : public AStructure
{
    TSubclassOf<class UBuildSocketComponent> SnappablePathSocketClass;
    TArray<FPathSocket> PathSockets;
    EFortTier Tier;
    uint32 ModificationMask;
    bool bDisableModificationSlotValidation;
    bool bOnlyMigratePipesModification;
    bool bReadOnlyModifications;
    TArray<class UModificationSlotComponent*> ModificationSlots;
    float ProceduralUseVolumeFactor;
    FConnectorConfiguration ConnectorConfiguration;
    bool bDoUpgradeObstructionCheck;
    TArray<class UPhysicalMaterial*> NoBuildPhysicalMaterials;
    bool bIgnoreNoBuildAreas;
    bool bIsBuiltOnLandscape;
    bool bBuildOnBridges;
    bool bBuildOnWater;
    bool bIsBuiltOnFoundation;
    bool bIsPartiallyBuiltOnFoundation;
    bool bAllowFloating;
    bool bLinearAttachment;
    float LinearAttachmentTolerance;
    int32 MaxAttachmentGroupSize;
    EMapBoundaryBuildRule MapBoundaryBuildRule;
    bool bIsConnector;
    bool bIsManualConnector;
    float ConnectorMinLength;
    float ConnectorMaxLength;
    float MinLengthMaxHealthModifier;
    float ConnectorMinWidth;
    bool bConnectorCanSnapUnderRoads;
    TSubclassOf<class ABuildGhost> BuildGhostClass;
    TSubclassOf<class ABuildSite> BuildSiteClass;
    TSubclassOf<class AStructure> BaseStructureClass;
    bool bClearModificationsOnDowngrade;
    FText Description;
    FShippableInfo ShippableInfo;
    class UTexture* Icon;
    EBuildCategory BuildCategory;
    EBuildLocationType BuildLocationType;
    float DestroyedDamageRadius;
    FVector DestroyedDamageExtent;
    FVector DestroyedDamageOffset;
    bool bDropsLargeMaterialsWhenDestroyed;
    bool bIsFillStructureProxy;
    float MinDistanceToSameStructure;
    bool bIsVehicleProxy;
    bool bRequiresVehicleToBuild;
    bool bRequiresShovelToBuild;
    bool bIsInitiallyDestroyed;
    EFactionId FactionVariant;
    TArray<FTooltipDetailText> DescriptionDetails;
    bool bUsesImpactsMaterial;

    void OnRep_PathSockets();
    void OnRep_ModificationMask(const uint32 PreviousModificationMask);
};

class ATeamStructure : public ABuildableStructure
{
    uint8 TeamId;
    bool bAllowUseByEnemy;
    bool bCanBeFlaggedForDisruptivePlacement;
    bool bCanDecayBePreventedBySupplyStation;

    void OnRep_TeamIdNotify();
    void BPSetTeamVisuals(const int32 VisualTeamId);
};

class AAmmoRoom : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    uint8 RequiredSquadMembers;
    int32 SquadId;

};

class AAmphibiousVehicle : public ARWDSimVehicle
{
    class UParticleSystemComponent* FrontLeftWaterEmitter;
    class UParticleSystemComponent* FrontRightWaterEmitter;
    class UParticleSystemComponent* BackRightWaterEmitter;
    class UParticleSystemComponent* BackLeftWaterEmitter;
    class UParticleSystemComponent* WakeWaterEmitter;
    class UAudioComponent* WaterDriveLoop;

};

class AWarPainVolume : public AActor
{
    float Damage;
    float Radius;
    TSubclassOf<class UDamageType> DamageType;

};

class AAntiZombiePainVolume : public AWarPainVolume
{
};

struct FPayloadMeshes
{
    int32 GunnerIndex;

};

class AArmoredCar : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;
    FName StashedAmmoType;
    int32 StashedAmmo;
    FPayloadMeshes PayloadMeshes;

    void OnRep_StashedAmmo();
};

class AArmourProfiles : public AInfo
{
    class UDataTable* DataTable;

};

class AArtillery : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;
    int32 StashedAmmo;
    FName StashedAmmoType;

};

class UMountComponent : public UActorComponent
{
    FText DisplayName;
    FName AmmoName;
    class UTexture2D* Icon;
    EEquippedWeaponGripType EquippedGripType;
    FActivityStateInfo ActivityStateInfos;
    FName RotationBaseSocketName;
    bool bIsAmmoStackable;
    bool bMustBeStoppedToInvoke;
    bool bUseCharacterRotationForAim;
    uint8 bIsStationary;
    uint8 bUpdateCharacterRotation;
    EVehicleSubsystem LinkedVehicleSubsystem;
    class AAmmoPickup* CachedAmmoPickupCDO;
    bool bIsDeployedGunner;
    uint8 bIsEquipped;

    void OnRep_IsEquipped();
    void ClientSyncAmmo(int32 CurrentAmmo);
};

struct FMultiAmmo
{
    int32 Ammo;
    FName AmmoType;
    FName DesiredAmmoType;
    TArray<FName> CompatibleAmmoNames;

};

class UMultiAmmoVehicleMountComponent : public UMountComponent
{
    bool bRequiresExternalReload;
    FMultiAmmo MultiAmmo;

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
};

struct FActivityStateChange
{
    uint8 LastAckedSequence;
    uint8 Sequence;
    ECharacterActivityState State;

};

class UArtilleryGunnerMountComponent : public UMultiAmmoVehicleMountComponent
{
    TSoftClassPtr<ARocketLauncherProjectileDummy> DummyProjectileActorType;
    class USoundCue* ReloadSoundCue;
    class UParticleSystem* MuzzleFlashPS;
    float TelegraphOffset;
    float DamageDelay;
    float FireDelay;
    float SpoolupDelay;
    float FiringAngleOverride;
    bool bCanRotate;
    bool bUseClampTrjectoryToDistanceHack;
    bool bIsAutomaticFire;
    bool bHighArc;
    float FlightObstructionCheckDistance;

    void ServerStopInvoke();
    void ServerSetPitch(float Pitch);
    void ServerFireShell(FActivityStateChange ActivityStateChange);
    void MulticastPlayFiringFX(const class AExplosiveAmmoPickup* AmmoPickupCDO);
};

struct FTrainInfo
{
    class ARailVehicle* Front;
    class ARailVehicle* Back;

};

struct FRepRailwayMovement
{
    class ARailwayTrack* FrontTrack;
    class ARailwayTrack* RearTrack;
    class ARailVehicle* Actor;
    float LinearMomentum;
    float PackedPrimaryAlpha;

};

struct FRepTrainMovement
{
    TArray<FRepRailwayMovement> Cars;
    float LastUpdateTime;
    int8 Acceleration;
    uint8 bIsBoosting;

};

struct FRailParticleSystem
{
    class UParticleSystemComponent* System;
    float OriginalYaw;
    float CurrentYaw;

};

class ARailVehicle : public ASimVehicle
{
    TArray<class UPrimitiveComponent*> CustomSweepComponents;
    bool bNeedsSkelmeshTickForMovement;
    float WheelBase;
    bool bIsPowered;
    ETrackGauge TrackGauge;
    FTrainInfo TrainInfo;
    FRepTrainMovement RepTrainMovement;
    class URailCouplerUseComponent* FrontCoupler;
    class URailCouplerUseComponent* RearCoupler;
    class UCableComponent* FrontCableComponent;
    class UMaterialInterface* CouplerCableMaterial;
    class UAudioComponent* IdleLoop;
    class UAudioComponent* BrakeLoop;
    class UAudioComponent* FrontClacks;
    class UAudioComponent* RearClacks;
    FString SavedFrontTrackName;
    FString SavedRearTrackName;
    float SavedFrontTrackAlpha;
    FString SavedLinkedFrontCarName;
    TArray<FRailParticleSystem> BrakingSystems;
    TArray<FRailParticleSystem> DrivingSystems;
    class ARailwayTrack* LastFrontBogieTrack;
    class ARailwayTrack* LastRearBogieTrack;
    bool bIsBoosting;
    float BorderTravelOverrideExtent;

    void ServerRequestTrainInfo();
    void ServerRailMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, class ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode);
    void ServerRailMove(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, class ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode);
    void OnRep_RailwayMovement();
    void ClientUpdateTrainInfo(const TArray<class ARailVehicle*>& RailVehicles);
    void ClientRailAdjustPosition(float Timestamp, uint8 ServerMovementMode, const TArray<FRepRailwayMovement>& NewReplicatedMovement);
};

class AInfantryRailVehicle : public ARailVehicle
{
    FVector2D GunnerYawAndPitch;
    FName StashedAmmoType;
    int32 StashedAmmo;
    int32 RightGunnerIndex;
    int32 LeftGunnerIndex;
    int32 MainGunnerIndex;

    void OnRep_GunnerYawAndPitch();
};

class AArtilleryRailVehicle : public AInfantryRailVehicle
{
    class UParticleSystemComponent* FireShellParticleSystem;
    class UParticleSystemComponent* EjectShellParticleSystem;
    float InitialDelay;
    float ExplosionDelay;
    float FuelPowerForRotation;
    float FuelPowerForFiring;

};

struct FWeaponShotSFX
{
    class USoundCue* FiringLoop;
    class USoundCue* FiringStopped;

};

class UHeavyMachineGunItemComponent : public UItemComponent
{
    class USkeletalMesh* SkeletalMesh;
    TSubclassOf<class UCameraShake> FireCameraShake;
    TSubclassOf<class AImpactEffect> ImpactEffect;
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;
    FWeaponShotSFX WeaponShotSFX;
    class USoundCue* ShotSoundCue;
    class UParticleSystem* MuzzleFlashPS;
    float FiringRate;
    bool bSpawnFakeTracerFX;
    ECoverMitigationType MitigationType;
    bool bRequiresOpenVehiclePlatform;
    bool bCheckForOpenSpaceWhenFiring;
    bool bCanFireFromVehicle;
    bool bIsEquipped;
    FHitNotify SimulatedHitNotify;

    void ServerStopInvoke();
    void ServerStartInvoke(FActivityStateChange ActivityStateChange);
    void OnRep_SimulatedHitNotify();
    void OnRep_IsEquipped();
};

class UAssaultRifleComponent : public UHeavyMachineGunItemComponent
{
    FName SingleShotCodeName;
    FName SingleShotAmmoCodeName;
    FText SingleShotDisplayName;
    class USoundCue* ChangeShootingModeSoundCue;
    FActivityStateInfo FiringActivityStateInfoSemiMode;
    float SingleShotScopeRange;
    bool bIsInSingleShotMode;

    void ServerToggleFireMode();
};

struct FAssemblyItem
{
    FName CodeName;
    int32 Duration;
    FName RequiredCodeName;

};

struct FFuelQuantity
{
    FName CodeName;
    float Quantity;

};

struct FAssemblyModification
{
    TArray<FAssemblyItem> AssemblyItems;
    FFuelQuantity FuelCost;

};

struct FPowerGridInfo
{
    int32 PowerDelta;
    int32 MaxConnections;
    int32 PowerProvided;
    int32 PowerConsumed;
    TWeakObjectPtr<class AActor> Connections;
    FName ConnectionNames;

};

class AAssemblyStation : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UModificationSlotComponent* UpgradeSlotComponent;
    class UBuildSocketComponent* PowerSocket;
    class UFacilityLightComponent* LightComponent;
    class UBoxComponent* GarageFootprintComponent;
    class USceneComponent* TransferLocation;
    TArray<FAssemblyItem> AssemblyItems;
    FFuelQuantity FuelCost;
    TMap<class EFortModificationType, class FAssemblyModification> Modifications;
    TArray<FFuelTank> FuelTanks;
    FPowerGridInfo PowerGridInfo;
    FString ProducerOnlineID;
    bool bHasParkingSpot;
    bool bAllowsTierUpgrades;
    bool bSupportsExtraLargeShippables;
    float UpgradeCostMultiplier;
    TWeakObjectPtr<class ABuildSite> BuildSite;

    void OnRep_PowerGridInfo();
};

class IAssignableSpawnPoint : public IInterface
{
};

struct FMuzzleOffsetVector_NetQuantize : public FVector
{
};

struct FCharacterInvokeInfo
{
    FVector_NetQuantize ImpactPoint;
    uint32 RandomSeed;
    FMuzzleOffsetVector_NetQuantize MuzzleOffset;

};

class UHitScanWeaponComponent : public UItemComponent
{
    TSubclassOf<class UCameraShake> FireCameraShake;
    TSubclassOf<class AImpactEffect> ImpactEffect;
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;
    class USoundCue* ShotSoundCue;
    class USoundCue* ShotNoAmmoSoundCue;
    class USoundCue* ClipEmptiedSoundCue;
    class UParticleSystem* MuzzleFlashPS;
    class USkeletalMesh* SkeletalMesh;
    uint8 TotalShotsFired;
    float BurstFiringRate;
    ECoverMitigationType MitigationType;
    bool bCanFireFromVehicle;
    bool bIsEquipped;
    FHitNotify SimulatedHitNotify;

    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    void OnRep_SimulatedHitNotify();
    void OnRep_IsEquipped();
};

class UATRifleComponent : public UHitScanWeaponComponent
{
};

class ABackpackItemPickup : public AItemPickup
{
    TArray<class USkeletalMesh*> BackpackMeshes;

};

class UBadWordFilter : public UObject
{
};

class UBandagesComponent : public UItemComponent
{
    class USkeletalMesh* BandagesMesh;
    class USoundCue* BanadagesSoundCue;
    bool IsEquipped;

    void ServerUseBandages(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
};

class ABarbedWire : public ABuildableStructure
{
};

class UBarbedWireComponent : public UBoxComponent
{
};

struct FRampData
{
    FVector Start;
    FVector End;
    float MinimumAngle;
    float MaximumAngle;

};

struct FStockpileEntry
{
    FName CodeName;
    int16 Quantity;

};

struct FReplicatedShippableData
{
    uint8 Payload;
    uint8 AltPayload;
    uint8 Temperature;
    TArray<FStockpileEntry> Items;

};

struct FSavedShippableData
{
    FName CodeName;
    FName ContainedCodeName;
    TArray<FItemInstance> Items;
    TArray<FStockpileEntry> StoredItems;
    TArray<FStockpileEntry> ItemCrates;
    TArray<FStockpileEntry> ReservableItemCrates;
    float Fuel;
    FName FuelType;
    uint8 Payload;
    uint8 AltPayload;
    uint8 Temperature;
    uint8 TeamId;
    bool bIsReservable;
    int32 TankArmour;

};

class ABarge : public ASimVehicle
{
    FRampData Ramp;
    class UBoxComponent* RampDriveVolume;
    class UParticleSystemComponent* FrontLeftWaterEmitter;
    class UParticleSystemComponent* FrontRightWaterEmitter;
    class UParticleSystemComponent* BackRightWaterEmitter;
    class UParticleSystemComponent* BackLeftWaterEmitter;
    class UParticleSystemComponent* WakeWaterEmitter;
    class UAudioComponent* WaterDriveLoop;
    class UBoxComponent* KillVolume;
    class UBoxComponent* WorkVolume;
    TEnumAsByte<EBargeDockedState> DockedState;
    float RampAngle;
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UMeshComponent* DynamicMeshComponent;
    class USceneComponent* TransferLocation;
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;
    FName CurrentShippable;
    FReplicatedShippableData ShippableData;
    FSavedShippableData SavedData;

    void ServerToggleRamp(const bool bIsLanding);
    void OnRep_ShippableData();
    void OnRep_DockedState();
    void OnRep_CurrentShippable();
};

class USimVehicleAnimInstance : public UAnimInstance
{
    float Speed;
    float RotationInPlaceSpeed;
    float TurnAngle;
    float WheelRadius;
    float InertialRoll;
    float InertialPitch;
    bool bIsDestroyed;
    bool bIsTopHatchOpen;
    float LastYaw;
    float LastAngularVelocity;
    float TrackDisabledIntensity;

};

class UBargeAnimInstance : public USimVehicleAnimInstance
{
    bool IsBargeOpen;
    float RampAngle;
    float RampExtension;
    float PropellerSpeed;
    int32 PropellerAnimIndex;

};

class ATunnelNode : public ATeamStructure
{
    FVector ObstructionCheckOverrideExtents;
    ETunnelNodeType TunnelNodeType;
    bool bCanBeHidden;
    ETunnelConnectionState ConnectionState;
    TArray<class ATunnelNode*> ConnectedTunnelNodes;

    void OnRep_ConnectionState();
    void BPSetTunnelConnectionStateVisuals(const ETunnelConnectionState NewTunnelConnectionState);
};

struct FDecayInfo
{
    int16 GSConsumedLastHour;
    int16 BSConsumedLastHour;
    float SupplySurplusBonus;

};

struct FSpawnPoint
{
    uint32 ID;

};

struct FSpawnPoints
{
    FSpawnPoint SpawnPointID;
    TArray<class USpawnPointComponent*> HighPrioritySpawns;
    TArray<class USpawnPointComponent*> LowPrioritySpawn;

};

class ABase : public ATunnelNode
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UTechTreeComponent* TechTreeComponent;
    class UAudioComponent* SirenLoop;
    ESpawnPointType SpawnPointType;
    int32 GarrisonLevel;
    int32 BaseTunnelConnectionRange;
    FDecayInfo DecayInfo;
    FSpawnPoints SpawnPoints;

};

struct FCodeNameSmallQuantity
{
    FName CodeName;
    int16 Quantity;

};

struct FResourceAmounts
{
    FCodeNameSmallQuantity Resource;
    TArray<FCodeNameSmallQuantity> OtherResources;

};

class ABuildSite : public AStructure
{
    FResourceAmounts DefaultResourceRequirements;
    FResourceAmounts ResourceRequirements;
    bool BlocksPassiveDefences;
    bool bIgnoreStructureDeathAoE;
    bool bAllowStanding;
    bool bIsNeutral;
    uint8 TeamId;
    FString OwnerWorldPlayerId;
    int32 ResourcesPerBuildCycle;
    bool bRequiresVehicleToBuild;
    bool bRequiresShovelToBuild;
    bool bIsBuiltAutomatically;
    bool bIsReservableWhenBuiltAutomatically;
    ETechTreeTier Tier;
    FVector PrototypeDropLocation;
    float RemainingExpiryTime;
    TArray<class UShapeComponent*> PawnCheckVolumes;
    class UMaterialInterface* BuildSiteMaterial;

    void OnRep_ResourceRequirements();
    void OnRep_DefaultResourceRequirements();
};

struct FModificationSlotMigration
{
    uint8 PreviousComponentDirection;
    EFortModificationType ModificationType;
    FName SlotName;

};

class AStructureBuildSite : public ABuildSite
{
    FName StructureBeingBuiltCodeName;
    TArray<class UModificationSlotComponent*> ModificationSlots;
    uint32 ModificationMask;
    bool bBaseStructureHadPipes;
    TArray<FModificationSlotMigration> ModificationSlotMigrations;
    TArray<FName> DisabledSockets;
    class UBoxComponent* ObstructionCheckVolume;
    bool bIsUpgrade;
    TSubclassOf<class AStructure> BaseStructureClassToRespawn;
    int32 BaseStructureHealth;
    uint8 BaseStructureTeamId;
    bool bHasSavedRotation;
    FQuat BaseStructureRotation;
    float DecayStartHours;
    float DecayDurationHours;
    FString PreviousBuilderOnlineID;
    FString PreviousBuilderName;
    FConnectorConfiguration ConnectorConfiguration;

    void OnRep_IsUpgrade();
};

class ABaseBuildSite : public AStructureBuildSite
{
    bool bIsStaticBase;
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UTechTreeComponent* TechTreeComponent;
    ESpawnPointCategory SpawnPointCategory;
    FSpawnPoints SpawnPoints;
    bool bIsFirstTier;
    TSubclassOf<class ATunnelNodeProxy> TunnelNodeProxyClass;
    class ATunnelNodeProxy* TunnelNodeProxy;
    bool bIsBaseUpgrade;
    int32 TunnelConnectionRange;

};

struct FBuildStyle
{
    FSlateBrush Categories;

};

struct FContainerStyle
{
    float HeaderHeight;
    FSlateBrush HeaderImage;
    FSlateBrush VeryLightContentImage;
    FSlateBrush LightContentImage;
    FSlateBrush ContentImage;
    FSlateBrush DarkContentImage;
    FSlateBrush CategoryImage;

};

struct FFacilityStyle
{
    FSlateBrush ArrowBrush;
    FSlateBrush PowerBrush;
    FButtonStyle DisabledButtonStyle;
    FButtonStyle EnabledButtonStyle;

};

struct FFuelStyle
{
    FButtonStyle Button;

};

struct FButtonStyles
{
    FButtonStyle OrangeHighlight;
    FButtonStyle NoBGOrangeHighlight;
    FButtonStyle Grey;
    FButtonStyle Red;

};

struct FTextStyles
{
    FTextBlockStyle ColumnLableTextStyle;
    FTextBlockStyle HeaderTextStyle;
    FTextBlockStyle Regular10ptTextStyle;
    FTextBlockStyle Regular12ptTextStyle;
    FTextBlockStyle Regular14ptTextStyle;
    FTextBlockStyle Regular16ptTextStyle;
    FTextBlockStyle Regular24ptTextStyle;
    FTextBlockStyle Bold10ptTextStyle;
    FTextBlockStyle Bold12ptTextStyle;
    FTextBlockStyle Italic10ptTextStyle;
    FTextBlockStyle Italic12TextStyle;
    FLinearColor HighlightColor;

};

struct FLogStyle
{
    FSlateColor RetrieveColor;
    FSlateColor SubmitColor;
    FSlateColor ItemColor;
    FSlateColor QuantityColor;

};

struct FQueueStyle
{
    FSlateBrush ProductionArrowRightBGImage;
    FSlateBrush ProductionArrowRightFillImage;
    FSlateBrush ProgressBarBGImage;
    FSlateBrush ProgressBarFillImage;
    FSlateBrush EmptyButtonImage;
    FButtonStyle AddButtonStyle;
    FButtonStyle CancelButtonStyle;
    FButtonStyle SubmitButtonStyle;
    FButtonStyle PickupButtonStyle;
    FButtonStyle UpgradeButtonStyle;
    FSlateBrush TimerIcon;
    FSlateBrush CostBackgroundStyle;
    FComboBoxStyle AccessLevelStyle;
    FSlateColor QueueTimerColor;

};

struct FIconsStyle
{
    FSlateBrush ShowAllItems;
    FSlateBrush SmallArms;
    FSlateBrush HeavyArms;
    FSlateBrush HeavyAmmo;
    FSlateBrush Utility;
    FSlateBrush Medical;
    FSlateBrush Supplies;
    FSlateBrush Uniforms;
    FSlateBrush Vehicles;
    FSlateBrush Structures;
    FSlateBrush BasicMaterials;
    FSlateBrush RefinedMaterials;
    FSlateBrush ExplosiveMaterials;
    FSlateBrush RefinedFuel;
    FSlateBrush SmallGarrison;
    FSlateBrush LargeGarrison;
    FSlateBrush AdvancedMining;
    FSlateBrush Encumbrance;
    FSlateBrush Personal;
    FSlateBrush Squad;
    FSlateBrush Orders;
    FSlateBrush Time;
    FSlateBrush Supporters;
    FSlateBrush GarrisonSupplies;
    FSlateBrush BunkerSupplies;
    FSlateBrush CratesSubCategory;
    FSlateBrush WeaponsStructures;
    FSlateBrush Reservable;

};

struct FInputStyle
{
    FSlateBrush PageUp;
    FSlateBrush PageDown;

};

struct FInventoryStyle
{
    FSlateBrush EncumbranceBorderBrush;
    FLinearColor LowEncumbranceColor;
    FLinearColor MediumEncumbranceColor;
    FLinearColor HighEncumbranceColor;

};

struct FItemStyle
{
    float Size;
    FSlateColor EnabledColor;
    FSlateColor DisabledColor;
    FSlateColor CornerWidgetColor;
    float CornerWidgetWidth;
    float CornerWidgetHeight;
    float CornerWidgetPadding;

};

struct FItemSubtypeStyle
{
    float Size;
    float SecondaryHudSize;
    float Padding;
    FSlateColor IconColour;

};

struct FStatusStyle
{
    FSlateBrush BleedingImage;
    FSlateBrush BleedingModerateImage;
    FSlateBrush BleedingCriticalImage;
    FSlateBrush EncumberedImage;
    FSlateBrush EncumberedModerateImage;
    FSlateBrush EncumberedCriticalImage;
    FSlateBrush HiddenImage;
    FSlateBrush HiddenModerateImage;
    FSlateBrush HiddenCriticalImage;
    FSlateBrush WoundedImage;
    FSlateBrush WoundedModerateImage;
    FSlateBrush WoundedCriticalImage;
    FSlateBrush LowHealthImage;
    FSlateBrush LowHealthModerateImage;
    FSlateBrush LowHealthCriticalImage;
    FSlateBrush LockedImage;
    FSlateBrush UnlockedImage;

};

struct FActionStyle
{
    EActionType Type;
    FButtonStyle ButtonStyle;
    FText ToolTipText;
    FText ToolTipDescription;

};

struct FActionsStyle
{
    TArray<FActionStyle> Styles;

};

struct FColorsStyle
{
    FSlateBrush ButtonBackground;
    FButtonStyle Button;

};

struct FDialogBoxStyle
{
    FSlateBrush BackgroundImage;
    FTextBlockStyle MessageTextStyle;
    FEditableTextBoxStyle TextInputBoxStyle;
    FTextBlockStyle ButtonTextStyle;
    FSlateColor BackgroundFillColour;
    float BackgroundBlurStrength;

};

struct FProgressBarButtonStyle
{
    FSlateBrush BGImage;
    FSlateBrush FillImage;
    FButtonStyle Button;

};

struct FHelpToolTipStyle
{
    FButtonStyle Button;
    FSlateBrush BackgroundImage;

};

struct FRocketSiteStyle
{
    FSlateBrush SectionBGImage;
    FSlateBrush ProgressBarBGImage;
    FSlateBrush ProgressBarFillImage;
    FSlateBrush ProgressBarMarker;
    FLinearColor ToolTipTextColor;

};

struct FStaticCheckBoxStyle
{
    FSlateBrush BGImage;
    FSlateBrush FGImage;

};

struct FInteractContextMenuStyle
{
    FSlateBrush LadderIcon;
    FSlateBrush ServerTravelPortalIcon;
    FSlateBrush ReadableSignIcon;

};

struct FListViewStyle
{
    FHeaderRowStyle ListHeaderRowStyle;

};

struct FFactionSelectStyle
{
    FButtonStyle ColonialButtonStyle;
    FButtonStyle WardenButtonStyle;
    FText ColonialHeader;
    FText WardenHeader;
    FSlateColor FactionHeadTextColour;
    FText ColonialFlavourText;
    FText WardenFlavourText;
    FSlateColor QueueWarningImageColour;

};

struct FLobbyStyle
{
    FSlateBrush ColonialImage;
    FSlateBrush WardenImage;
    FSlateColor TitleTextColour;
    FButtonStyle EditButton;

};

struct FSquadStyle
{
    FButtonStyle CreateButton;
    FButtonStyle LeaveButton;
    FButtonStyle SquadPanelToggleOnButton;
    FButtonStyle SquadPanelToggleOffButton;
    FButtonStyle SquadPanelActivateButton;
    FSlateBrush SquadActiveBrush;
    FCheckBoxStyle PrivacyCheckBox;
    FSlateBrush PrivateIcon;
    FSlateBrush LeaderIcon;
    FSlateColor SquadNameColour;
    FSlateColor LeaderNameColour;
    FSlateColor InactiveLeaderNameColour;
    FSlateColor MemberNameColour;
    FSlateColor InactiveMemberNameColour;
    FButtonStyle SquadListElementButton;

};

struct FTechTreeLineStyle
{
    FSlateBrush SolidColour;

};

struct FTechTreeStyle
{
    FTechTreeLineStyle LineStyle;
    FTechTreeLineStyle LineHighlightStyle;
    FSlateBrush Separator;
    FSlateBrush Status;
    FSlateBrush Locked;
    FSlateBrush Unlocked;
    FSlateBrush Unknown;
    FSlateBrush LevelBG;
    FSlateBrush CurrentLevelBG;
    FSlateBrush TechLevels;

};

struct FHospitalStyle
{
    FSlateBrush RecoveryProgressBackgroundImage;
    FSlateBrush RecoveryProgressFillImage;

};

struct FInfrastructureStyle
{
    FSlateBrush Icon;
    FText Name;

};

struct FTechTreeComponentUIItem
{
    FText NameOverride;
    FText DescriptionOverride;
    FSlateBrush FadedBrush;
    FSlateBrush Brush;
    TArray<FName> CodeNames;

};

struct FInfrastructuresStyle
{
    FInfrastructureStyle Entries;
    FTechTreeComponentUIItem Items;
    FSlateBrush VoteBrush;

};

struct FWarStandardColour
{
    FLinearColor Orange;
    FLinearColor Colonial;
    FLinearColor Warden;
    FLinearColor Green;
    FLinearColor Red;
    FLinearColor Yellow;
    FLinearColor Beige;

};

struct FReserveStockpileActionStyle
{
    FButtonStyle ButtonStyle;
    FText ToolTipText;
    FText ToolTipDescription;

};

struct FReserveStockpileStyle
{
    FReserveStockpileActionStyle ReleaseButtonStyle;
    FReserveStockpileActionStyle MakeHiddenButtonStyle;
    FReserveStockpileActionStyle MakeVisibleButtonStyle;
    FReserveStockpileActionStyle ViewAccessCodeButtonStyle;
    FReserveStockpileActionStyle CopyAccessCodeButtonStyle;
    FSlateBrush TabIcon;

};

struct FWarAchievementConfig
{
    EWarAchievementType Type;
    FSlateBrush Icon;
    FText DisplayName;
    FText Description;

};

struct FWarAchievementsStyle
{
    TArray<FWarAchievementConfig> WarAchievementConfigList;
    FSlateBrush ProgressBarFill;

};

struct FGeneralPurposeIcons
{
    FSlateBrush DownwardTriangle;

};

struct FWeatherEventStyle
{
    FSlateBrush MapIcon;
    FText Name;
    FText Description;

};

struct FWeatherStyle
{
    FWeatherEventStyle EventStyles;
    FSlateBrush RadiusBrush;
    FSlateBrush MuddyIcon;
    FSlateBrush BurningIcon;
    FSlateBrush HotIcon;
    FSlateBrush NormalizingIcon;
    FSlateBrush SlowlyNormalizingIcon;
    FSlateBrush FreezingIcon;
    FSlateBrush CriticalFreezingIcon;

};

struct FListeningAreaStyle
{
    FSlateBrush RadiusBrush;

};

struct FBaseStyle : public FSlateWidgetStyle
{
    FBuildStyle BuildStyle;
    FContainerStyle ContainerStyle;
    FFacilityStyle FacilityStyle;
    FFuelStyle FuelStyle;
    FSlateBrush ListEntryBGImage;
    FSlateBrush ListEntryHighlightBGImage;
    FSlateBrush AlternatingRowLightColour;
    FSlateBrush EquipmentSilhouette;
    FScrollBarStyle BasicScrollBarStyle;
    FButtonStyle BasicIconButtonStyle;
    FButtonStyle ExpandButtonStyle;
    FButtonStyle CollapseButtonStyle;
    FButtonStyle NextButtonStyle;
    FButtonStyle PrevButtonStyle;
    FButtonStyle NoBGIconButtonStyle;
    FButtonStyles ButtonStyles;
    FTextStyles TextStyles;
    FLogStyle LogStyle;
    FQueueStyle QueueStyle;
    FIconsStyle IconsStyle;
    FInputStyle InputStyle;
    FInventoryStyle InventoryStyle;
    FItemStyle ItemStyle;
    FItemSubtypeStyle ItemSubtypeStyle;
    FStatusStyle StatusEntriesStyle;
    FActionsStyle ActionEntriesStyle;
    FColorsStyle ColorsStyle;
    FDialogBoxStyle DialogBoxStyle;
    FProgressBarButtonStyle ProgressBarButtonStyle;
    FButtonStyle PrototypeButtonStyle;
    FHelpToolTipStyle HelpToolTipStyle;
    FRocketSiteStyle RocketSiteStyle;
    FStaticCheckBoxStyle StaticCheckBoxStyle;
    FInteractContextMenuStyle InteractContextMenuStyle;
    float XSpaceBetweenColumns;
    float YSpaceBetweenWidgets;
    float SimScreenSideColumnWidth;
    float SimScreenCenterColumnWidth;
    float SimScreenColumnHeight;
    float BackgroundBlurStrength;
    FComboBoxStyle DropdownStyle;
    FTableRowStyle DropdownRowStyle;
    FListViewStyle ListViewStyle;
    FFactionSelectStyle FactionSelectStyle;
    FLobbyStyle LobbyStyle;
    FSquadStyle SquadStyle;
    FTechTreeStyle TechTreeComponentStyle;
    FTechTreeStyle TechTreeStyle;
    FHospitalStyle HospitalStyle;
    FInfrastructuresStyle InfrastructuresStyle;
    FWarStandardColour StandardColour;
    FReserveStockpileStyle ReserveStockpileStyle;
    FWarAchievementsStyle WarAchievementsStyle;
    FSlateBrush FactionIcons;
    FGeneralPurposeIcons GeneralPurposeIcons;
    FWeatherStyle WeatherStyle;
    FListeningAreaStyle ListeningAreaStyle;

};

class UBaseWidgetStyle : public USlateWidgetStyleContainerBase
{
    FBaseStyle WidgetStyle;

};

class AAlwaysReservableItemPickup : public ABasicItemPickup
{
};

class ATankBase : public ARWDSimVehicle
{
    class UParticleSystemComponent* DisabledTurretFX;
    class UParticleSystemComponent* DisabledTurret2FX;
    class UParticleSystemComponent* DisabledTurret3FX;
    class UParticleSystemComponent* DisabledFuelTankFX;
    TSubclassOf<class ADecalActor> FuelSpillDecal;

};

class ABattleTank : public ATankBase
{
    float MainGunYaw;
    float MainGunPitch;
    float AlternateGunYaw;
    float AlternateGunPitch;
    float Alternate2GunYaw;
    float Alternate2GunPitch;
    FName StashedAmmoType;
    FName AlternateStashedAmmoType;
    FName Alternate2StashedAmmoType;
    int32 StashedAmmo;
    int32 AlternateStashedAmmo;
    int32 Alternate2StashedAmmo;
    FPayloadMeshes PayloadMeshes;

    void OnRep_StashedAmmo();
    void OnRep_AlternateStashedAmmo();
    bool GetIsMainGunFiring();
};

class ABicycle : public ASimVehicle
{
};

class UBicycleAnimInstance : public USimVehicleAnimInstance
{
    bool bIsInUse;

};

class UBinocularsItemComponent : public UItemComponent
{
    class USkeletalMesh* SkeletalMesh;
    bool bIsEquipped;

    void ServerStartStopScope(bool IsStartScope, FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
};

class UBoatHullComponent : public UBoxComponent
{
};

class AOutpost : public ABase
{
    class UStaticMeshComponent* MeshComponent;

};

class AForwardBase : public AOutpost
{
    class UTeamFlagMeshComponent* TeamFlagMeshComponent;

};

struct FBorderBaseInfo
{
    EWorldConquestMapId BorderMapID;
    EHexDirection HexDirection;
    uint8 RoadID;
    FDateTime NextClaimTime;

};

class ABorderBase : public AForwardBase
{
    class UParticleSystemComponent* OnSpawnedPS;
    class USoundCue* OnSpawnedSFX;
    bool bIsUsable;
    FBorderBaseInfo Info;

    void MulticastOnSpawned();
};

class ADestroyedStructure : public AStructure
{
    bool bIsScorchable;
    bool bIsScorched;

};

class ARuinableStructure : public ADestroyedStructure
{
    bool bShowRuinedInEditor;
    class URuinedComponent* RuinedComponent;

};

class ADestroyedTeamStructure : public ARuinableStructure
{
    uint8 LastGarrisonedTeamId;
    bool bDecimateStockpileOnClaim;

};

class ADestroyedBase : public ADestroyedTeamStructure
{
    uint32 LastSpawnPointId;
    bool bIsStaticBase;
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UTechTreeComponent* TechTreeComponent;

};

class ADestroyedBorderBase : public ADestroyedBase
{
    FBorderBaseInfo Info;
    bool bIsActive;

};

class UBorderBaseManager : public UObject
{
};

class ABorderTravelGhost : public AActor
{
    class UBoxComponent* BoxCollision;

};

class ABoundaryHex : public AActor
{
    class UStaticMeshComponent* Mesh;
    class UStaticMeshComponent* EditorMesh;

};

class ABuildGhost : public AActor
{
    TWeakObjectPtr<class UBuildSocketComponent> RotatedSocket;
    TArray<class UBuildSocketComponent*> Sockets;
    class UBuildSocketComponent* ManualConnectorSocket;
    class USplineConnectorComponent* MainSplineConnector;
    TWeakObjectPtr<class UBoxComponent> LandscapeHoleVolume;
    FTransform LandscapeHoleVolumeTransform;
    class UArrowComponent* ArrowComponent;
    class UBoxComponent* BuildFootprintComponent;
    EMapBoundaryBuildRule MapBoundaryBuildRule;
    bool bIsConnector;
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    bool bIsDeployed;
    bool bIsBuiltOnBridges;
    bool bIsBuiltOnWater;
    bool bAllowFloating;
    bool bLinearAttachment;
    int32 MaxAttachmentGroupSize;
    float LinearAttachmentTolerance;
    class UMaterialParameterCollection* BuildGhostParamCollection;
    class UMaterialInterface* BuildGhostMaterial;
    class UMaterialInterface* BuildGhostHighlightMaterial;
    class UStaticMesh* DirectionArrowMesh;
    class UMaterialInterface* UpgradeModeMaterial;
    class ALineOfSightVisualizationActor* LineOfSightVisualizationActor;
    class ABuildableStructure* UpgradeStructure;

};

struct FBuildSocketTag
{
    int32 SocketTypeMask;
    int32 SocketTypeCategory;
    FName Tag;
    FName ShowsTag;
    FName ShowsTagBoth;
    FName ShowsTagHigher;
    FName HidesTagBoth;
    FName HidesTagHigher;
    float MaxZOffset;
    EBuildSocketTagRule ApplicationRule;
    FName ConnectorAttachmentTag;
    bool bIgnoreHidesTag;

};

class UBuildSocketComponent : public USceneComponent
{
    TWeakObjectPtr<class AActor> ConnectedActor;
    TWeakObjectPtr<class UBuildSocketComponent> ConnectedSocket;
    FBuildSocketTag ConnectedTag;
    bool bDisabled;
    TArray<FBuildSocketTag> SocketTags;
    bool bIsUnidirectional;
    ESocketDirection Direction;
    float MaxRotation;
    ESlopeRotationMode SlopeRotationMode;
    float MaxZRotation;
    bool bDoLandscapeChecks;
    float MaxHeightAboveLandscape;
    float MaxDepthBelowLandscape;
    bool bAllowMultipleOverlaps;
    float MinimumPathSeparation;
    bool bOnlyTestMinimumPathSeparationOnUnconnected;
    bool bAllowRotatedPlacement;

};

class ABuiltRoad : public ABuildableStructure
{
    class USplineConnectorComponent* SplineConnector;
    float GrassCullRadius;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

struct FCalloutInfo
{
    bool RequiresWorldMarker;
    FString CalloutText;

};

class UCalloutComponent : public UActorComponent
{
    float WorldCalloutCooldown_Sec;
    TSubclassOf<class ACalloutMarkerGhost> CalloutMarkerGhostClass;
    TSubclassOf<class ACalloutMarker> CalloutMarkerClass;
    TArray<FCalloutInfo> WorldCalloutInfoList;

};

class ACalloutMarker : public AActor
{
    float Lifetime_Sec;
    float MoveSpeed;
    FVector OriginLocation;

};

class ACalloutMarkerGhost : public AActor
{
    class ASimPlayerController* Controller;

};

class UCharacterAnimInstance : public UAnimInstance
{
    class UAudioComponent* FootstepsAudioComp;
    float Speed;
    float AngularSpeedNative;
    float LadderClimbSpeedNormalized;
    float MovementDirection;
    bool bIsFalling;
    bool bIsScoping;
    bool bIsWorking;
    bool bIsLeftHandIK;
    bool bIsTrapped;
    bool bIsSwimming;
    bool bIsDrowning;
    float AimOffsetYaw;
    float AimOffsetPitch;
    float PlayRateNative;
    FVector LeftHandIKPosition;
    ESimCharacterStance CharacterStance;
    ECharacterActivityState ActivityState;
    EEquippedWeaponGripType EquippedWeaponGripType;
    float StaggerAmount;
    uint8 CurrentFallingPose;
    bool bStanceIsCrouched;
    bool bStanceIsProne;
    bool bIsCommander;
    bool bIsSitting;
    bool bIsZombie;
    EZombieType ZombieType;

    float OnStartActivityState(const ECharacterActivityState ActivityState);
    float GetActivityStateDuration(const ECharacterActivityState InActivityState);
    void AnimNotify_FootFallR(const class UAnimNotify* Notify);
    void AnimNotify_FootFallL(const class UAnimNotify* Notify);
};

class UPlayerAnimInstance2 : public UCharacterAnimInstance
{
};

class ICharacterInvokableInterface : public IInterface
{
};

struct FCharacterRenderInfo
{
    class USkeletalMesh* Torso;
    class UMaterialInterface* TorsoMaterial;
    class USkeletalMesh* Legs;
    class UMaterialInterface* LegsMaterial;
    class USkeletalMesh* Back;
    class UMaterialInterface* BackMaterial;
    class USkeletalMesh* Head;
    class UMaterialInterface* HeadMaterial;
    class USkeletalMesh* Hands;
    class UMaterialInterface* HandsMaterial;
    class USkeletalMesh* Helmet;
    bool bCanUpdateHeadSkinTone;
    bool bCanUpdateHandSkinTone;

};

struct FOutfitMeshInfo
{
    TMap<class EOutfitMeshInfoType, class FCharacterRenderInfo> OutfitMeshTable;

};

struct FUniformRenderInfo
{
    FCharacterRenderInfo Male;
    FCharacterRenderInfo Female;

};

struct FCharacterSkinToneInfo
{
    class UMaterialInstance* HeadMaterial;
    class UMaterialInstance* HandsMaterial;

};

struct FFootPrintActorInfo
{
    class UPhysicalMaterial* PhysicalMaterial;
    TSubclassOf<class ADecalActor> FootPrintActorLeft;
    TSubclassOf<class ADecalActor> FootPrintActorRight;

};

struct FZombieFootPrintActorInfo
{
    FFootPrintActorInfo Colonial;
    FFootPrintActorInfo Warden;

};

struct FCharacterConditions
{
    EEquippedWeaponGripType GripType;
    EWeatherType WeatherType;
    float MaxVelocity;
    float TriggerChance;
    bool bRequiresGripType;
    bool bRequiresWeather;
    bool bRequiresWarming;

};

struct FIdleAnimation
{
    class UAnimMontage* ActivityMontage;
    FCharacterConditions Conditions;

};

struct FPhysicalMaterialResolver
{
    TArray<class UPhysicalMaterial*> MaterialsEffectedByImpact;
    class UPhysicalMaterial* ImpactedMaterial;
    class UPhysicalMaterial* SnowMaterial;

};

class ACharactersRenderInfo : public AInfo
{
    TMap<class EOutfitType, class FOutfitMeshInfo> OutfitInfoMap;
    FUniformRenderInfo UniformInfo;
    TArray<FCharacterSkinToneInfo> MaleSkinTones;
    TArray<FCharacterSkinToneInfo> FemaleSkinTones;
    TArray<EOutfitType> OutfitsExcludedFromVips;
    TArray<FFootPrintActorInfo> FootPrintInfo;
    FZombieFootPrintActorInfo ZombieFootprintInfo;
    TArray<FIdleAnimation> IdleAnimations;
    FPhysicalMaterialResolver PhysicalMaterialResolver;

};

class UClientConfigManager : public UObject
{
};

class AClientFoliageReplacement : public AActor
{
    class UStaticMesh* DestroyedMesh;
    class UStaticMeshComponent* Mesh;
    float CriticalThreshold;
    EClientFoliageReplacementState State;
    class UFoliageInstancedStaticMeshComponent* OriginalComponent;

    void OnStateChanged(EClientFoliageReplacementState State);
};

class UClientStreamingManager : public UObject
{
    float StreamingCheckInterval;
    float MinStreamInRadius;
    float MinStreamOutRadius;
    float CullDistance;
    TArray<class ULevelStreamingHex*> StreamingLevels;

    void OnLevelUnloaded();
    void OnLevelShown();
    void OnLevelLoadComplete();
};

class ICoalitionAssignable : public IInterface
{
};

class AFoxholeTurret : public ATunnelNode
{
    class UOccupiableComponent* OccupiableComponent;
    TSubclassOf<class AImpactEffect> ImpactEffect;
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;
    class USoundCue* ShotSoundCue;
    class USoundCue* ShotSoundATCue;
    class UParticleSystem* MuzzleFlashPS;
    float WeaponDamage;
    float WeaponDamageAT;
    float MaximumRange;
    float MaximumReachability;
    float MaximumRangeInAggroState;
    float BestJitterConeHalfAngle;
    float WorstJitterConeHalfAngle;
    float FiringPeriod;
    float TimeToFullFireRateAndAccuracy;
    float EnemyPursueDuration;
    bool ShouldAggroOnDamage;
    uint8 AllowedTargetTypes;
    bool bIgnoreLineOfSight;
    bool bReduceRangeAtNight;
    class UArrowComponent* MuzzleFlashLocationComponent;
    bool bIsMuzzleFlashStationary;
    float FiringConeAngle;
    TEnumAsByte<ECollisionChannel> EnemyType;
    float TimeToStarvation;
    bool bLimitOccupantFiringArc;
    float MaxOccupantFiringArcDeviation;
    TWeakObjectPtr<class AActor> CurrentEnemy;
    FHitNotify SimulatedHitNotify;
    bool bIsEnemyObscured;
    uint8 SuppressionPercentage;
    TSubclassOf<class UDamageType> DamageType;
    TSubclassOf<class UDamageType> DamageTypeAlternate;
    float AttackDelayForATDamage;
    bool bUseATDamageForVehicle;
    bool bIsSuppressible;
    bool bShowExtraTracers;
    TSet<TWeakObjectPtr<AFlareExplosionEffect>> NearbyFlares;
    class UTeamFlagMeshComponent* FlagMesh;

    void OnRep_SimulatedHitNotify();
    void OnRep_IsEnemyObscured();
    void OnRep_CurrentEnemy();
};

class AGunTurret : public AFoxholeTurret
{
    float TrackingSpeed;
    float BaseDamage;
    float ExplosionRadius;
    float TrackingThreshold;
    float FiringThreshold;
    float DamageDelay;
    class USkeletalMeshComponent* SkelMesh;
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;
    float TrackingAngle;

    float GetTrackingAngle();
    void AllPlayImpactFX(const FHitResult& HitResult);
};

class ACoastalGun : public AGunTurret
{
    float WarningShotMinRange;
    float WarningShotRadius;

    void MulticastPlayImpactAndTargetFX(const FHitResult& HitResult, const FVector WarningShotAimOffset);
};

class AFort : public ABuildableStructure
{
    bool bSupportsEmplacedStructures;
    class UBoxComponent* EmplacementLocation;
    float MinUpgradeTargetDistance;
    FVector ObstructionCheckOverrideExtents;
    TWeakObjectPtr<class AEmplacedStructure> EmplacedStructure;

};

class AFortConnector : public AFort
{
};

struct FConcreteSettler
{
    int64 StartTimeDateTimeTicks;
    bool bEnabled;
    float ConcreteSettleDurationMins;
    float RoughnessStart;
    float RoughnessEnd;
    FLinearColor ColourStart;
    FLinearColor ColourEnd;

};

class AConcreteFortConnector : public AFortConnector
{
    FConcreteSettler ConcreteSettler;

};

class AReservableStructure : public ABuildableStructure
{
    uint8 bIsReservable;

};

struct FRefinementOrder
{
    FName SourceItemCodeName;
    FName RefinedItemCodeName;
    float ResourcesRefinedPerMinute;
    int32 RemainingSourceCount;
    float CompletedCount;
    float ProgressForCurrentUnit;
    EFactionId OrderOwnerFactionId;

};

struct FRefinableItemInfo
{
    TSubclassOf<class AItemPickup> SourceItemClass;
    TSubclassOf<class AItemPickup> RefinedItemClass;
    float SpeedModifier;
    float YieldModifier;
    int32 MaxRefinedItemCount;
    int32 TransferStackSize;

};

struct FResourceConverter
{
    TArray<FRefinementOrder> OrderList;
    TArray<FRefinableItemInfo> RefinableItems;

};

class AConcreteMixer : public AReservableStructure
{
    class USkeletalMeshComponent* MeshComponent;
    class UStaticMesh* PackagedMesh;
    FResourceConverter ResourceConverter;

    bool IsRefining();
};

class UConstructionGunnerComponent : public UMountComponent
{
};

class AConstructionSite : public ATeamStructure
{
    EBuildLocationType BuildLocationFilter;
    class UBoxComponent* GarageFootprintComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

    bool IsBuildLocationBlocked();
};

class AConstructionSiteBuildSite : public AStructureBuildSite
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

};

class ADestroyedConstructionSite : public ADestroyedTeamStructure
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

};

class AVehicleFactory : public AConstructionSite
{
};

class AVehicleFactoryBuildSite : public AConstructionSiteBuildSite
{
};

class ADestroyedVehicleFactory : public ADestroyedConstructionSite
{
};

class AConstructionVehicle : public ARWDSimVehicle
{
    class USceneComponent* BoomLocation;
    class USceneComponent* HammerLocation;
    class USoundCue* WorkSoundCue;
    class UParticleSystem* WorkPS;
    class UBoxComponent* WorkVolume;
    float CabYaw;
    uint8 bIsWorking;

    void ServerSyncDesiredYaw(const float DesiredYaw);
    void ServerSetIsWorking(const bool bIsWorking);
    void ServerSetIsScoping(const bool bIsScoping);
    void MulticastPlayFX();
};

class UConstructionVehicleAnimInstance : public USimVehicleAnimInstance
{
    float LeftTreadPlayrate;
    float RightTreadPlayrate;
    float CabinYaw;
    bool bIsDoingWork;

};

class ACrane : public ARWDSimVehicle
{
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UBoxComponent* ShippableCollision;
    class UAudioComponent* ArmMovementSFXLoop;
    class UAudioComponent* DeployingSFXLoop;
    class UAudioComponent* PulleyMovementSFXLoop;
    class UCraneComponent* CraneComponent;

};

class UCraneComponentAnimInstance : public UAnimInstance
{
    float Speed;
    float WheelRadius;
    float Yaw;
    float HookYaw;
    float HorizontalDistanceToTarget;
    float CraneHeight;
    float PulleyLength;
    bool bIsEmplaced;

};

struct FCraneComponents
{
    class USkeletalMeshComponent* MainMesh;
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UBoxComponent* ShippableCollision;
    class UAudioComponent* ArmMovementSFXLoop;
    class UAudioComponent* DeployingSFXLoop;
    class UAudioComponent* PulleyMovementSFXLoop;

};

struct FCraneComponentConfig
{
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;
    TSubclassOf<class ACraneMarker> AimMarker;
    class UMaterial* GhostMaterial;
    int32 GhostMaterialIndices;
    class USoundCue* ArmMovementSFXLoop;
    class USoundCue* DeployingSFXLoop;
    class USoundCue* PulleyMovementSFXLoop;
    class USoundCue* DeployedSFXTrigger;
    class USoundCue* PickUpSFXTrigger;
    class USoundCue* DropOffSFXTrigger;
    EShippableType MaxUndeployedShippableSize;
    float DeployedCameraViewRadius;
    float MinHorizontalDistanceToTarget;
    float MaxHorizontalDistanceToTarget;
    float MaxHeight;
    float PulleyOffset;
    float DefaultCabRotationZ;
    float CabRotationSpeed;
    float CabRotationSpeedWithShippable;
    float HorizontalArmSpeed;
    float HorizontalArmSpeedWithShippable;
    float VerticalArmSpeed;
    float VerticalArmSpeedWithShippable;
    float PulleySpeed;
    float PulleySpeedWithShippable;
    float HookRotationSpeed;
    float HookRotationSpeedWithShippable;
    bool bIsAlwaysDeployed;
    bool bRequiresPower;

};

class UCraneComponent : public UActorComponent
{
    FCraneComponents Components;
    FCraneComponentConfig Config;
    TEnumAsByte<ECraneState> State;
    float HorizontalDistanceToTarget;
    float CraneHeight;
    float PulleyLength;
    float CabRotationZ;
    float HookRotationZ;
    FName CurrentShippable;
    FReplicatedShippableData ShippableData;
    class AActor* RelevantShippable;
    FSavedShippableData SavedData;
    class UMeshComponent* DynamicMeshComponent;

    void ServerUpdateHookRotation(const float HookRotation);
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    void ServerTransferShippableTo(class AActor* Actor);
    void ServerToggleDeployment();
    void ServerSetIsScoping(const bool bInIsScoping);
    void ServerPickUpShippableFrom(class ASimVehicle* Vehicle);
    void ServerPickUpShippable(class AActor* Actor);
    void ServerDropShippable();
    void OnRep_State(const TEnumAsByte<ECraneState> PreviousState);
    void OnRep_ShippableData();
    void OnRep_RelevantShippable();
    void OnRep_PulleyLength(const float PreviousPulleyLength);
    void OnRep_HorizontalDistanceToTarget(const float PreviousHorizontalDistanceToTarget);
    void OnRep_CurrentShippable();
    void OnRep_CabRotationZ(const float PreviousCabRotationZ);
    void ClientShowShippableStatus(const EShippableStatus Status);
};

class UCraneOperatorComponent : public UMountComponent
{

    void ServerUpdateHookRotation(const float HookRotation);
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    void ServerTransferShippableTo(class AActor* Actor);
    void ServerToggleDeployment();
    void ServerSetIsScoping(const bool bIsScoping);
    void ServerPickUpShippableFrom(class ASimVehicle* Vehicle);
    void ServerPickUpShippable(class AActor* Actor);
    void ServerDropShippable();
    void ClientShowShippableStatus(const EShippableStatus Status);
};

class UCraneSpawnLocationComponent : public USceneComponent
{
    TSubclassOf<class AStaticCrane> CraneClass;
    class AStructure* Crane;
    class UBoxComponent* UseAreaBox;
    bool bIsSpawned;

};

class ACraneMarker : public AActor
{
    class UStaticMeshComponent* MainMesh;
    class UStaticMesh* InteractMesh;
    class UStaticMesh* InteractGreyMesh;
    class UStaticMesh* InteractBlockedMesh;
    class UStaticMesh* InvalidMesh;
    class UStaticMesh* UseMesh;

};

class ICraneOperatorInterface : public IInterface
{
};

struct FCraterMeshStop
{
    float Length;
    class UStaticMesh* StaticMesh;

};

class ACrater : public ABuildableStructure
{
    TArray<FCraterMeshStop> MeshStops;

};

class UCrossRegionActorManager : public UObject
{
    TSet<AActor*> AllRemoteActors;

};

class UCursorWidget : public UUserWidget
{

    FSlateBrush GetCursorBrush();
};

class IDamageableActor : public IInterface
{
};

class ADamageProfiles : public AInfo
{
    class UDataTable* DataTable;

};

class USimDamageType : public UDamageType
{
    EDamageType Type;
    bool bAppliesBurning;
    bool bCanRuinStructures;
    bool bApplyDamageFalloff;
    bool bAlwaysAppliesBleeding;
    bool bNeverAppliesBleeding;
    float TankArmourPenetrationFactor;
    ETankArmourEffectType TankArmourEffectType;
    EVehicleSubsystem VehicleSubsystemOverride;
    float VehicleSubsystemDisableMultipliers;
    bool bCanWoundCharacter;
    bool bApplyTankArmourMechanics;
    bool bApplyTankArmourAngleRangeBonuses;
    bool bExposeInUI;
    FSlateBrush Icon;
    FText DisplayName;
    TArray<FTooltipDetailText> DescriptionDetails;

};

class UKarateDamageType : public USimDamageType
{
};

class UTankZombieDamageType : public USimDamageType
{
};

class UTankZombieSecondaryDamageType : public USimDamageType
{
};

class UWoundCausingDamageType : public USimDamageType
{
};

class UEnvironmentDamageType : public USimDamageType
{
};

class UDecayDamageType : public USimDamageType
{
};

class UWaterDamageType : public USimDamageType
{
};

class UGroundZeroDamageType : public USimDamageType
{
};

class UHarvestDamageType : public USimDamageType
{
};

class UUnexplodedOrdnanceDamageType : public USimDamageType
{
};

class USignPostDownVoteDamageType : public USimDamageType
{
};

class UNonDamagingDamageType : public USimDamageType
{
};

struct FDayNightCycleCubemapInfo
{
    float SunHeight;
    class UTextureCube* CubeMap;
    float WhiteBalanceTemp;
    FLinearColor FilmTint;
    FLinearColor FilmTintShadow;
    float Saturation;
    float Contrast;
    float CrushShadows;
    float CrushHighlights;
    float Toe;
    float DirectionalLightTemperature;

};

class ADayNightCycleManager : public AActor
{
    class ADirectionalLight* LightSource;
    class ADirectionalLight* MoonLightSource;
    class ASkyLight* SkyLight;
    class APostProcessVolume* PostProcessVolume;
    class AExponentialHeightFog* ExponentialHeightFog;
    class ASphereReflectionCapture* DayReflectionCapture;
    class ASphereReflectionCapture* NightReflectionCapture;
    float LightDayIntensity;
    float LightNightIntensity;
    class UCurveLinearColor* DirectionalLightColorCurve;
    class UCurveLinearColor* MoonLightColorCurve;
    class UCurveFloat* MoonLightIntensityCurve;
    class UCurveFloat* MoonLightAngleCurve;
    class UCurveFloat* VisibilityRadiusIntensityCurve;
    class UCurveLinearColor* FogColorCurve;
    class UCurveFloat* FogFalloffCurve;
    class UCurveFloat* DayReflectionBrightness;
    class UCurveFloat* NightReflectionBrightness;
    class UCurveFloat* SkyLightIntensity;
    float LatitudeRotation;
    float SunSpeed;
    float NightSunSpeed;
    TArray<FDayNightCycleCubemapInfo> CubeMapSamples;
    bool bDebugCaptureEveryframe;
    int32 Day;
    float MaxNightVisibilityRadius;
    float MinNightVisibilityRadius;
    bool bIsNight;
    float SunAngle;
    uint16 SunAngleQuantized;
    class UEnvironmentalModificationData* EnvironmentalModificationData;

    void OnRep_SunAngleQuantized();
};

struct FProjectileHitInfo_NetQuantize
{
    FVector_NetQuantize ImpactPoint;
    FVector_NetQuantizeNormal ImpactNormal;
    TWeakObjectPtr<class AActor> Actor;
    TWeakObjectPtr<class UPrimitiveComponent> Component;
    FName BoneName;
    TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;

};

class AWarProjectile : public AActor
{
    class UProjectileMovementComponent* MovementComp;
    class USphereComponent* CollisionComp;
    class UParticleSystemComponent* ParticleComp;
    class UAudioComponent* LoopingAudio;
    class USkeletalMesh* SkeletalMesh;
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;
    TWeakObjectPtr<class AController> MyController;
    FName ExplosiveCodeName;
    float ProjectileLife;
    float AutoDetonateTime;
    float ProjectileDeathDelay;
    float ExplosionImpactBumpDistance;
    float PenetrationBonusMaxRange;
    uint8 IsPointDamage;
    uint8 bUseAccurateHitReplication;
    uint8 bProjectImpactDownward;
    uint8 bHideMeshOnExplode;
    uint8 bSpawnExplosionOnServer;
    uint8 bDebugDraw;
    uint8 bExploded;
    FRotator RotationSpeed;
    bool bRotationRequiresVelocity;
    float RotationVelocityRequirement;

    void SetHomingTarget(class AActor* Target);
    void OnRep_Exploded();
    void OnProjectileStop(const FHitResult& HitResult);
    void OnExploded(const FProjectileHitInfo_NetQuantize& HitResult);
    void ExplodeAll(const FProjectileHitInfo_NetQuantize& Impact);
    void Detonate(const FProjectileHitInfo_NetQuantize& HitResult);
    void ApplyExplosiveDamageAndSpawnFx(const FProjectileHitInfo_NetQuantize& HitResult);
};

class ATimedProjectile : public AWarProjectile
{
    float FuseTimer;

};

class ADeadlyGasGrenadeProjectile : public ATimedProjectile
{
    TSubclassOf<class AWarPainVolume> PainVolumeTemplate;

};

class ULargeItemComponent : public UItemComponent
{
    class USkeletalMesh* Mesh;
    bool bIsEquipped;

    void OnRep_IsEquipped();
};

class UDeployableItemComponent : public ULargeItemComponent
{
    FName DeployCodeName;

};

class USoldierItemComponent : public ULargeItemComponent
{
    uint8 SoldierVisualsPacked;

    void OnRep_SoldierVisuals();
};

class UWoundedCarriedItemComponent : public ULargeItemComponent
{
    class ASimCharacter* CarriedCharacter;
    FVector CapsuleOffset;

};

class ADeployedStructure : public ABuildableStructure
{
    class UOccupiableComponent* OccupiableComponent;
    uint8 TeamId;

};

class ADeployedTripod : public ADeployedStructure
{
};

class ATripodMountedStructure : public ADeployedStructure
{
    class USkeletalMeshComponent* TripodMesh;
    class USkeletalMeshComponent* GunMesh;
    FName ItemCodeName;

};

struct FTripodHeightConfig
{
    float MaxHeight;

};

class ADeployedWeapon : public ATripodMountedStructure
{
    class USkeletalMeshComponent* PayloadMesh;
    FTripodHeightConfig HeightConfig;
    int16 StashedAmmo;
    float TripodHeight;

    void OnRep_StashedAmmo();
};

class ADeployedInfantrySupportGun : public ADeployedWeapon
{
};

class ADeployedListeningKit : public ATripodMountedStructure
{
    class UListeningAreaComponent* ListeningAreaComponent;

};

class UDeployedTripodAnimInstance : public UAnimInstance
{
    bool bIsDeployed;
    float Height;
    float RelativeYaw;
    float RelativePitch;

};

class ADestroyedBridge : public ADestroyedStructure
{
};

class ADestroyedDrawbridge : public ADestroyedStructure
{
    class UPersistentProxyComponent* SideAProxy;
    class UPersistentProxyComponent* SideBProxy;

};

class ADestroyedGarrisonHouse : public ADestroyedTeamStructure
{
};

class ADestroyedGarrisonStation : public ADestroyedGarrisonHouse
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UTechTreeComponent* TechTreeComponent;
    uint32 LastSpawnPointId;

};

class ADestroyedStorageFacility : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UReserveStockpileComponent* ReserveStockpileComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

};

class URuinedComponent : public USceneComponent
{
};

class URuinedMeshComponent : public UStaticMeshComponent
{
};

class ADestroyedTownHall : public ADestroyedBase
{
};

class ADestructibleProp : public AActor
{
    class UParticleSystem* DestroyedFX;
    class USoundCue* DestroyedSoundCue;

    void MulticastApplyFatalHit();
};

class UDockComponent : public UBoxComponent
{
};

struct FBridgeSideState
{
    bool bIsControlEnabled;

};

class ADrawbridge : public ABuildableStructure
{
    class USkeletalMeshComponent* SideAMesh;
    class USkeletalMeshComponent* SideBMesh;
    class USkeletalMeshComponent* SideALeverMesh;
    class USkeletalMeshComponent* SideBLeverMesh;
    class UBoxComponent* SideAUseArea;
    class UBoxComponent* SideBUseArea;
    class UPersistentProxyComponent* SideAProxy;
    class UPersistentProxyComponent* SideBProxy;
    class UBoxComponent* SideBottomUseArea;
    class UBoxComponent* AboveBlockingArea;
    class UBoxComponent* AboveBlockingVolume;
    class UBoxComponent* BelowBlockingArea;
    class UBoxComponent* BelowBlockingVolume;
    class USoundCue* SwitchSound;
    class USoundCue* OpenedSound;
    class USoundCue* ClosedSound;
    class UAudioComponent* MovingLoop;
    class USceneComponent* Ladder1Location;
    class USceneComponent* Ladder2Location;
    class ALadder* Ladder1;
    class ALadder* Ladder2;
    TSubclassOf<class ALadder> LadderType;
    float BridgeOpenDuration;
    bool bIsRailBridge;
    FBridgeSideState SideAState;
    FBridgeSideState SideBState;
    TEnumAsByte<EBridgeState> State;
    float StartTime;

    void OnRep_State();
    void OnRep_StartTime();
    void MulticastPlayTransitionEffects(TEnumAsByte<EBridgeState> OldState, TEnumAsByte<EBridgeState> NewState);
    void MulticastPlaySideToggleEffect(TEnumAsByte<EBridgeSide> BridgeSide);
    float GetProgress();
    void ApplyVehicleDecay();
};

class ABridge : public ABuildableStructure
{
    class UBoxComponent* BelowBlockingVolume;
    class UBoxComponent* AboveBlockingArea;

};

class UDrawbridgeAnimInstance : public UAnimInstance
{
    bool bIsSwitchOpen;
    float OpenProgress;

};

class ADrawbridgeBuildSite : public AStructureBuildSite
{
    class UPersistentProxyComponent* SideAProxy;
    class UPersistentProxyComponent* SideBProxy;

};

class UDrawStructureLayerComponent : public UPrimitiveComponent
{
};

struct FWindowMeshes
{
    class UStaticMesh* Colonial;
    class UStaticMesh* Warden;

};

class UWindowMeshSet : public UObject
{
    FWindowMeshes T1;
    FWindowMeshes T2;
    FWindowMeshes T3;

};

class AEffectSpawnerProxy : public AActor
{
    class UParticleSystem* DestroyedVFX;
    class USoundCue* DestroyedSoundCue;

    void OnRep_DestroyedVFX();
    void OnRep_DestroyedSoundCue();
};

class AEmplacedStructure : public ATeamStructure
{
    class UStaticMesh* PackagedMesh;
    float EmplacedIncomingDamageModifier;

};

class AEmplacedWeapon : public AEmplacedStructure
{
    float EmplacedTrackingModifier;
    class USkeletalMeshComponent* Mesh;
    class USkeletalMeshComponent* FoundationMesh;
    class UOccupiableComponent* OccupiableComponent;
    FVector2D GunnerYawAndPitch;
    int32 StashedAmmo;
    FName StashedAmmoType;
    TArray<FMuzzleInfo> MuzzleInfo;
    FPayloadMeshes PayloadMeshes;

    void OnRep_StashedAmmo();
};

class AEmplacedArtillery : public AEmplacedWeapon
{
    TSubclassOf<class UMountComponent> RotatorMountComponent;
    class UOccupiableComponent* RotatorOccupiableComponent;
    class UBoxComponent* GunnerTrigger;
    class UBoxComponent* RotatorTrigger;
    uint8 RequiredSquadMembers;
    int32 SquadId;

};

class UEmplacedFoundationAnimInstance : public UAnimInstance
{
    float Yaw;

};

class UEmplacedWeaponAnimInstance : public UAnimInstance
{
    float Yaw;
    float Pitch;
    bool bIsCranking;
    bool bIsShooting;

    void OnFiringComplete();
    void AnimNotify_OnFiringComplete(const class UAnimNotify* Notify);
};

class AEmplacedWeaponWithShieldedSeat : public AEmplacedWeapon
{
    TSubclassOf<class UMountComponent> ShieldedMountComponent;
    class UOccupiableComponent* ShieldedOccupiableComponent;
    class UBoxComponent* GunnerTrigger;
    class UBoxComponent* ShieldedTrigger;

};

class AEmplacementHouse : public ATunnelNode
{
    class USkeletalMeshComponent* EmplacementGunMesh;
    class USceneComponent* EmplacementGunMuzzleLocation;
    class UOccupiableComponent* OccupiableComponent;
    TSubclassOf<class ALadder> LadderType;
    class USceneComponent* LadderLocation;
    float TimeToStarvation;
    float AnimationHysteresisTime;
    int32 StashedAmmo;
    FName StashedAmmoType;
    FVector2D GunnerYawAndPitch;
    class ALadder* Ladder;

};

class AEmplacementHouseBuildSite : public AStructureBuildSite
{
};

class ADestroyedEmplacementHouse : public ADestroyedTeamStructure
{
};

class UMultiAmmoStructureMountComponent : public UMountComponent
{
    FMultiAmmo MultiAmmo;

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
};

class UEmplacementMortarMountComponent : public UMultiAmmoStructureMountComponent
{
    float ScopeRange;
    float TrackingThresholdPrecisionMultiplier;
    class UParticleSystem* MuzzleFlashPS;
    float TelegraphDelay;
    float MortarFlightTime;
    class USoundCue* ReloadSoundCue;
    bool bDamageDebug;

    void ServerStartInvoke(FActivityStateChange ActivityStateChange, float Distance);
    void MulticastPlayFiringFX(const class AExplosiveAmmoPickup* AmmoPickupCDO);
    void MulticastDamageDebug(FVector TraceStart, FVector TraceEnd, FVector Location, const class AExplosiveAmmoPickup* AmmoPickupCDO);
};

class AEngineeringCenter : public ATeamStructure
{
};

class AEngineeringCenterBuildSite : public AStructureBuildSite
{
};

class ADestroyedEngineeringCenter : public ADestroyedTeamStructure
{
};

class AEngineRailVehicle : public ARailVehicle
{
    float SteamGainRate;
    float SteamVentRate;
    float SteamActivateThreshold;
    float SteamDeactivateThreshold;
    float SteamPressure;
    bool bIsSteamSFXPrimed;
    class UParticleSystemComponent* SteamParticleSystem;
    class UParticleSystemComponent* BoostingParticleSystem;
    class USoundCue* SteamVentCue;
    class UAudioComponent* HornLoop;
    class UBoxComponent* TrainRammingCollisionBox;
    float MaxHornDuration;
    float BoostDuration;
    bool bHornActivated;
    float VehicleRetrieveModifier;
    bool bDoesTrainRamming;
    float TrainRammingSpeedSqrThreshold;

    void TrainRammingCollisionTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ServerSetHornActivated(bool InHornActivated);
    void OnRep_HornActivated();
    void ClientSetBoosting(bool InBoosting);
};

struct FFuelInfo
{
    FFuelTank Tank;
    float ConsumptionRate;

};

struct FPowerInfo
{
    int32 PowerDelta;
    int16 PowerLength;
    int32 CurrentPower;

};

class AEngineRoom : public ATeamStructure
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UAnimMontage* AnimMontage;
    FFuelInfo FuelInfo;
    FPowerInfo PowerInfo;
    FConcreteSettler ConcreteSettler;

    void OnRep_FuelInfo();
};

class AFortBuildSite : public AStructureBuildSite
{
    bool bCanPassThroughPower;

};

class AEngineRoomBuildSite : public AFortBuildSite
{
    FFuelTank FuelTank;

};

struct FCraterInfo
{
    TSubclassOf<class ACrater> Crater;
    class UPhysicalMaterial* BlockingPhysicalMaterial;
    float Radius;
    float OuterRadius;
    float SpawnWeight;

};

struct FDecalData
{
    class UMaterialInterface* DecalMaterial;
    FVector DecalSize;
    float LifeSpan;
    float FadeScreenSize;

};

struct FFoliageModificationInfo
{
    class UStaticMesh* OriginalMesh;
    TSubclassOf<class AClientFoliageReplacement> Replacement;

};

class UEnvironmentalModificationData : public UObject
{
    TArray<FCraterInfo> Craters;
    float MaxCraterCoverage;
    float MinCraterSpawnDevastation;
    float CraterSpawnProbability;
    float MaxCraterAngle;
    FDecalData Decal;
    FDecalData TownDecal;
    float TownDecalDistance;
    int32 DecalSortOrder;
    TArray<FFoliageModificationInfo> FoliageReplacements;
    float MaxTreeRemovalPercentage;
    float FoliageRemovalThresholdWeights;
    float SampleExtents;
    class UCurveFloat* DevastationToContrast;
    class UCurveFloat* DevastationToSaturation;
    class UCurveFloat* SunHeightToDevastationPostProcessMultiplier;

};

class AEnvironmentModification : public AActor
{
    TArray<uint16> ImpactMap;
    int32 Seed;
    TArray<uint8> DevastationHeatmap;
    TArray<uint8> LastProcessedDevastationHeatmap;
    TArray<class AClientFoliageReplacement*> Replacements;
    TArray<class UDecalComponent*> Decals;
    bool bFirstReplicationOfDevastationHeatmap;
    float CreationTime;

    void ProcessDevastationHeatmapReplication(const TArray<uint8>& OldDevastationHeatmap);
    void OnRep_Seed();
    void OnRep_DevastationHeatmap(const TArray<uint8>& OldDevastationHeatmap);
    void OnRep_CreationTime(const float& OldCreationTime);
};

class AEnvironmentSFX : public AActor
{
    class UArrowComponent* ArrowComponent;
    class UAudioComponent* DayTimeSFX;
    class UAudioComponent* NightTimeSFX;

};

class UItemHolderComponent : public UActorComponent
{
    EInventoryType InventoryType;
    int16 NextHolderId;
    TArray<FName> RestrictedItems;
    TArray<FName> CustomStackableItems;
    bool bForceAllItemsAreStackable;

    void ClientImportItem(const class AItemPickup* ItemCDO);
    void ClientExportItem(const int32 SlotIndex);
};

class UEquipmentHolderComponent : public UItemHolderComponent
{
};

class AExplosive : public AActor
{
    float DetonationDelay;
    class USphereComponent* CollisionComp;
    class UStaticMeshComponent* ItemMesh;
    FName ExplosiveCodeName;
    float ExplosionOffsetZ;
    float DamageDelay;
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;
    float DestroyObstacleRadius;
    int32 SubExplosionCount;
    float ExplosionLength;
    uint8 bExplosionEffectsTrigger;
    uint8 TeamId;

    void OnRep_Exploded();
};

class AExplosiveAmmoPickup : public AAmmoPickup
{
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;
    class USoundCue* ShotSoundCue;

};

class AMortarAmmoPickup : public AExplosiveAmmoPickup
{
};

class ATankAmmoPickup : public AExplosiveAmmoPickup
{
};

class UExplosiveItemComponent : public UItemComponent
{
    float DeployDuration;
    TSubclassOf<class AExplosive> ExplosiveClass;
    class USoundCue* DeploySound;
    bool ShouldShowDetonationMessage;
    bool bPreventBorderPlacement;
    bool ShouldDoLandscapeCheck;
    bool bIsEquipped;

    void ServerStartInvoke(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
};

class UFacilityRefineryAnimInstance : public UAnimInstance
{
    bool bIsActive;
    class UMaterialInterface* AnimatedMaterial;
    FName AnimatedSocketName;
    float UVOffsetSpeed;

};

class UAssemblyStationAnimInstance : public UAnimInstance
{
    bool bIsActive;

};

class UFacilityFuelLightComponent : public USceneComponent
{
    int32 MaterialIndex;

};

struct FFacilityLightRenderInfo
{
    class UMeshComponent* MeshComponent;

};

class UFacilityLightComponent : public UActorComponent
{
    FName TargetTag;
    TArray<class UMaterialInterface*> Materials;
    TArray<FFacilityLightRenderInfo> RenderInfoArray;

};

struct FCodeNameQuantity
{
    FName CodeName;
    int32 Quantity;

};

struct FMultiConversionInfo
{
    TArray<FCodeNameQuantity> Input;
    TArray<FFuelQuantity> FuelInput;
    TArray<FCodeNameQuantity> Output;
    TArray<FFuelQuantity> FuelOutput;
    int32 Duration;
    int32 PowerDelta;
    bool bConsumeResourceNodes;

};

struct FFacilityModification
{
    TArray<FMultiConversionInfo> ConversionEntries;

};

class AFacilityRefinery : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UModificationSlotComponent* UpgradeSlotComponent;
    class UBuildSocketComponent* PowerSocket;
    class UFacilityLightComponent* LightComponent;
    TArray<FMultiConversionInfo> ConversionEntries;
    TMap<class EFortModificationType, class FFacilityModification> Modifications;
    FName RequiredResourceFieldCodeName;
    TArray<FFuelTank> FuelTanks;
    FPowerGridInfo PowerGridInfo;
    int8 ConversionInfoIndex;
    EFacilityRefineryState State;
    bool bHasConsumedMaterials;
    float SavedProgress;
    TArray<FFuelQuantity> FuelOutputBuffers;
    int32 ItemInputBuffer;

    void OnRep_State();
    void OnRep_PowerGridInfo();
    void OnRep_ConversionInfoIndex();
};

class UUserComponent : public UActorComponent
{
    TWeakObjectPtr<class AActor> AssociatedActor;

};

class UFacilityRefineryUserComponent : public UUserComponent
{
    float Progress;

    void ServerSetCurrentConversionInfo(const int8 Index);
    void OnRep_Progress();
};

class AFacilitySupplyStation : public AFacilityRefinery
{
    FDecayInfo DecayInfo;
    class UStaticMeshComponent* BaseMesh;
    float SupplyRange;

};

class AFestivalFlagPickUp : public AItemPickup
{
    class USkeletalMeshComponent* FlagMesh;
    class UMaterialInterface* ColonialMaterial;
    class UMaterialInterface* WardenMaterial;

};

class UFestivalFlagItemComponent : public ULargeItemComponent
{
    float WalkingSpeedScale;
    uint8 TeamId;

    void OnRep_TeamID();
};

struct FMaterialOverride
{
    int32 Index;
    class UMaterialInstance* Material;

};

struct FFestivalRenderInfo
{
    TArray<FMaterialOverride> MaterialOverrides;

};

class AGlobalFestivalInfo : public AInfo
{
    TMap<class FName, class FFestivalRenderInfo> RenderInfoMap;

};

class AFestivalPortal : public ABuildableStructure
{
    class USceneComponent* TeleportLocation;
    FString Name;
    FString Destination;

};

class AFestivalFlagHolder : public ATeamStructure
{
    class UCapsuleComponent* DropOffLocation;

    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class AFieldBridge : public ABuildableStructure
{
    class UStaticMeshComponent* FrontRamp;
    class UStaticMeshComponent* BackRamp;
    class UBoxComponent* FrontKillVolume;
    class UBoxComponent* BackKillVolume;

};

class AFieldBridgeBuildSite : public AStructureBuildSite
{
};

class AFieldMachineGun : public ARWDSimVehicle
{
    class UParticleSystemComponent* MuzzleFlashPS;
    class USoundCue* FiringSound;
    FVector2D GunnerYawAndPitch;
    FName StashedAmmoType;
    int32 StashedAmmo;

    bool GetIsFiring();
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex);
};

class AFirearmPickup : public AGearPickup
{
};

class UFiremanMountComponent : public UMountComponent
{
    int32 CoalPerBoost;

    void ServerBoost(FActivityStateChange ActivityStateChange);
    void MulticastBoostFX();
};

class AFirePit : public ABuildableStructure
{
    class UTemperatureModifierSphereComponent* TemperatureModifierComponent;
    class UStaticMeshComponent* FireMesh;
    class UParticleSystemComponent* Fire1ParticleSystem;
    class UParticleSystemComponent* Fire2ParticleSystem;
    class UParticleSystemComponent* Fire3ParticleSystem;
    class UAudioComponent* FireSFXLoop;
    FFuelTank FuelTankDiesel;
    float DieselConsumptionRate;

    void OnRep_FuelTankDiesel();
};

struct FFireIntensityThreshold
{
    EFireIntensity Intensity;
    float DamageThreshold;
    float FlamesPerSquareMeter;
    float CharacterBurn;

};

class AFireInfo : public AInfo
{
    TArray<FFireIntensityThreshold> FireIntensityThresholds;
    float MaxPreMitigationFireDamagePerTick;
    float TickPeriodSeconds;
    float FireDamageBaseGainRate;
    float WeatherIntensityEffectMultiplier;
    float CharacterOnFireDamage;
    float BurningSpreadWindScale;
    float BurningBuildingHeatRange;
    TSubclassOf<class AFlameActor> FlameActor;
    TSubclassOf<class UDamageType> BuildingsDamagingPlayersDamageType;
    TSubclassOf<class UDamageType> BuildingsFireSpreadDamageType;
    TSubclassOf<class UDamageType> BurningSelfDamageType;
    class UParticleSystem* FireSpreadFX;

};

class AFlameActor : public AActor
{

    void BPUpdateSpreadDirection(FVector Direction);
    void BPOnFireIntensityChanged(uint8 Previous, uint8 NewIntensity);
    void BPDeactivate();
};

class UFirstAidKitComponent : public UItemComponent
{
    float HealAmountPerApplication;
    float HealApplicationInterval_Sec;
    uint8 HealingChargesPerBandage;
    class USkeletalMesh* FirstAidKitMesh;
    class USoundCue* FirstAidApplicationSound;
    bool DebugDrawTraces;
    bool bIsEquipped;

    void ServerUseFirstAidKit();
    void ServerStartActivityState(FActivityStateChange ActivityStateChange);
    void ServerCancelActivityState();
    void OnRep_IsEquipped();
};

class UHitScanMountComponent : public UMountComponent
{
    float FiringRate;
    bool bIsAutomaticFire;
    bool bSpawnExtraTracers;
    bool bUsePerBarrelFX;
    TSubclassOf<class AImpactEffect> ImpactEffect;
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;
    FWeaponShotSFX WeaponShotSFX;
    class USoundCue* ShotSoundCue;
    class UParticleSystem* MuzzleFlashPS;
    class USoundCue* ReloadSoundCue;
    FHitNotify SimulatedHitNotify;
    int32 Ammo;

    void ServerStopInvoke();
    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    void OnRep_SimulatedHitNotify();
    void MulticastSpawnTracerFX();
};

struct FFlameImpactFXInfo
{
    FVector Location;
    bool bActive;

};

class UFlameMountComponent : public UHitScanMountComponent
{
    class UParticleSystem* FlameStreamFX;
    class UParticleSystem* FlameBurstFX;
    class UParticleSystemComponent* AttachedFlameComponent;
    class UParticleSystemComponent* ImpactBurstFXComponent;
    float FuelReloadAmount;
    float FlameSpeedPredictionFactor;
    float FlameStreamFXParam;
    FFlameImpactFXInfo FlameImpactFXInfo;

    void OnRep_FlameStreamFXParam();
    void OnRep_FlameImpactFXInfo();
};

class UFlamethrowerWeaponComponent : public UHeavyMachineGunItemComponent
{
    class UParticleSystem* FlameStreamFX;
    class UParticleSystem* FlameBurstFX;
    class UParticleSystem* FlameIdleFX;
    class UParticleSystemComponent* AttachedFlameComponent;
    class UParticleSystemComponent* ImpactBurstFXComponent;
    class UParticleSystemComponent* IdleFlameFXComponent;
    float FlameSpeedPredictionFactor;
    float FlameStreamFXParam;
    FFlameImpactFXInfo FlameImpactFXInfo;
    class AAmmoPickup* CachedAmmoPickupCDO;
    FVector IdleFlameFXOffset;

    void OnRep_FlameStreamFXParam();
    void OnRep_FlameImpactFXInfo();
};

struct FExplosionMaterialOverride
{
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;
    class UParticleSystem* ExplosionFX;
    FDecalData Decal;

};

class AWarExplosionEffect : public AActor
{
    TArray<FExplosionMaterialOverride> ParticleSystemOverrides;
    TSubclassOf<class AImpactEffect> RadialHitImpact;
    float ImpactEffectDamage;
    float ExplosionLightFadeOut;
    class USoundCue* ExplosionSound;
    TSubclassOf<class UCameraShake> CameraShake;
    float CameraShakeOuterRadius;
    uint8 bDoNotOrientToImpactNormal;
    uint8 bOrientToDirectionOfTravel;
    uint8 bManualDestruction;
    uint8 bDestroyWhenParticleSystemCompletes;
    uint8 bParentToImpactSurface;
    float ManualDeactivateTime;
    bool bFadeSoundOnDeactivate;
    float SoundFadeDuration;
    TSubclassOf<class AWarPainVolume> PainVolume;
    float PainVolumeDelay;
    bool bIsDelayed;
    ETankArmourEffectBehaviour TankArmourEffectBehaviour;
    class UAudioComponent* SpawnedExplosionSound;
    bool bHasManuallyDeactivated;
    float DetonationDelay;
    float TelegraphDelay;
    class UPointLightComponent* ExplosionLight;
    FHitResult SurfaceHit;
    float ServerDetonationTime;
    FVector ProjectileImpactVelocity;
    class UParticleSystemComponent* ExplosionParticleSystem;

    void OnParticleSystemFinished(class UParticleSystemComponent* PSystem);
    void MulticastTelegraph(float TimeUntilDetonation);
    void MulticastDetonate();
    float GetTimeSinceDetonation();
    void BPTelegraphProjectile(FVector ImpactVelocity, float TimeUntilDetonation);
    void BPTelegraph();
    void BPDetonate();
};

class AFlareExplosionEffect : public AWarExplosionEffect
{
    class UCurveFloat* AltitudeCurve;
    float IlluminationRadius;
    float VisibilityIndicatorRadius;
    class UParticleSystem* LightFX;
    int32 MaxActiveLightsInRange;
    float MaxLightCullingRange;
    class UParticleSystemComponent* LightParticleSystem;

};

class AFlatbedRailVehicle : public ARailVehicle
{
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UMeshComponent* DynamicMeshComponent;
    class USceneComponent* TransferLocation;
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;
    FName CurrentShippable;
    FReplicatedShippableData ShippableData;
    FSavedShippableData SavedData;

    void OnRep_ShippableData();
    void OnRep_CurrentShippable();
};

class AFlatbedTruck : public ARWDSimVehicle
{
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UMeshComponent* DynamicMeshComponent;
    class USceneComponent* TransferLocation;
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;
    FName CurrentShippable;
    FReplicatedShippableData ShippableData;
    FSavedShippableData SavedData;

    void OnRep_ShippableData();
    void OnRep_CurrentShippable();
};

class AConcreteFort : public AFort
{
    FConcreteSettler ConcreteSettler;

};

class AFortConnectorBuildSite : public AFortBuildSite
{
};

class AFortCorner : public AFort
{
    TArray<FName> IncompatibleCornerSockets;

};

class AConcreteFortCorner : public AFortCorner
{
    FConcreteSettler ConcreteSettler;

};

class AFortForwardBase : public AForwardBase
{
    class USceneComponent* LadderLocation;
    TSubclassOf<class ALadder> LadderType;
    class ALadder* Ladder;

};

class AConcreteFortForwardBase : public AFortForwardBase
{
    FConcreteSettler ConcreteSettler;

};

class AFortForwardBaseBuildSite : public ABaseBuildSite
{
};

class ADestroyedFortForwardBase : public ADestroyedBase
{
};

class AFortObservation : public ATeamStructure
{
    FVector ObstructionCheckOverrideExtents;
    class UMapIntelligenceSourceComponent* MapIntelligenceSource;
    class UTeamFlagMeshComponent* TeamFlagMeshComponent;
    FPowerInfo PowerInfo;

};

class AConcreteFortObservation : public AFortObservation
{
    FConcreteSettler ConcreteSettler;

};

struct FStaticArtilleryDamageParams
{
    TSubclassOf<class UDamageType> Type;
    float BaseAmount;
    float Radius;
    float InnerRadius;
    float Falloff;
    float AccuracyRadius;
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;
    class USoundCue* ShotSoundCue;

};

class AFortStaticArtillery : public ATunnelNode
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UTeamFlagMeshComponent* FlagMesh;
    class UParticleSystemComponent* FireShellParticleSystem;
    float MinDistance;
    float MaxDistance;
    float FiringAngle;
    float FiringCooldown;
    float MinVerticalAngle;
    float MaxVerticalAngle;
    FStaticArtilleryDamageParams DamageParams;
    float InitialDelay;
    float ExplosionDelay;
    FConcreteSettler ConcreteSettler;
    FPowerInfo PowerInfo;
    float HorizontalAngle;
    float VerticalAngle;
    bool bIsFiring;

    void OnRep_IsFiring();
};

class UFortStaticArtilleryAnimInstance : public UAnimInstance
{
    float HorizontalAngle;
    float VerticalAngle;

};

class AFortTurret : public AFoxholeTurret
{
    FPowerInfo PowerInfo;
    class UBoxComponent* OccupiableTriggerVolume;

};

class AConcreteFortTurret : public AFortTurret
{
    FConcreteSettler ConcreteSettler;

};

class AFortTurretAT : public AGunTurret
{
    FPowerInfo PowerInfo;

};

class AConcreteFortTurretAT : public AFortTurretAT
{
    FConcreteSettler ConcreteSettler;

};

class AFortTurretMG : public AFortTurret
{
    class USkeletalMeshComponent* SkeletalMesh;

};

class AConcreteFortTurretMG : public AFortTurretMG
{
    FConcreteSettler ConcreteSettler;

};

class AFoundation : public ATeamStructure
{
    FConcreteSettler ConcreteSettler;

};

class AFoundationBuildSite : public AStructureBuildSite
{
};

class AFoxhole : public ABuildableStructure
{
};

class AMGPillbox : public AFoxholeTurret
{
    class USkeletalMeshComponent* SkeletalMesh;

};

class UFoxholeTurretAnimInstance : public UAnimInstance
{
    float TrackingAngle;

};

class UGunTurretAnimInstance : public UAnimInstance
{
    float TrackingAngle;

};

class UCoastalGunAnimInstance : public UAnimInstance
{
    float TrackingAngle;

};

struct FFreighterCargo
{
    FName CodeName;
    FSavedShippableData SavedData;

};

class AFreighter : public ASimVehicle
{
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class USceneComponent* TransferLocation;
    class UParticleSystemComponent* FrontLeftWaterEmitter;
    class UParticleSystemComponent* FrontRightWaterEmitter;
    class UParticleSystemComponent* BackRightWaterEmitter;
    class UParticleSystemComponent* BackLeftWaterEmitter;
    class UParticleSystemComponent* WakeWaterEmitter;
    class UAudioComponent* WaterDriveLoop;
    class UAudioComponent* DeployingSFXLoop;
    class USoundCue* DeployedSFXTrigger;
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;
    int32 MaxShippableCount;
    TArray<FFreighterCargo> CurrentShippables;
    FReplicatedShippableData ShippableData;
    uint8 State;
    class UMeshComponent* DynamicMeshComponent;

    void ServerUndeploy();
    void ServerDeploy();
    void OnRep_State(const uint8 PreviousState);
    void OnRep_ShippableData();
    void OnRep_CurrentShippables();
};

class UFreighterAnimInstance : public USimVehicleAnimInstance
{
    bool bIsDeployed;

};

class AFrontierBase : public AForwardBase
{
};

class AFrontierBaseBuildSite : public ABaseBuildSite
{
};

class AContainer : public AReservableStructure
{
    class UStaticMeshComponent* MeshComponent;
    class UGenericStockpileComponent* GenericStockpileComponent;

};

struct FFuelTankerInfo
{
    class AActor* OwnerActor;
    class UItemHolderComponent* OwnerItemHolder;
    class UGenericStockpileComponent* OwnerGenericStockpile;
    class UStealthComponent* OwnerStealthComponent;
    class UAudioComponent* RefuelAudioComponent;
    float AmountRefueledPerSecond;
    float RefuelCycleDuration;
    FVector FuelLocation;
    class USoundCue* RefuelActivateSound;
    class USoundCue* RefuelSoundLoop;
    class UMaterialInterface* RefuelCableMaterial;
    class UCableComponent* RefuelCableComponent;
    class AActor* TargetActorToRefuel;
    FFuelQuantity FuelBuffer;

};

class AFuelContainer : public AContainer
{
    FFuelTankerInfo FuelTankerInfo;

    void OnRep_FuelTankerInfo();
};

class UFuelItemComponent : public UItemComponent
{
    FName FuelItemCodeName;
    int32 FuelCapacity;
    class USoundCue* RefuelSound;
    bool bIsEquipped;

    void ServerStartActivityState(FActivityStateChange ActivityStateChange);
    void ServerRefuelTarget();
    void ServerCancelActivityState();
    void OnRep_IsEquipped();
};

struct FLiquidTank
{
    FName CodeName;
    float Amount;
    float MaxAmount;

};

class AFuelSilo : public ATeamStructure
{
    class UBuildSocketComponent* PipeInput0;
    class UBuildSocketComponent* PipeOutput0;
    FLiquidTank LiquidTank;

    void OnRep_LiquidTank();
};

class IFuelTanker : public IInterface
{
};

class UGarrisonComponent : public UActorComponent
{
    float GarrisonSize;
    bool bIsGarrisonEnabled;
    bool bIsToggledDynamically;

};

struct FDynamicTierInfo
{
    bool bIsEnabled;
    TSubclassOf<class UWindowMeshSet> WindowMeshSet;

};

class AGarrisonHouse : public ATunnelNode
{
    float TimeToStarvation;
    FDynamicTierInfo DynamicTierInfo;
    class UAITurretsControllerComponent* AITurretsController;

    bool IsNeutralHouse();
};

class AGarrisonHouseBuildSite : public AStructureBuildSite
{
};

class AGarrisonStation : public AGarrisonHouse
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UTechTreeComponent* TechTreeComponent;
    class UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;
    float TunnelConnectionRange;
    FDecayInfo DecayInfo;
    FSpawnPoints SpawnPoints;

};

class AGarrisonStationBuildSite : public AGarrisonHouseBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UTechTreeComponent* TechTreeComponent;
    FSpawnPoints SpawnPoints;

};

class AGate : public ATeamStructure
{
    class USoundCue* OpeningSoundCue;
    class UBoxComponent* NoBuildCollider;
    class UBoxComponent* GateCollider;
    class USkeletalMeshComponent* GateDoorMesh;
    FName GateCollisionProfileName;
    class UMaterialInterface* GateDoorOverlapMaterial;
    EGateState GateState;

    void OnRep_GateState();
};

class UGateAnimInstance : public UAnimInstance
{
    EGateState GateState;

};

class IGenericActor : public IInterface
{
};

class IGenericInventory : public IInterface
{
};

struct FGenericStockpileConfig
{
    EStockpileEntryType Type;
    int32 QuantityLimit;
    int32 TotalQuantityLimit;
    TMap<FName, int32> TotalQuantityOverrides;
    TArray<FName> ValidEntriesOverride;
    TArray<FStockpileEntry> PreStockedEntries;

};

class UGenericStockpileComponent : public UActorComponent
{
    TArray<FGenericStockpileConfig> Configs;
    float RetrieveDurationModifier;
    bool bAllowWaterVehicles;
    bool bCloseUIWhenRetrieving;
    bool bRequireFullItemStockpileToSubmit;
    bool bAllowNeutralSubmissions;
    bool bAllowDirectRetrievals;
    TArray<FStockpileEntry> Items;
    TArray<FStockpileEntry> ReservableItemCrates;
    TArray<FStockpileEntry> Vehicles;
    TArray<FStockpileEntry> VehicleCrates;
    TArray<FStockpileEntry> Structures;
    TArray<FStockpileEntry> StructureCrates;
    int32 ValueDebt;

    void OnRep_Items();
};

class UReplicatedGenericStockpileComponent : public UGenericStockpileComponent
{
};

class UGenericItemStockpileComponent : public UGenericStockpileComponent
{
};

class UGenericCrateStockpileComponent : public UGenericStockpileComponent
{
};

class UGrenadeAdapterComponent : public UHitScanWeaponComponent
{
    class USkeletalMesh* GrenadeAdapterMesh;
    FActivityStateInfo GrenadeReloadActivityStateInfo;
    TArray<class TSubclassOf<AWarProjectile>> GrenadeClasses;
    class USoundCue* GrenadeFireSound;
    class USkeletalMesh* BayonetMesh;
    class USoundCue* AttachAccessorySound;
    class USoundCue* BayonetAttackSound;
    FMultiAmmo GrenadeMultiAmmo;
    bool bIsGrenadeMode;
    bool bIsBayonetMode;

    void ServerToggleFireMode(FActivityStateChange ActivityStateChange);
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    void ServerReleaseGrenade(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange);
    void ServerBayonetAttack(FActivityStateChange ActivityStateChange);
    void OnRep_IsGrenadeMode();
    void OnRep_IsBayonetMode();
    void OnRep_GrenadeMultiAmmo();
    void MulticastPlayFX();
};

class UProjectileGunnerMountComponent : public UMountComponent
{
    class UParticleSystem* MuzzleFlashPS;
    class UParticleSystem* BackMuzzleFlashPS;
    class USoundCue* ReloadSoundCue;
    class USoundCue* ShotSoundCue;
    float MinSpeed;
    float MaxSpeed;
    float SpeedVariation;
    float SuggestedVelocitySpeed;
    float FallbackAngle;
    TSubclassOf<class AWarProjectile> ProjectileClass;
    bool bIsArtilleryMode;
    bool bIsMultiWeapon;
    bool bShowAimMesh;
    bool bTriggerDriverFiringState;
    bool bIsAutomaticFire;
    int8 Ammo;

    void ServerStopInvoke();
    void ServerStartInvoke(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange);
    void ServerSetPitch(float Pitch);
    void AllSpawnFiringEffects();
};

class UGrenadeGunnerMountComponent : public UProjectileGunnerMountComponent
{
    FMultiAmmo MultiAmmo;
    TArray<class TSubclassOf<AWarProjectile>> GrenadeClasses;

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
};

struct FThrowingStabilityInfo
{
    float MaxApexHalfAngle;
    float BaselineApexHalfAngle;
    float YawSettleTime;
    float YawPeneltyPct;
    float DistancePeneltyPct;
    float DistanceForMaxPenelty;

};

class UGrenadeItemComponent : public UItemComponent
{
    TSubclassOf<class AWarProjectile> GrenadeClass;
    float PostTossDelay;
    float AimLineThickness;
    bool bCanCook;
    FThrowingStabilityInfo ThrowingStabilityInfo;
    class USoundCue* PinPullSound;
    bool bIsEquipped;

    void ServerThrowGrenade(const FCharacterInvokeInfo WeaponInvokeInfo, FVector TossVelocity, FVector MouseCastStart, FVector MouseCastEnd);
    void ServerStartThrowingState(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FVector TossVelocity, FActivityStateChange ActivityStateChange, FVector MouseCastStart, FVector MouseCastEnd);
    void ServerStartInvoke(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
};

class AGunboat : public ASimVehicle
{
    class USceneComponent* MachineGunMuzzleLocation;
    class USceneComponent* ArtilleryMuzzleLocation;
    class UBoxComponent* WorkVolume;
    class UParticleSystemComponent* FrontLeftWaterEmitter;
    class UParticleSystemComponent* FrontRightWaterEmitter;
    class UParticleSystemComponent* BackLeftWaterEmitter;
    class UParticleSystemComponent* BackRightWaterEmitter;
    class UParticleSystemComponent* FrontWakeWaterEmitter;
    class UParticleSystemComponent* WakeWaterEmitter;
    float ArtilleryGunYaw;
    float ArtilleryGunPitch;
    float MachineGunYaw;
    float MachineGunPitch;
    int32 StashedArtilleryAmmo;
    int32 StashedMachineGunAmmo;

    void SetIsArtilleryFiring(bool IsBowFiring);
    bool IsMachineGunFiring();
    bool IsArtilleryRotating();
    bool IsArtilleryFiring();
    float GetMachineGunYaw();
    float GetMachineGunPitch();
    float GetArtilleryYaw();
    float GetArtilleryPitch();
};

class UGunboatArtilleryGunnerMountComponent : public UMountComponent
{
    class USoundCue* ReloadSoundCue;
    float HorizontalDistance;
    float HorizontalDistanceStep;
    int32 TraceStep;
    float TrackingThresholdPrecisionMultiplier;
    float TelegraphOffset;
    float DamageDelay;
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;
    class USoundCue* FiringSFX;
    class UParticleSystem* MuzzleFlashPS;
    float AnimationHysteresisTime;
    int32 Ammo;

    void ServerSetDistance(float Distance);
    void ServerFire(FActivityStateChange ActivityStateChange);
    void MulticastPlayFiringFX();
};

class IGunnerSupport : public IInterface
{

    void UpdateGunnerYawAndPitch(int32 GunnerIndex, FVector2D YawAndPitch);
    void SetStashedAmmo(int32 GunnerIndex, int32 AmmoAmount, FName AmmoName);
    void SetIsFiring(int32 GunnerIndex, bool IsFiring);
    void SetGunnerWorking(int32 GunnerIndex, bool IsWorking);
    bool IsGunnerWorking(int32 GunnerIndex);
    bool IsFiring(int32 GunnerIndex);
    bool IsDeployed(int32 GunnerIndex, bool bTestFullDeploy);
    float GetTrackingSpeedModifier(int32 GunnerIndex);
    FName GetStashedAmmoType(int32 GunnerIndex);
    int32 GetStashedAmmo(int32 GunnerIndex);
    class USkeletalMeshComponent* GetSkeletalMeshComponent(int32 GunnerIndex);
    int32 GetNumMuzzleSockets(int32 GunnerIndex);
    FTransform GetMuzzleTransformFromIndex(int32 GunnerIndex, int32 MuzzleIndex);
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex);
    bool CanRotate(int32 GunnerIndex);
    bool CanFire(int32 GunnerIndex);
};

class AHalfTrack : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;
    FName StashedAmmoType;
    int32 StashedAmmo;

    void OnRep_GunnerYawAndPitch();
};

class UTaskItemComponent : public UItemComponent
{
    class USkeletalMesh* ItemMesh;
    class USoundCue* StartTaskSoundCue;
    ECharacterActivityState TaskActivityState;
    float MaxRangeToTarget;
    FText NoTargetText;
    FText NoAmmoText;
    FText StartTaskText;
    FText EndTaskText;
    float LoopDuration;
    ETaskItemTargetCheckMethod TargetCheckMethod;
    bool bIsEquipped;

    void ServerTryStartTask(FActivityStateChange ActivityStateChange);
    void ServerStopInvokeTask();
    void OnRep_IsEquipped();
};

struct FGatherResult
{
    FName ResourceCodeName;
    int32 GatheredAmount;

};

class UHammerComponent : public UTaskItemComponent
{
    TSubclassOf<class UDamageType> DamageType;
    TSubclassOf<class AImpactEffect> ImpactEffectClass;
    FName HammerHeadSocketName;
    bool bCanBuild;
    int32 ResourceLevel;
    int32 GatherXPMultiplier;

    void MulticastPlayImpactFX();
    void MulticastOnGather(class AResource* Resource, TSubclassOf<class AImpactEffect> ImpactEffect, const FGatherResult& GatherResult);
};

class AHarvester : public ARWDSimVehicle
{
    float GrindRate;
    float GrindFuelRate;
    float SplitRate;
    float SplitFuelRate;
    float MovementModifier;
    class UCapsuleComponent* GrindingCapsule;
    class UParticleSystemComponent* NoTargetParticleSystem;
    class UParticleSystemComponent* ComponentsParticleSystem;
    class UParticleSystemComponent* DefensesParticleSystem;
    class UParticleSystemComponent* SalvageParticleSystem;
    class UParticleSystemComponent* SulfurParticleSystem;
    class UParticleSystemComponent* SplitParticleSystem;
    class UAudioComponent* GrindingSFXLoop;
    class UAudioComponent* SplittingSFXLoop;
    class UAudioComponent* RotatingSFXLoop;
    uint8 Action;

    void ServerStopAction();
    void ServerStartGrinding();
    void OnRep_Action();
    void MulticastOnResourceSplit();
    void MulticastOnGather(class AResource* Resource, const FGatherResult& GatherResult);
};

class UHarvesterAnimInstance : public USimVehicleAnimInstance
{
    bool bIsGrinding;
    bool bIsSplitting;

};

class UWarLocalPlayer : public ULocalPlayer
{
    class UPlayerSaveGame* PlayerSaveGame;

};

class UHeadlessLocalPlayer : public UWarLocalPlayer
{
};

struct FRegionConnectionInfo
{
    FString MapCodename;
    FString ServerName;
    int8 serverType;
    FString Version;
    FString steamId;
    FString ipAddress;
    uint16 Port;
    uint16 PortBeacon;
    uint64 packedWarStatus;
    uint64 packedServerState;
    int16 colonialQueueSize;
    int16 wardenQueueSize;
    int16 ColonialOpenSlots;
    int16 WardenOpenSlots;

};

class AWarPlayerController : public APlayerController
{
    bool bTravelRequestIsPending;
    bool bTravelRequestWasSuccessful;
    bool bTravelReservationIsPending;
    bool bTravelReservationIsComplete;
    bool bQueuedViaBorderTravel;
    bool bAllowedToContinueTravelling;
    class AWarBeaconClient* WarBeaconClient;

    void ServerSignalAttemptServerTravel();
    void ServerQueueForDeployment(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery);
    void ServerInitiateTravel();
    void ServerGetTravelInfo(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery);
    void ServerClientTravelLoadComplete();
    void SelectWarDrawDebugWorld();
    void EnableInputForThis(uint8 InputDisableReason);
    void ClientTravelToWorldConquestMap(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint);
    void ClientTravelSuccess(uint64 TravelId, FRegionConnectionInfo RegionConnectionInfo);
    void ClientTravelProgress(uint32 NumPlayersConnected, uint32 NumPlayersTotal);
    void ClientTravelPending(int32 PendingTravelId, EWorldConquestMapId DestinationMapId);
    void ClientTravelFailure(ETravelResult Result, int32 PartySize);
    void ClientTravelComplete(uint64 TravelId, float InvulnerabilityDuration);
    void ClientTravelArrived(FTransform ReservationLocation);
    void ClientReceiveTravelInfo(const FRegionConnectionInfo TravelInfo, const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool Success, bool bIsRecovery);
    void ClientQueueForTravel(EWorldConquestMapId DestinationMapId, FRegionConnectionInfo RegionConnectionInfo);
    void ClientOnServerTravelAllowed();
    void ClientExitRecoveryMode();
    void ClientEnterRecoveryMode(float Duration);
};

struct FCommsRating
{
    ECommsRatingCondition Condition;

};

struct FSpawnPointInfo
{
    EWorldConquestMapId MapId;
    uint8 SpawnPointType;
    uint16 SpawnSupplies;

};

struct FPlayerSpawnPointsInfo
{
    FSpawnPointInfo StaticBase;
    FSpawnPointInfo ForwardBase;

};

struct FStructureStats
{
    class AActor* Structure;
    float DecayRemainingTime_Sec;
    float DecayAmount;
    bool bShouldDecay;
    bool bDecayPreventedByBase;
    bool bIsBuildSite;
    int32 Health;
    int32 MaxHealth;
    FResourceAmounts ResourceRequirements;
    float ConcreteProgress;
    float IslandHealth;
    float Suppression;

};

struct FWarMessageTest
{
    int32 TestInt;
    float TestFloat;
    bool TestBool;
    FString TestStr;
    ETestEnum TestEnum;

};

struct FStockpileItemFilter
{
    int32 ItemHolderSlotIndex;
    int32 QuantityToSubmit;

};

struct FSpecializedFactoryOrderItem
{
    FName CodeName;
    bool bIsPrototype;

};

struct FCharacterCustomizationInfo
{
    bool bIsFemale;
    int8 SkinTone;

};

struct FRocketLaunchCodeRequest
{
    class ARocketFacility* RocketFacility;
    EWorldConquestMapId LaunchCodeRegion;
    uint8 LaunchCodeID;

};

struct FRepSnapInfo
{
    ESnapType Type;
    FName SocketName;
    class UBuildSocketComponent* TargetSocket;
    float RotationZ;
    class USplineConnectorComponent* TargetPath;
    float PathPackedAlpha;

};

struct FRocketBuildRequest
{
    class ARocketFacility* RocketFacility;
    int32 SquadId;

};

struct FVoiceLoginInfo
{
    FString OnlineID;
    FString LoginToken;
    EVoiceChannelType ChannelType;
    FString ChannelName;
    FString ChannelJoinToken;

};

struct FClientShardConfig
{
    int32 PopulationCap;
    int32 RequiredVictoryTowns;
    FDateTime ScheduledConquestStartTime;

};

struct FRegionMinimalData
{
    EFactionId StarterRegionTeamID;
    TArray<FVector2D> ColonialStarterRegionZones;
    TArray<FVector2D> WardenStarterRegionZones;

};

struct FRegionLogEntry
{
    FString OnlineID;
    FString PlayerName;
    ERegionLogEntryType Type;
    uint32 Value;
    FDateTime EventTime;
    float LocationX;
    float LocationY;
    uint32 RegionLogId;

};

struct FRegionLogPage
{
    TArray<FRegionLogEntry> EntryList;

};

struct FPlayerActivity
{
    float EnemyPlayerDamage;
    float FriendlyPlayerDamage;
    float EnemyDamage;
    float FriendlyDamage;
    int32 FriendlyConstruction;
    int32 FriendlyRepairing;
    float FriendlyHealing;
    int16 FriendlyRevivals;
    int16 VehiclesTransferred;
    float VehicleSelfDamage;
    int32 MaterialsSubmitted;
    int32 MaterialsGathered;
    int32 SuppliesDelivered;

};

struct FActivityStateDebugTrace
{
    double Timestamp;
    TEnumAsByte<ENetRole> Role;
    EActivityStateDebugTraceType Type;
    ECharacterActivityState ActivityState;
    uint8 SequenceNumber;

};

struct FMapItem
{
    int32 ObjectIndex;
    int32 ObjectSerialNumber;
    EMapTeamId TeamId;
    EMapTeamId ListeningTeamID;
    EMapIconType IconType;
    uint8 Flags;
    FVector2D NormalizedLocation;

};

struct FMapTextItem
{
    FVector2D NormalizedLocation;
    FString Text;
    EMapMarkerType MapMarkerType;

};

struct FRegionMapData
{
    int32 Version;
    EWorldConquestMapId RegionId;
    int8 ScorchedVictoryTowns;
    TArray<FMapItem> MapItems;
    TArray<FMapTextItem> TextItems;

};

struct FTweakables
{
};

struct FWarReplicatedTweakables : public FTweakables
{
    int32 ReinforcementsMinimumPopulation;
    float ReinforcementsThresholdPercent;
    int32 FOVMode;
    int32 CameraUseVerticalBlend;
    float CameraMaxArmLength;
    float CameraTopPadding;
    float CameraBottomPadding;
    float CameraDeadZone;
    int32 CameraClampRadius;
    float CameraLerpSpeedXY;
    float CameraLerpSpeedZ;
    float DownvoteCooldownSeconds;
    float VehicleBridgeDamageDepth;
    float RoadClearanceHeight;
    float DebuffMaxRangeModifier;
    float DebuffTimeToMaxEffectivenessModifier;
    float DebuffFiringConeModifier;
    float DebuffFiringPeriodModifier;
    int32 MaxSquadsValidation;
    int32 MaxFacilityMinesPerField;
    float PipelineVolumeDeltaPerSecond;

};

struct FGameplayParams
{
    float SuppressMultiplier;
    float SuppressLossRate;
    float StabilityGainRateMultiplier;
    float CoverFactorFloor;

};

struct FStockpileBroadcastAlertInfo
{
    FString StockpilerOnlineID;
    FString StockpilerPlayerName;
    class AStructure* StockpiledStructure;
    TArray<FStockpileEntry> Submissions;
    bool bAreSubmissionsCrates;

};

struct FConquestOverNotificationInfo
{
    uint8 ConquestWinner;
    int8 NumColonialAchievements;
    int8 NumWardenAchievements;

};

struct FBuildResponse
{
    EBuildResponse Result;
    class AStructure* Structure;
    FName CodeName;

};

struct FWarAchievementCompletedInfo
{
    EWarAchievementType Type;
    EFactionId FactionId;

};

struct FStockpileEventsResponse
{
};

struct FWarGridCoordinate
{
    int16 Letter;
    int16 Number;
    int8 KeypadX;
    int8 KeypadY;

};

struct FRPCRocketPreLaunchAlert
{
    EWorldConquestMapId Origin;
    uint8 LaunchCodeID;
    EFactionId FactionId;
    EWorldConquestMapId MapId;
    FWarGridCoordinate Coordinate;
    FVector_NetQuantize StrikeLocation;

};

struct FTechTreeComponentNetworkStatus
{
    int32 ItemUnlockBits;
    int32 InfrastructureModCounts;

};

struct FMapDetailStockpileInfo
{
    TArray<FStockpileEntry> Items;
    TArray<FStockpileEntry> ItemCrates;
    TArray<FStockpileEntry> Vehicles;
    TArray<FStockpileEntry> VehicleCrates;
    TArray<FStockpileEntry> Structures;
    TArray<FStockpileEntry> StructureCrates;

};

struct FReserveStockpileMapDetailInfo
{
    FString StockpileName;
    FMapDetailStockpileInfo StockpileInfo;

};

struct FMapItemDetails
{
    uint16 Flags;
    int16 DetailValue;
    int16 AltDetailValue;
    FMapDetailStockpileInfo StockpileInfo;
    TArray<FReserveStockpileMapDetailInfo> ReserveStockpileInfoList;
    TArray<uint8> Values;

};

struct FListeningAreaDebugData
{
    FVector2D Location;
    float Radius;

};

class ASimPlayerController : public AWarPlayerController
{
    TWeakObjectPtr<class AStructure> UpgradeTarget;
    float MapIntelRefreshRate;
    int32 MapIntelItemsPerChunk;
    float MapIntelProviderRangeSquared;
    float TravelCountdownDuration;
    FCommsRating CommsRating;
    FPlayerSpawnPointsInfo SpawnPointInfo;
    class ABuildGhost* BuildGhost;
    class ABuildGhost* UpgradeBuildGhost;
    float DeathCamTime;
    float ChatRange;
    int32 PlaceInDeploymentQueue;
    class UUserComponent* UserComponent;
    TArray<class UUserComponent*> UserComponents;
    TArray<FStructureStats> StatsForNearybyStructures;

    void WarMessageTest(const int32 TestInt, const float TestFloat, const bool TestBool, FString TestStr, const ETestEnum TestEnum);
    void TunnelNetworkDebugDraw();
    void ToggleStabilityDebug();
    void ToggleShowMouseCursor();
    void TestTravel(float SearchBorderOffset, float SearchMaxRadius, bool bWaterTravel, float SearchMinimumWaterDepth, float WorldX, float WorldY, float WorldZ, float Yaw);
    void StructureIslandDebugDraw();
    void SpawnAllVehicles(int32 PerVehicleCount);
    void SpawnAllStructures(int32 PerStructureCount);
    void SimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    void ServerWhisper(FString TargetOnlineID, FString Message);
    void ServerWarMessageTest(const FWarMessageTest& Message);
    void ServerVoteOnSignPost(const bool bIsUpVote, class ASignPost* TargetSignPost);
    void ServerVoteOnChatMessage(FString TargetOnlineID, const bool bIsUpVote);
    void ServerVoteKick(FString PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory);
    void ServerUpgradeVehicle(class AAssemblyStation* AssemblyStation, class ASimVehicle* TargetSimVehicle);
    void ServerUpgradeTargetStructure(class AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation);
    void ServerUpgradeStaticTargetStructure(class AStructure* TargetStructure, FName UpgradeCodename);
    void ServerUpdateInfo(const uint32 Info);
    void ServerUnpackShippableCrate(class UActorComponent* SourceComponent, class UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, FString TargetStockpileName);
    void ServerUnCrateItems(class UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    void ServerTransferItem(class UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, class UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit);
    void ServerToggleVehicleLock(class ASimVehicle* SimVehicle);
    void ServerTimeRequest(float RequestTime);
    void ServerTeleportToLocation(const FVector& WorldPosition);
    void ServerSyncWorldPlayerId();
    void ServerSyncTravelMaps();
    void ServerSyncTimeToNextWar();
    void ServerSyncStaticRegionMapData();
    void ServerSyncDynamicRegionMapData();
    void ServerSwapEquipment(const int8 BackpackItemIndex);
    void ServerSubmitVehicleToStockpile(class AStorageFacility* StorageFacility, class ASimVehicle* SimVehicle);
    void ServerSubmitTech(class AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex);
    void ServerSubmitStructureToStockpile(class AStorageFacility* StorageFacility, class ABuildableStructure* Structure, FString TargetStockpileName);
    void ServerSubmitStarterKit(class AStructure* Structure);
    void ServerSubmitResourceConverterOrder(class AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    void ServerSubmitRefinementOrderWithLimit(class ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit);
    void ServerSubmitRefinementOrder(class ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll);
    void ServerSubmitPatients(class AHospital* Hospital);
    void ServerSubmitLargeItem(class AActor* Actor);
    void ServerSubmitItemsToStockpileFromItemHolderWithItemFilter(class AActor* DestinationActor, class UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter);
    void ServerSubmitItemsToStockpileFromItemHolder(class AActor* DestinationActor, class UItemHolderComponent* SourceItemHolder);
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered(class AActor* DestinationActor, const FStockpileEntry ItemFilter);
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpile(class AActor* DestinationActor);
    void ServerSubmitFactoryOrder(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems);
    void ServerSubmitCrateToStockpile(class AStorageFacility* StorageFacility, class AShippableCrate* ShippableCrate, const bool bSubmitToPublic);
    void ServerSubmitContainerToStockpile(class AStructure* Structure, class AContainer* Container);
    void ServerStopRefuelingActorInUse(class AActor* RefuelSourceActor, class AActor* RefuelTargetActor);
    void ServerSplitItemStack(class UItemHolderComponent* TargetItemHolder, int8 FromIndex);
    void ServerSpectateSpawnPoint();
    void ServerSpectate(const int8 Delta, const bool bAllowSpectatorCameraFallback);
    void ServerSpawnAllVehicles(int32 PerVehicleCount);
    void ServerSpawnAllStructures(int32 PerStructureCount);
    void ServerSortWreckage(class UItemHolderComponent* SourceItemHolder);
    void ServerSimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    void ServerSetVehicleLock(class ASimVehicle* SimVehicle, const bool bIsLocked);
    void ServerSetStructureColor(class AShippingContainer* ShippingContainer, const uint8 Color);
    void ServerSetSpawnPoint(class AStructure* NewSpawnPoint);
    void ServerSetRefineryOrderAccessLevel(class ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel);
    void ServerSetPowerGridConnectionState(class AActor* LHSActor, class AActor* RHSActor, const bool bWantsItConnected);
    void ServerSetOutfitType(const EOutfitType OutfitType, const bool bBypassVipCheck);
    void ServerSetInventorySourceOverride(class UActorComponent* InventorySourceOverride);
    void ServerSetCharacterCustomizationInfo(const FCharacterCustomizationInfo CustomizationInfo);
    void ServerSetCameraFlags(int32 Flags, class AActor* Actor);
    void ServerSetAdminCommandTarget(class AActor* TargetActor);
    void ServerRespawnDefault();
    void ServerRespawnAtNearestStaticBase();
    void ServerRespawnAtNearestSafeHouse();
    void ServerRespawnAtAssignedPoint(const uint8 Category);
    void ServerResetPowerGridConnectionState(class AActor* Actor);
    void ServerResetInventorySourceOverride();
    void ServerRequestStructureInfo(class AStructure* Structure, const bool bIsInitialRequest);
    void ServerRequestStockpileAccessEvents(class UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index);
    void ServerRequestRegionMinimalData(const EWorldConquestMapId MapId);
    void ServerRequestRegionLog(const uint32 LogPageIndex);
    void ServerRequestOfflineActivityLog(FString OnlineID);
    void ServerRequestNetworkTechStatus(const class AStructure* Structure);
    void ServerRequestMapItemDetails(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber);
    void ServerRequestMapIntelligence();
    void ServerRequestActivityLog(class ASimPlayerState* TargetPlayerState);
    void ServerRefuelActorInUse(const FName FuelCodeName, class AActor* RefuelSourceActor, class AActor* RefuelTargetActor);
    void ServerReconnectToVoiceChat();
    void ServerReceieveInfo();
    void ServerPickUpFactoryOrder(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, FString TargetOrderOnlineID);
    void ServerPackageShippable(class AActor* ShippableActor, const bool bWantsItPackaged);
    void ServerOnUserResetAFKTimer();
    void ServerOnPlayerLogOut();
    void ServerOnNewBaseAccessed(class AStructure* AccessedBaseStructure);
    void ServerJoinWar(const uint8 TeamId);
    void ServerGenerateVivoxChannelJoinToken(const EVoiceChannelType ChannelType, FString ChannelName, FString AccountSIPAddress, FString ChannelSIPAddress);
    void ServerFullRepair(class AVehicleFactory* VehicleFactory);
    void ServerFlagDisruptivePlacement(class ATeamStructure* TeamStructure);
    void ServerEnterRocketLaunchCode(const FRocketLaunchCodeRequest& Request);
    void ServerEditSignPost(const FText& Text, class ASignPost* TargetSignPost);
    void ServerDropItem(class UItemHolderComponent* ItemHolder, const int8 ItemIndex);
    void ServerDetachUserComponents();
    void ServerDetachLargeItem(class ASimVehicle* DetachTarget);
    void ServerDestroySignPost(class ASignPost* TargetSignPost);
    void ServerDeployLargeItem(const FVector& Location, const FRotator& Rotation);
    void ServerDemolishStructure(class AStructure* Structure);
    void ServerCrateItems(class UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    void ServerConfirmAdminDestroy(const FName ObjectName);
    void ServerCommend(FString PlayerOnlineId);
    void ServerCommandStringID(FString ID);
    void ServerCommandID(int8 ID);
    void ServerClearSquad(class UObject* InCoalitionAssignable);
    void ServerClaimStructureIsland(class AStructure* Structure, const int32 SelectedSquadID);
    void ServerClaimStructure(class AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed);
    void ServerClaimResourceConverterOrder(class AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    void ServerClaimRefinementOrder(class ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType);
    void ServerChat(FString Msg, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage);
    void ServerChangeVehicleFuelType(class ASimVehicle* SimVehicle);
    void ServerChangeFactoryOrderAccess(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId);
    void ServerCancelRetrieval();
    void ServerCancelRefinementOrder(class ARefinery* TargetRefinery, const int32 RefinableItemIndex);
    void ServerCancelPackaging();
    void ServerCancelFactoryOrder(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type);
    void ServerBuildVehicleFromStructure(class AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype);
    void ServerBuildVehicle(const FName CodeName, const FVector& Location, const FRotator& Rotation);
    void ServerBuildStructureFromStructure(class AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype);
    void ServerBuildStructure(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    void ServerBuildRocket(const FRocketBuildRequest& Request);
    void ServerBuildRailVehicle(const FName CodeName, const FRepSnapInfo SnapInfo);
    void ServerAttachUserComponents(class AActor* AssociatedActor);
    void ServerAttachLargeItem(class AActor* AttachTarget);
    void ServerAssignSquad(class UObject* InCoalitionAssignable, const int32 NewSquadID);
    void ServerAssembleStructureOrVehicle(class AAssemblyStation* AssemblyStation, const FName CodeName);
    void OnRep_UserComponents();
    void OnRep_PlaceInDeploymentQueue();
    void OnClientTravelWaitComplete(FString URL);
    void DrawDebugVehicleHitbox(class ASimVehicle* SimVehicle, FVector Position, FVector Extents, FQuat Rotation, TEnumAsByte<ECollisionResponse> CollisionResponseToPawn);
    void DebugRecreateLandscapeHoles();
    void DebugDrawCurrentLandscape();
    void ClientWorldChatMessage(FString Message, FString SenderName, FString SenderOnlineId, const uint8 SenderTeamID, const EChatChannel Channel, const EChatLanguage BroadcastLanguage, const EWorldConquestMapId MapId, const bool bReportingWhisperToSelf, const bool bIsEnabled);
    void ClientWarEndingAlert(int32 SecondsUntilWarEnd, int32 Duration);
    void ClientVoiceLogin(const FVoiceLoginInfo& VoiceLoginInfo);
    void ClientUpdateUTCOffset(const int64 ServerDateTimeTicks);
    void ClientUpdateShardConfig(FClientShardConfig ClientShardConfig);
    void ClientUpdateRegionMinimalData(const FRegionMinimalData& RegionMinimalData);
    void ClientUpdateRegionLog(const FRegionLogPage& RegionLogPage, const uint32 MaxAvailablePages);
    void ClientUpdateActivityLog(const FPlayerActivity& Activity);
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace, class ASimCharacter* SimCharacter);
    void ClientTimeResponse(float RequestTime, float ServerTime);
    void ClientTeleportToMapMarker(FString TargetMapMarkerName);
    void ClientSyncWorldPlayerId(FString ID);
    void ClientSyncTravelMaps(const TArray<FRegionConnectionInfo>& TravelMaps);
    void ClientSyncTimeToNextWar(const int32 Seconds);
    void ClientSyncStructureClaimStatus(class AStructure* TargetStructure, const int32 SquadId, const int32 SecondsRemaining);
    void ClientSyncStructureBuilderInfo(class AStructure* TargetStructure, FString BuilderOnlineID, FString BuilderName);
    void ClientSyncStatsForNearbyStructures(const TArray<FStructureStats>& StatList);
    void ClientSyncStaticRegionMapData(const FRegionMapData& StaticMapData);
    void ClientSyncReplicatedTweakables(const FWarReplicatedTweakables& NewWarRepTweakables);
    void ClientSyncMapIntelligence(const bool bOnlySyncIfMapIsOpen);
    void ClientSyncGameplayParams(const FGameplayParams& GameplayParams);
    void ClientSyncDynamicRegionMapData(const FRegionMapData& RegionMapData);
    void ClientSurrenderAlert();
    void ClientStopSpectateTargetTick();
    void ClientStartRespawnTimer(const float RespawnTime);
    void ClientSimReset(const bool bInIsLeavingDueToServerTravel);
    void ClientShowVehicleStockpileResponse(const EVehicleStockpileResponse Response);
    void ClientShowUnrestrictedNotification(const ERestrictedState UnrestrictedState);
    void ClientShowTravelReservationAlert();
    void ClientShowTeamKillWarning();
    void ClientShowStockpileAlert(FStockpileBroadcastAlertInfo StockpileBroadcastAlertInfo);
    void ClientShowSquadClaimedNotification(const FName CodeName, const int32 SquadId);
    void ClientShowShippableResponse(const uint8 ShippableStatus);
    void ClientShowRocketFacilityResponse(const class ARocketFacility* RocketFacility, const ERocketConsoleActionResult ActionResult);
    void ClientShowResistanceStart(const EFactionId ConquestWinner);
    void ClientShowRecentItem(const FName& ItemCodeName, const int32 StackSize);
    void ClientShowPlacementStatus(const EPlacementStatus PlacementStatus);
    void ClientShowMapNames(const bool bShow);
    void ClientShowLongRangeArtilleryResponse(class AActor* LongRangeArtillery, const uint8 Response);
    void ClientShowIntelCenterResponse(class AActor* IntelCenter, const uint8 Response);
    void ClientShowHUDNotification(const EHUDNotification HUDNotification);
    void ClientShowHUDCodeNameNotification(const EHUDNotification HUDNotification, const FName CodeName);
    void ClientShowHUDClaimNotification(const EHUDNotification HUDNotification, const class AActor* Actor, const int32 SquadId);
    void ClientShowHUDActorNotification(const EHUDNotification HUDNotification, const class AActor* Actor);
    void ClientShowEventVictory(const EFactionId FactionWinner);
    void ClientShowDeployResponse(const EDeployResponse DeployResponse);
    void ClientShowDeploymentFailureNotification(const uint8 Reason);
    void ClientShowConquestVictory(const FConquestOverNotificationInfo ConquestOverInfo);
    void ClientShowBuildResponse(const FBuildResponse& BuildResponse);
    void ClientShowBorderBaseResponse(const uint8 Response);
    void ClientShowAchievementCompleted(const FWarAchievementCompletedInfo CompletionInfo);
    void ClientSetVehicleReplicatedBasedMovement(class ASimVehicle* Vehicle, const FBasedMovementInfo& MovementInfo);
    void ClientSetTestFlag(ETestFlags Flag, bool bIsSet);
    void ClientSetSpawnPointResponse(class AStructure* NewSpawnPoint, const uint8 Response);
    void ClientSetShowVisibilityDebug(const bool bShow);
    void ClientSetShowStructureStats(const bool bShow);
    void ClientSetShowHP(const bool Show);
    void ClientSetNoVehicleBuild(bool InNoVehicleBuildEnabled);
    void ClientSetMapTeleport(const bool bIsAwaitingClick);
    void ClientSetItemAsStackableCheat(const FName& ItemCodeName);
    void ClientSetFastBuild(const bool bIsFastBuild);
    void ClientSetExternalWarServiceConnectionInfo(FString ExternalWarServiceUri, FString InSignedPlayerRequestData);
    void ClientSetCinematicCamera(const float NewCameraRotateSpeed, const float NewCameraZoom, const bool bInAreCharacterStencilsEnabled);
    void ClientSetCameraFlags(int32 Flags);
    void ClientRespawnAtAssignedPoint(const uint8 Category);
    void ClientResistanceStartingAlert(int32 SecondsUntilResistanceEnd, int32 Duration);
    void ClientResetStructureClaimStatus(class AStructure* TargetStructure);
    void ClientResetRetrieveState(const ETransactionResponse Response);
    void ClientRefinementOrderResponse(const ERefinementOrderResponse Response);
    void ClientReconnectToVoiceChat();
    void ClientReceiveTransactionResponse(const ETransactionResponse Response);
    void ClientReceiveTechResponse(const uint8 TechResponse);
    void ClientReceiveStockpileAccessEvents(class UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index, const FStockpileEventsResponse& EventsResponse);
    void ClientReceiveRocketAlert(const FRPCRocketPreLaunchAlert& Alert);
    void ClientReceiveRegionMinimalData(const EWorldConquestMapId MapId, const FRegionMinimalData& RegionMinimalData);
    void ClientReceiveOnlineIDInfo(FString OnlineID);
    void ClientReceiveNetworkTechStatus(const class AStructure* Structure, const FTechTreeComponentNetworkStatus NetworkStatus);
    void ClientReceiveMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber, const FMapItemDetails& MapItemDetails);
    void ClientReceiveListeningAreaDetails(const TArray<FListeningAreaDebugData>& InListeningAreaDetails);
    void ClientReceiveInfo();
    void ClientReceiveEmptyMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber);
    void ClientQueueMainMenuPrompt(const EMainMenuPromptType PromptType);
    void ClientOnVehicleMountError();
    void ClientOnVehicleExitFailure();
    void ClientOnVacateSuccess();
    void ClientOnSubmitPatientsResponse(const ESubmitPatientsResponse Response);
    void ClientOnShippableResponse(const uint8 ShippableStatus);
    void ClientOnRocketGroundZeroEvent(const FVector_NetQuantize Location);
    void ClientOnProfileDownloadComplete(const bool bIsRegionTravelling);
    void ClientOnOccupySuccess(bool OccupantCrouches);
    void ClientOnOccupyError();
    void ClientOnLongRangeArtilleryFireShellEvent(class AActor* LongRangeArtillery, const FVector_NetQuantize Location);
    void ClientOnIntelCenterFireListeningAreaEvent(class AActor* IntelCenter, const FVector_NetQuantize Location);
    void ClientOnChannelJoinTokenReceived(const EVoiceChannelType ChannelType, FString ChannelName, FString ChannelJoinToken);
    void ClientNotifyCommend(FString PlayerName, FString OnlineID);
    void ClientModDestroySignPost();
    void ClientJoinWarResponse(const EJoinWarResponse ResponseType, const FGameplayParams& GameplayParams, bool bHadTravelReservation, uint32 StructureLayers, int32 ShardId);
    void ClientGetSquadIdFromSquadName(FString SquadName);
    void ClientFullRepairResponse(const EFullRepairResponse Response);
    void ClientEnterBuildGhostMode(const FName& StructureCodeName);
    void ClientDeleteMapPost(FString OnlineID);
    void ClientCreateDebugMapPost(const FText& Text);
    void ClientCopyToClipboard(FString String);
    void ClientConfirmAdminDestroy(const FName ObjectName);
    void ClientClearSquadsConditional(const int32 MinAgeMinutes, const int32 MaxHistoricalPlayers);
    void ClientClearSquadList();
    void ClientClearAdminAlertMessages();
    void ClientClaimStructureIsland(const int32 Amount);
    void ClientChatMessage(const EChatChannel Channel, const class APlayerState* SenderPlayerState, FString MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled);
    void ClientBeaconLoadTest(FRegionConnectionInfo RegionConnectionInfo, FString MapCodename, uint32 NumBeacons, uint32 Interval, uint32 Duration);
    void ClientAlertMessage(FString MsgString, const float DurationSecs);
    void ClientAlertAFKTimeoutPending();
    void ClientAdminMessageUnformatted(FString Message);
    void ClientAdminMessageList(const TArray<FString>& MessageList);
    void ClientAdminMessage(FString S);
    void ClientAdminDownloadClientConfig(const FName ClientConfigTypeName);
    void ClientAdminAlertMessage(FString MsgString, const float DurationSecs);
    void Client_ShowTargetingRangeResults(float Damage, float Range);
    void Client_ShowHUDNotificationDuration(const FText& NotificationText, float Duration);
    void Client_ShowHUDNotification(const FText& NotificationText);
    void Client_ShowCommendNotification(const FText& NotificationText);
    void CaptureDebugScreenshot();
};

class AHeadlessPlayerController : public ASimPlayerController
{

    void ClientParseCommand(FString CommandString);
};

class AHospital : public ATeamStructure
{
    int32 NumBeds;
    float PatientConversionSeconds;
    TArray<float> RecoveryProgressList;

};

struct FRichTextFieldColor
{
    FString ID;
    FLinearColor Color;

};

struct FChatChannelStyle
{
    FRichTextFieldColor Color;
    FRichTextFieldColor MessageColor;

};

struct FChatStyle
{
    TMap<class EChatChannel, class FChatChannelStyle> ChannelStyleMap;
    FRichTextFieldColor EnemyNameColor;

};

struct FHUDStyle : public FSlateWidgetStyle
{
    FSlateBrush ActiveItemSlotBrush;
    FButtonStyle InventorySlotButtonStyle;
    FSlateBrush InventorySlotImageBrush;
    FSlateBrush EquipmentSlotImageBrush;
    FSlateBrush EquippedInventorySlotBrush;
    FSlateBrush UnequippedInventorySlotBrush;
    FSlateBrush StackBackgroundBrush;
    FSlateBrush CursorOverTargetBrush;
    FSlateBrush CursorNotReadyBrush;
    FSlateBrush CursorIdleBrush;
    FTextBlockStyle ItemStackSizeTextBlockStyle;
    FTextBlockStyle ItemStackSizeSmallTextBlockStyle;
    FTextBlockStyle ButtonTextBlockStyle;
    FTextBlockStyle MapMarkerNotifTextBlockStyle;
    FTextBlockStyle ChatChannelTextBlockStyle;
    FTextBlockStyle ChatTextBlockStyle;
    FTextBlockStyle EndscreenHeadingStyle;
    FTextBlockStyle EndscreenTextBlockStyle;
    FTextBlockStyle WeeklyWarCountdownTextBlockStyle;
    FTextBlockStyle WoundedTimeTextBlockStyle;
    float WoundedTextOffsetNormalized;
    FSlateBrush DefaultBlackBackground;
    FSlateBrush StaminaBarTop;
    FSlateBrush StaminaBarBackground;
    FSlateBrush HotbarBackground;
    FSlateBrush SideAlertBackground;
    FSlateBrush StorageBoxBackground;
    FSlateBrush EquippedBackground;
    FSlateBrush CompasBackground;
    FSlateBrush CompasPoints;
    FSlateBrush CompasNeedle;
    FSlateBrush CompassCustomArrow;
    FSlateBrush FistIcon;
    FSlateBrush EncumberedIcon;
    FSlateBrush EncumberedOverIcon;
    FSlateBrush GasMaskFilterFullIcon;
    FSlateBrush GasMaskFilterLowIcon;
    FSlateBrush GasMaskFilterEmptyIcon;
    FSlateBrush RadioBackpackIcon;
    FSlateBrush RadioBackpackInactiveIcon;
    FSlateBrush InvisibleIcon;
    FSlateBrush BleedingIcon;
    FSlateBrush FlareIcon;
    FSlateBrush SubsystemTrackIcon;
    FSlateBrush SubsystemFuelTankIcon;
    FSlateBrush SubsystemTurretIcon;
    FSlateBrush CoverIcon1;
    FSlateBrush CoverIcon2;
    FSlateBrush CoverIcon3;
    FSlateBrush SuppressionIcon;
    FSlateBrush LockIcon;
    FSlateBrush MapMarkerNotifBackground;
    FSlateBrush ChatTabIcon;
    FButtonStyle ChatOptionsIcon;
    FButtonStyle ChatDiscordButton;
    FSlateBrush ChatTabNotificationBrush;
    FSlateBrush ChatMainBackground;
    FSlateBrush ChatTextFieldBackground;
    FSlateBrush ChatChannelFieldBackground;
    FButtonStyle ChatUpVoteButton;
    FSlateBrush ChatWarserviceConnectivityIcon;
    FTextBlockStyle DescHeaderTextStyle;
    FTextBlockStyle DescBodyTextStyle;
    FSlateBrush DescBackgroundBrush;
    FSlateBrush DescBackgroundBrushNoBottom;
    FSlateBrush GenericDescBackgroundBrush;
    FSlateBrush GenericDescBackgroundBrush2;
    FButtonStyle CreationButtonStyle;
    FTextBlockStyle CreationHeadingStyle;
    FSlateBrush CreationBackgroundBrush;
    FButtonStyle ButtonStyle;
    FButtonStyle UseIconButtonStyle;
    FButtonStyle RecruitIconButtonStyle;
    FButtonStyle StorageIconButtonStyle;
    FButtonStyle AlertToggleClosedButtonStyle;
    FButtonStyle AlertToggleOpenButtonStyle;
    FButtonStyle XButtonStyle;
    FButtonStyle CheckmarkButtonStyle;
    FChatStyle ChatStyle;
    FSlateSound WinResultSound;
    FSlateSound WinResultVictorySound;
    FSlateSound WinResultDefeatSound;
    FSlateBrush RailCouplerIcon;

};

class UHUDWidgetStyle : public USlateWidgetStyleContainerBase
{
    FHUDStyle WidgetStyle;

};

struct FImpactEffectOverride
{
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;
    class UParticleSystem* EmitterTemplate;
    class USoundCue* HitSound;
    FDecalData Decal;
    bool bOrientToHitDirection;
    float DamageThreshold;

};

class AImpactEffect : public AActor
{
    TArray<FImpactEffectOverride> EffectOverrides;
    FDecalData FleshBloodSplatterDecal;
    FHitNotify HitNotify;

};

struct FModificationTier
{
    FResourceAmounts ResourceAmounts;
    bool bUseTemplateActor;
    class UStaticMesh* TemplateMesh;
    TSubclassOf<class AModificationTemplate> TemplateActor;
    bool bUsePreviewMesh;
    class UStaticMesh* PreviewMesh;

};

struct FModificationDefinition
{
    FText DisplayName;
    FText Description;
    FSlateBrush Icon;
    int32 RequiredSocketConnectionMask;
    int32 HiddenBySocketConnectionMask;
    bool bIsRemovable;
    bool bVehicleBlocksRemoval;
    bool bHiddenByDefault;
    bool bVisualsAreClientOnly;
    bool bShowInBuildSite;
    ETechID TechID;
    EInfrastructureType InfrastructureType;
    int32 InfrastructureAmount;
    TMap<class EFortTier, class FModificationTier> Tiers;

};

class UModificationSlotComponent : public USceneComponent
{
    bool bIsLinkedToSocket;
    TArray<FName> LinkedSocketNames;
    bool bIsBlockedByLinkedSocket;
    bool bIsBlockedByModSlot;
    FName BlockedByModSlotName;
    bool bOverrideSplineTarget;
    FName SplineTargetComponentNameOverride;
    bool bIgnoreSocketModSiblings;
    TArray<FName> SubComponentTags;
    TMap<class EFortModificationType, class FModificationDefinition> Modifications;
    class UMaterialInterface* HighlightMaterial;
    bool bIgnoreConcreteMaterial;
    bool bIsBuildableUnderRoads;
    bool bPreviewAllInGhost;
    EFortModificationType ActiveType;
    FModificationTier ActiveTier;
    FModificationTier ShownTier;
    bool bRevertedToDefault;
    int32 NumMaskBits;
    int32 MaskStartBit;
    TArray<TWeakObjectPtr<UBuildSocketComponent>> LinkedSockets;
    TWeakObjectPtr<class UModificationSlotComponent> BlockedByModSlot;

};

class UInfraModificationSlotComponent : public UModificationSlotComponent
{
};

class UInfrastructureComponent : public UActorComponent
{
    EFortModificationType FilteredTypes;
    float Effectiveness;

};

class AIntelCenter : public ATeamStructure
{
    class USkeletalMeshComponent* Mesh;
    class USkeletalMeshComponent* BaseMesh;
    class UOccupiableComponent* OccupiableComponent;
    class UBoxComponent* OccupiableTrigger;
    class UAudioComponent* RotationSFXLoop;
    class UAudioComponent* ListeningSFXLoop;
    class USoundBase* StartListeningSound;
    class USoundBase* EndListeningSound;
    float MaxPower;
    float RequiredPowerForFiring;
    float RequiredPowerForRotation;
    FPowerInfo PowerInfo;
    uint8 RequiredSquadMembers;
    int32 SquadId;
    FVector2D GunnerYawAndPitch;
    float Power;
    FConcreteSettler ConcreteSettler;
    float LastListenEndTime;
    float ListenTimeRemaining;

    void OnRep_LastListenEndTime(const float Previous);
    void OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch);
};

class UIntelCenterAnimInstance : public UAnimInstance
{
    float Direction;
    float Pitch;

};

class UIntelCenterMountComponent : public UMountComponent
{

    void ServerSetDesiredPitch(const float Pitch);
    void ServerFireListeningArea();
};

class UUseComponent : public UBoxComponent
{
    FText HintText;
    FText DisplayName;
    FSlateBrush Icon;

};

class UInteractiveBlueprintComponent : public UUseComponent
{
    FInteractiveBlueprintComponentBPOnUse BPOnUse;
    void BPOnUse(class AWarCharacter* UsingPlayer);

};

class AItemCratePickup : public AItemPickup
{
};

struct FItemGroupLayer
{
    float MeshSizeX;
    float MeshSizeY;
    int32 MeshesAlongX;
    int32 MeshesAlongY;
    FVector MeshOffset;

};

struct FItemGroupRenderLayout
{
    class UStaticMesh* StaticMesh;
    int32 MaxAmount;
    FItemGroupLayer LayerConfig;
    FItemGroupLayer OddLayerConfig;
    float MeshSizeZ;
    float YawJitter;
    float PitchJitter;
    float RollJitter;
    float OffsetJitter;
    float ScaleJitter;
    float LayerScaleDownFactor;
    FVector2D LayerScaleDownFactor2D;
    bool bAllowFlipX;
    bool bAllowFlipZ;
    bool bAllowOddLayerRotation;
    FVector LocalRotation;
    float LocalScale;
    bool bIgnoreGenerateLayoutData;

};

class UItemGroupRenderData : public UObject
{
    TMap<class FName, class FItemGroupRenderLayout> Layouts;
    bool bGenerateLayoutData;
    FVector LayoutSize;

};

class UItemGroupRenderComponent : public USceneComponent
{
    TSubclassOf<class UItemGroupRenderData> DataClass;

};

class UItemHolderUserComponent : public UUserComponent
{
    TArray<FItemInstance> Items;

    void OnRep_Items();
};

struct FItemProfileData
{
    bool bIsStockpilable;
    bool bIsStackable;
    bool bIsConvertibleToCrate;
    bool bIsCratable;
    bool bIsStockpiledWithAmmo;
    bool bUsableInVehicle;
    int32 StackTransferLimit;
    int32 RetrieveQuantity;
    int32 ReserveStockpileMaxQuantity;

};

class AItemProfileTable : public AInfo
{
    TMap<class EItemProfileType, class FItemProfileData> ItemProfileTable;

};

class AItemStash : public ATeamStructure
{
    float DecayTime;
    float DespawnIfEmptyTime;
    class UBoxComponent* CollisionBox;

};

class AKeep : public AForwardBase
{
};

class ADestroyedKeep : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;

};

class AKeepBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;

};

class ALadder : public AActor
{
    class UBoxComponent* BoxCollision;
    class UStaticMeshComponent* Mesh;
    class UBoxComponent* ClimbVolume;
    class UBoxComponent* ClimbVolumeTop;
    class USceneComponent* EnterPositionBottom;
    class USceneComponent* EnterPositionTop;

};

class AReplicatedLadder : public ALadder
{
};

class ULadderModificationSlotComponent : public UModificationSlotComponent
{
    TSubclassOf<class ALadder> LadderType;
    class ALadder* Ladder;

};

class ALandingCraft : public AAmphibiousVehicle
{
    class UBoxComponent* KillVolume;
    bool bBackHatchOpen;
    int32 StashedAmmo;

    bool GetBackHatchOpen();
};

class USimVehicleGunnerSupportAnimInstance : public USimVehicleAnimInstance
{
    float GunnerYaw;
    float GunnerPitch;
    bool bIsFiring;
    bool bIsGunnerFiring;
    bool bIsGunnerReloading;
    bool bIsGunnerWorking;
    float AltGunnerYaw;
    float AltGunnerPitch;
    bool bIsAltFiring;
    bool bIsAltGunnerFiring;
    bool bIsAltGunnerReloading;
    bool bIsAltGunnerWorking;
    float AltGunner02Yaw;
    float AltGunner02Pitch;
    bool bIsAlt02Firing;
    bool bIsAltGunner02Firing;
    bool bIsAltGunner02Reloading;
    bool bIsAltGunner02Working;

    void AnimNotify_OnFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAltFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt02FiringOver(const class UAnimNotify* Notify);
};

class ULandingCraftAnimInstance : public USimVehicleGunnerSupportAnimInstance
{
    float IsBackHatchOpen;

};

struct FEnvironmentModificationKey
{
};

struct FModifiedFoliageInfo
{
};

class ULandscapeDeformationManager : public UObject
{
    TArray<class ALandscapeProxy*> LandscapeCache;
    TMap<class FEnvironmentModificationKey, class AEnvironmentModification*> EnvironmentalModifications;
    TMap<class UFoliageInstancedStaticMeshComponent*, class FModifiedFoliageInfo> ModifiedFoliage;
    TArray<class UFoliageInstancedStaticMeshComponent*> InProgressTreeRebuilds;

    void DebugDrawModifiedLandscapes(float Duration);
    void DebugDrawEnvironmentalModification(float Duration);
};

class ALandscapeEnvironmentActor : public AActor
{
};

class ULargeMaterialComponent : public UTaskItemComponent
{
    TSubclassOf<class AImpactEffect> ImpactEffect;

    void MulticastPlayFX();
};

class ULevelStreamingHex : public ULevelStreamingDynamic
{
};

class ALightTank : public ATankBase
{
    FVector2D GunnerYawAndPitch;
    int32 StashedAmmo;
    FName StashedAmmoType;

    void OnRep_GunnerYawAndPitch();
    bool GetIsShooting();
    float GetGunYaw();
    float GetGunPitch();
};

class AScoutTank : public ALightTank
{
};

class ALimitedVulnerabilityStructure : public ABuildableStructure
{
    TSubclassOf<class UDamageType> VulnerableDamageType;

};

class ALineOfSightVisualizationActor : public AActor
{
    FLinearColor ValidColour;
    FLinearColor ValidColour2;
    FLinearColor ValidOutlineColour;
    FLinearColor ValidOutlineColour2;
    FLinearColor InvalidColour;
    FLinearColor InvalidColour2;
    FLinearColor InvalidOutlineColour;
    FLinearColor InvalidOutlineColour2;
    int32 WorkSplittingFactor;

};

class AListeningArea : public AActor
{
    float LifeSpanRemaining;
    class UListeningAreaComponent* ListeningComponent;

};

class UListeningAreaComponent : public USceneComponent
{
    float ListeningRadius;
    EMapTeamId TeamId;

};

struct FLocationMeshStop
{
    class UStaticMesh* StaticMesh;

};

struct FLocationSkeletalMeshStop
{
    class USkeletalMesh* SkeletalMesh;

};

class ULocationMultiplexedMeshComponent : public UActorComponent
{
    FName TargetTag;
    TArray<FLocationMeshStop> MeshStops;
    TArray<FLocationSkeletalMeshStop> SkeletalMeshStops;

};

class ALongRangeArtillery : public ATeamStructure
{
    class USkeletalMeshComponent* Mesh;
    class USkeletalMeshComponent* BaseMesh;
    class UOccupiableComponent* OccupiableComponent;
    class UBoxComponent* OccupiableTrigger;
    class UAudioComponent* RotationSFXLoop;
    class UParticleSystemComponent* FireShellParticleSystem;
    class UParticleSystemComponent* EjectShellParticleSystem;
    float InitialDelay;
    float ExplosionDelay;
    float MaxPower;
    float RequiredPowerForFiring;
    float RequiredPowerForRotation;
    FPowerInfo PowerInfo;
    uint8 RequiredSquadMembers;
    int32 SquadId;
    FVector2D GunnerYawAndPitch;
    float Power;
    FConcreteSettler ConcreteSettler;
    int32 StashedAmmo;

    void OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch);
};

class ULongRangeArtilleryMountComponent : public UMountComponent
{
    class USoundCue* ReloadSoundCue;
    float ExtendedMaxDistance;
    int8 Ammo;
    bool bCanDeploySelf;

    void ServerSetDesiredPitch(const float Pitch);
    void ServerFireShell();
    void ServerDeploySelf();
};

class ILongRangeArtillerySupport : public IInterface
{
};

struct FLoreData
{
    FText HeaderText;
    FSlateBrush Icon;
    FText FlavourText;
    FText BodyText;
    FText HintText;

};

class ALoreList : public AInfo
{
    TMap<class FName, class FLoreData> LoreDataTable;

};

class ALorePickup : public AItemPickup
{
    class UReadableTextComponent* ReadableTextComponent;

};

class AWarGameMode : public AGameMode
{
};

class AMainMenuGameMode : public AWarGameMode
{
};

struct FNewsItemInfo
{
    class UTexture2DDynamic* ImageTexture;

};

class UNewsItemImageDownloadTask : public UObject
{
    class AMainMenuPlayerController* Owner;
    FNewsItemInfo NewsItemInfo;

    void OnImageDownloadSuccess(class UTexture2DDynamic* Texture);
    void OnImageDownloadFailed(class UTexture2DDynamic* Texture);
};

class AMainMenuPlayerController : public AWarPlayerController
{
    TArray<class UNewsItemImageDownloadTask*> ImageDownloadTaskList;

    void RefreshShardStatus(const int32 ShardId);
};

class AMapBoundary : public AActor
{
    class UArrowComponent* ArrowComponent;
    class UBoxComponent* MarkerArea;
    class UBoxComponent* NoBuildArea;

};

class AMapExtentMarker : public AActor
{
    EMapExtentMarkerLocation Location;
    class USceneComponent* MarkerScene;

};

class AMapIcon : public AActor
{
    EMapTeamId MapTeamId;
    EMapIconType MapIconType;
    class USceneComponent* DefaultSceneComponent;

};

class AMapInfo : public AActor
{
    FText MapName;
    class UTexture2D* MapImage;
    class UTexture2D* MapImagePractice;

};

struct FMapIntelligenceTypeIcon
{
    FSlateBrush IconBrush;
    FSlateBrush FadedIconBrush;

};

struct FMapIntelligenceTypeConfig
{
    float FadeSeconds;
    float ExpirySeconds;
    FMapIntelligenceTypeIcon FactionIconBrush;
    bool bRequiresPlayerLineOfSight;

};

class AMapIntelligence : public AInfo
{
    FMapIntelligenceTypeConfig MapIntelligenceTypeConfigs;

};

class IMapIntelligenceInterface : public IInterface
{
};

class UMapIntelligenceSourceComponent : public UActorComponent
{
    bool DebugDrawDetectionRadius;
    float DetectionRadius;
    float OverlapCheckInterval;

};

struct FMapData
{
    FText DisplayName;
    EWorldConquestMapId WorldConquestMapId;
    class UTexture2D* Image;
    bool bIsInHexGrid;
    FIntPoint GridCoord;

};

class AMapList : public AInfo
{
    TMap<class FName, class FMapData> MapDatabase;

};

class AMapMarker : public AActor
{
    class UArrowComponent* ArrowComponent;
    class UBoxComponent* MarkerArea;
    class UTextRenderComponent* MajorTextRender;
    class UTextRenderComponent* MinorTextRender;
    FText MajorText;
    FText MinorText;
    EMapMarkerType MapMarkerType;

    void BeginMarkerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

struct FMapGridConfig
{
    FLinearColor BackgroundColor;
    FSlateBrush BackgroundImage;
    float BackgroundImageScale;
    FLinearColor LineColor;
    FLinearColor KeypadLineColor;
    float LineThickness;
    float LineExtension;
    FLinearColor KeypadHighlightColor;
    float KeypadTextItemScale;
    FLinearColor TextColor;
    FLinearColor KeypadTextColor;
    float LetterPositionOffsetY;
    float NumberPositionOffsetX;
    float TextItemScale;

};

struct FMapElementVisibilityZoomThresholds
{
    FVector2D MapNames;
    FVector2D MapData;
    FVector2D MajorMapMarkerText;
    FVector2D MinorMapMarkerText;
    FVector2D MapIntel;
    FVector2D MapGrid;
    FVector2D HexBorder;
    FVector2D MapPostLowRank;
    FVector2D MapPostHighRank;
    FVector2D RegionZones;
    FVector2D Weather;

};

struct FMapElementScale
{
    float MapData;
    float MapIntel;
    float MapText;

};

struct FMapLegendStyle
{
    FSlateBrush WinConditionBrush;
    FSlateBrush InfantryBrush;
    FSlateBrush VehicleBrush;
    FSlateBrush StructureBrush;
    FSlateBrush DefenseBrush;
    FSlateBrush HowitzerBrush;
    FSlateBrush OutpostBrush;
    FSlateBrush FieldHospitalBrush;
    FSlateBrush FacilityBrush;

};

struct FWinConditionStyle
{
    FSlateBrush ColonialIcon;
    FSlateBrush WardenIcon;
    FSlateBrush CountTextBG;
    FSlateBrush ScorchedTownBrush;
    FSlateBrush UprisingBrush;
    FSlateBrush VictoryTownBrush;

};

struct FMapPostStyle
{
    FSlateBrush MarkerIcon;
    FLinearColor GlobalTeamColour;
    FLinearColor SquadColour;
    FLinearColor RegimentColour;
    FButtonStyle UpVoteButton;
    FButtonStyle UpVoteButtonVoted;
    FButtonStyle DownVoteButton;
    FButtonStyle DownVoteButtonVoted;
    FButtonStyle ReplyButton;
    FEditableTextBoxStyle TextInputBoxStyle;
    FSlateBrush BackgroundImage;
    FSlateBrush ContentBackgroundImage;

};

struct FActivityIndicatorStyle
{
    class UCurveFloat* AlphaCurve;
    class UCurveFloat* ScaleCurve;

};

struct FTravelMapStyle
{
    FButtonStyle TravelPoint;
    FButtonStyle RecoveryTravelPoint;
    float MinTravelPointSize;
    float MaxTravelPointSize;
    TArray<FActivityIndicatorStyle> ActivityStyles;
    FLinearColor DefaultActivityColor;
    FLinearColor ReinforceActivityColor;
    float ActivityAnimationTime;
    float ActivityTimeOffset;

};

struct FMapIconStyle
{
    FName CodeName;
    bool bUseTeamSpecificIcon;
    bool bOnlyViewableBySameTeam;
    float IntelDetectionRadius;
    FSlateBrush FactionIconBrushes;

};

struct FMapStyle : public FSlateWidgetStyle
{
    FTextBlockStyle MapMarkerTextBlockStyle;
    FTextBlockStyle MajorMapMarkerTextBlockStyle;
    FTextBlockStyle MapNameTextBlockStyle;
    FSlateBrush PlayerMarkerBrush;
    FSlateBrush ClaimedTownColonial;
    FSlateBrush ClaimedTownWarden;
    FSlateBrush WatchTowerRadiusBrush;
    FMapGridConfig GridConfig;
    FLinearColor DisabledRegionTint;
    float MinZoom;
    float MaxZoom;
    FMapElementVisibilityZoomThresholds MapElementVisibilityZoomThresholds;
    FMapElementScale MapElementScale;
    FLinearColor HexBorderColour;
    float HexBorderThickness;
    float MinIconScale;
    float MaxIconScale;
    float MinIntelIconScale;
    float MaxIntelIconScale;
    FSlateBrush TownBaseBrush;
    FMapLegendStyle LegendStyle;
    FLinearColor ScorchedIconColor;
    FSlateBrush RegionMapContextBG;
    FWinConditionStyle WinConditionStyle;
    FMapPostStyle MapPostStyle;
    FTravelMapStyle TravelMapStyle;
    FMapIconStyle MapIconStyles;

};

class UMapWidgetStyle : public USlateWidgetStyleContainerBase
{
    FMapStyle WidgetStyle;

};

class AMaterialPlatform : public ABuildableStructure
{
    class UStaticMeshComponent* MeshComponent;
    class UBoxComponent* BoxCollision;
    class UGenericStockpileComponent* GenericStockpileComponent;

};

class AMech : public ATankBase
{
    class USceneComponent* MainGunMuzzleLocation;
    class USceneComponent* LeftGunMuzzleLocation;
    class USceneComponent* RightGunMuzzleLocation;
    class UStaticMesh* PackagedMesh;
    FVector2D MainGunYawAndPitch;
    FVector2D LeftGunYawAndPitch;
    FVector2D RightGunYawAndPitch;
    int32 StashedMainGunAmmo;
    FName StashedMainGunAmmoType;
    int32 StashedLeftGunAmmo;
    int32 StashedRightGunAmmo;

};

class UMechAnimInstance : public UAnimInstance
{
    float MechSpeed;
    float RotationInPlaceSpeed;
    float MovementDirection;
    float HorizontalBodyAim;
    float CannonVerticalAim;
    float LeftHMGHorizontalAim;
    float LeftHMGVerticalAim;
    float RightHMGHorizontalAim;
    float RightHMGVerticalAim;
    bool bIsDestroyed;
    bool bIsAnyWeaponAiming;
    bool bIsHatchOpen;
    float MinSpeed;
    class UCurveFloat* LegAngleCurve;
    float LastYaw;
    float LastAngularVelocity;

};

class UMeshVisibilityComponent : public UActorComponent
{
    TArray<class UMeshComponent*> AnimatedMeshes;
    TArray<class UMeshComponent*> Meshes;

};

class AMine : public AExplosive
{
    float ActivationDelay;
    TArray<class UPhysicalMaterial*> RoadPhysicalMaterials;
    FDateTime SpawnTime;
    class ASimVehicle* CurrentTarget;

};

class AMiniMapCapturer : public AActor
{
    class ASceneCapture2D* SceneCapture;
    TArray<class AActor*> ActorsToForceShowInGame;
    class UTexture2D* ResultTexture;
    float CameraAngleCorrection;
    float TargetGamma;

};

class AModificationTemplate : public AActor
{
};

class AMonument : public AActor
{
    class UStaticMeshComponent* MonumentMesh;
    TArray<class UStaticMesh*> MonumentTypeMeshes;
    class UUseMonumentComponent* UseMonumentComponent;
    int32 MonumentIndex;
    EMonumentType MonumentType;

};

class UMonumentManager : public UObject
{
};

class UMultiAmmoItemComponent : public UItemComponent
{
    FMultiAmmo MultiAmmo;
    bool bIsEquipped;

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    void OnRep_MultiAmmo();
    void OnRep_IsEquipped();
};

class UMortarItemComponent : public UMultiAmmoItemComponent
{
    class USkeletalMesh* SkeletalMesh;
    class UParticleSystem* MuzzleFlashPS;
    float TelegraphDelay;
    float MortarFlightTime;
    float MinDistance;
    float MaxDistance;

    void ServerFire(float Distance, FActivityStateChange ActivityStateChange);
    void MulticastPlayFiringFX(const class AExplosiveAmmoPickup* AmmoPickup);
    void ClientDrawDamageDebug(FVector HitLocation, float Radius);
};

class AMortarTank : public ALightTank
{
};

class AMotorboat : public ASimVehicle
{
    class UParticleSystemComponent* FrontWaterEmitter;
    class UParticleSystemComponent* BackWaterEmitter;

};

class AMotorcycle : public ARWDSimVehicle
{
    int32 StashedAmmo;

};

class AMultiLauncherVehicle : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;
    uint8 StashedAmmo;
    FName StashedAmmoType;
    FPayloadMeshes PayloadMeshes;
    bool bRequiresPassengerToMove;

    void OnRep_StashedAmmo();
};

class AMultiLauncherCar : public AMultiLauncherVehicle
{
};

struct FSkeletalMeshStop
{
    int32 Threshold;
    class USkeletalMesh* SkeletalMesh;

};

class UMultiplexedSkeletalMeshComponent : public UActorComponent
{
    FName TargetTag;
    TArray<FSkeletalMeshStop> MeshStops;
    int32 InputValue;
    uint8 SelectedMeshIndex;
    class UParticleSystem* TransitionDownFX;
    class USoundCue* TransitionUpSoundCue;
    bool Enabled;
    FMultiplexedSkeletalMeshComponentOnSelectedMeshChanged OnSelectedMeshChanged;
    void SelectedMeshChangedDelegate();

    void SetEnabled(bool IsEnabled);
};

struct FMeshStop
{
    int32 Threshold;
    class UStaticMesh* StaticMesh;

};

class UMultiplexedStaticMeshComponent : public UActorComponent
{
    FName TargetTag;
    TArray<FMeshStop> MeshStops;
    int32 InputValue;
    uint8 SelectedMeshIndex;
    class UParticleSystem* TransitionDownFX;
    class USoundCue* TransitionUpSoundCue;
    FMultiplexedStaticMeshComponentOnSelectedMeshChanged OnSelectedMeshChanged;
    void SelectedMeshChangedDelegate();
    bool Enabled;

    void SetEnabled(bool IsEnabled);
};

class ANoBuildArea : public AActor
{
    class UBoxComponent* NoBuildComponent;
    EPlacementStatus PlacementStatus;

};

class UObscuringSphereComponent : public USphereComponent
{
    float MinimumVisibilityRadius;

};

class UObstructionCheckBoxComponent : public UBoxComponent
{
};

class UOccupiableComponent : public USceneComponent
{
    FVector SafeSpawnOffset;
    uint8 bProvidesFullCover;
    uint8 bTeleportBack;
    bool bCanOccupantSeeThroughEverything;
    TWeakObjectPtr<class ASimCharacter> CurrentOccupant;
    class UBoxComponent* TriggerComponent;
    FName MountCodeName;

};

class UOccupiableDefensibleComponent : public UOccupiableComponent
{
};

class AOfflineCharacter : public AActor
{
    class UCapsuleComponent* CapsuleComponent;
    class USkeletalMeshComponent* CharacterMesh;
    class USkeletalMeshComponent* Head;
    class USkeletalMeshComponent* Hands;
    class USkeletalMeshComponent* Legs;
    class USkeletalMeshComponent* Back;
    class USkeletalMeshComponent* Helmet;
    uint8 TeamId;
    uint8 VisualCustomizationMask;
    EZombieType ZombieType;
    uint8 Temperature;
    uint8 Muddyness;
    FString OnlineID;
    float CurrentHealth;
    float MaxHealth;
    float DeathDuration;

    void MulticastApplyFatalHit();
    void BPApplyFatalHit();
};

class AOilPipelineSegment : public ATeamStructure
{
};

class AOilTanker : public ARWDSimVehicle
{
    FFuelTankerInfo FuelTankerInfo;
    class UBoxComponent* WorkVolume;

    void OnRep_FuelTankerInfo();
};

class IPayloadMeshGroup : public IInterface
{
};

class UPayloadParticleSystemComponent : public UParticleSystemComponent
{
    uint8 SlotCount;
    uint8 GroupIndex;

};

class UPayloadStaticMeshComponent : public UStaticMeshComponent
{
    uint8 GroupIndex;

};

class UPayloadInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
    FRotator MeshRotation;
    uint8 Rows;
    uint8 Columns;
    float RowSpacing;
    float ColumnSpacing;
    uint8 GroupIndex;

};

class IPersistentActor : public IInterface
{
};

class APersistentProxy : public ALandscapeEnvironmentActor
{
    class UStaticMeshComponent* Mesh;

};

class UPersistentProxyComponent : public UStaticMeshComponent
{
    FName MigrationTag;
    TSubclassOf<class APersistentProxy> ProxyLoadingDock;
    bool bIsSpawned;
    class APersistentProxy* SpawnedLoadingDock;

};

class APipeline : public ATeamStructure
{
    class USplineConnectorComponent* SplineConnector;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;
    class UBuildSocketComponent* LeftSocket;
    class UBuildSocketComponent* RightSocket;
    FLiquidTank LiquidTank;

};

class APipelineValve : public ATeamStructure
{
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;
    float ThroughputNormalized;

};

class APipeTest : public ABuildableStructure
{
    class USplineConnectorComponent* SplineConnector;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

class UPlayerCameraRigComponent : public USceneComponent
{
    float TargetArmLength;
    uint8 bEnableCameraLag;
    float MaxDistanceForCameraLerp;
    class UCurveFloat* AimRadiusToViewRangeCurve;
    class UCurveVector* NormalizedAimCurve;
    class UCurveFloat* ViewRangeToMaxArmLengthCurve;

};

struct FEmoteActivityOptions
{
    bool bLockStance;
    bool bHideWeapon;
    TArray<ESimCharacterStance> AllowedStances;

};

struct FSurfaceMovementData
{
    class UPhysicalMaterial* PhysicalMaterial;
    float StaminaDrainModifier;
    float MovementSpeedModifier;

};

class ASimCharacter : public AWarCharacter
{
    float StanceYawModifiers;
    bool bGiveStarterKit;
    float BaseTurnRate;
    float SprintingMaxSpeedModifier;
    float SprintingStaminaDrainRateModifier;
    int32 SprintingStaminaDrainRateModifierCount;
    float DeathDuration;
    float ProneEyeHeight;
    float CrouchedTargetOffset;
    float MinFallSpeedForDamage;
    float FatalFallSpeed;
    float MaxClimbForwardDistance;
    float MaxClimbCosAngle;
    float MaxVaultHeight;
    float MinVaultVerticalClearencePercent;
    float MaxVaultDistance;
    float MaxClimbHeight;
    float MinClimbOpenDistance;
    float MinClimbOntoOpenDistance;
    float MinShortWallStepOpenDistance;
    float ClamberStandOffset;
    class UMountComponent* MountComponent;
    class AStructure* CurrentOccupiedStructure;
    class ASimVehicle* CurrentVehicle;
    class ASimVehicle* CurrentMountedVehicle;
    class USoundCue* FootStepCue;
    int32 MaxHealth;
    float HealthThresholdForHurtMaterial;
    float MaxActivityLatencyCompensation;
    FActivityStateInfo ActivityStateInfos;
    TMap<class ECharacterActivityState, class FEmoteActivityOptions> EmoteActivityOptionsTable;
    float AllowedDeviationOfShootingDirection;
    float InVehicleAllowedDeviationOfShootingDirection;
    float WeaponFiringConeAbilityModifierPct;
    uint8 TeamId;
    uint8 VisualCustomizationMask;
    uint8 bIsWearingGasMask;
    uint8 bIgnoreStanceInput;
    uint8 bUsesDynamicMaterials;
    uint8 bIsEncumbered;
    TEnumAsByte<EPhysicalSurface> CurrentSurfaceType;
    TArray<FSurfaceMovementData> SurfaceMovementModifiers;
    class USkeletalMeshComponent* Head;
    class USkeletalMeshComponent* Hands;
    class USkeletalMeshComponent* Legs;
    class USkeletalMeshComponent* Back;
    class USkeletalMeshComponent* Helmet;
    class USkeletalMeshComponent* EquippedItemMesh;
    class USkeletalMeshComponent* GasMaskMesh;
    class USkeletalMeshComponent* AccessoryMesh;
    class USceneComponent* Muzzle_Standing;
    class USceneComponent* Muzzle_Crouched;
    class USceneComponent* Muzzle_Prone;
    class UStaticMeshComponent* GroundEquippedItemMesh;
    class UItemHolderComponent* ItemHolder;
    class USphereComponent* SuppressionSphere;
    TArray<FItemInstance> ItemHolderItems;
    class UEquipmentHolderComponent* EquipmentItemHolder;
    TArray<FItemInstance> EquipmentItemHolderItems;
    class UParticleSystemComponent* SwimmingPS;
    class UParticleSystemComponent* EnterWaterPS;
    class UAudioComponent* SwimmingSFX;
    class UAudioComponent* EnterWaterSFX;
    ESimCharacterStance CharacterStance;
    ECharacterActivityState CharacterActivityStateInternal;
    float Health;
    float Muddyness;
    uint8 ReplicatedMuddyness;
    class AActor* LastMovementBase;
    float MeleeMinDamage;
    float MeleeMaxDamage;
    TSubclassOf<class UDamageType> MeleeDamageType;
    TSubclassOf<class AImpactEffect> MeleeImpactEffect;
    class USoundCue* MeleeAttackSound;
    float SwimmingBuoyancy;
    float DrowningBuoyancy;
    float SwimmingStaminaDrainRate;
    float SwimmingStaminaDrainDepthCutoff;
    float ClimbingDepthCutoff;
    float RagdollInWaterLinearDamping;
    float RagdollOutOfWaterLinearDamping;
    float StabilityMovementDecayRate;
    float StabilityDecayMovementSpeed;
    float StabilityYawDecayRate;
    float StabilityYawDecayTime;
    float StabilityGainRates;
    float HealTimer;
    bool BleedingEnabled;
    float BleedDamagePerSecond;
    float BleedMinDamageReq;
    float StaggerMinDamageReq;
    class UParticleSystem* BleedingEffectTemplate;
    class UParticleSystemComponent* SpawnedBleedingEffect;
    uint8 bIsBleeding;
    EZombieType ZombieType;
    float WoundedTimeRemaining;
    float ZombieMeleeReach;
    TSubclassOf<class AImpactEffect> ZombieMeleeImpactEffect;
    class USoundCue* ZombieDeathSound;
    float ZombieHitRadius;
    float ZombieHitHalfHeight;
    class ASimCharacter* CarryingPlayer;
    TWeakObjectPtr<class AController> LastBurningHitInstigator;

    void StopFiring();
    void StartFiring();
    void SlowTick();
    void ServerUseItem(const int8 Index, class UItemHolderComponent* InHolder);
    void ServerTakePickup(class AItemPickup* ItemPickup);
    void ServerSimulateMeleeAttack(FActivityStateChange ActivityStateChange);
    void ServerSetSprinting(bool bIsSprinting);
    void ServerSetIsProne(bool bIsProne);
    void ServerReloadFromWater(int32 AmmoIx, FActivityStateChange ActivityStateChange);
    void ServerReload(int32 AmmoIx, class UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange);
    void ServerModifyStructure(FActivityStateChange ActivityStateChange, class UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask);
    void ServerGiveUpFromWoundedState();
    void ServerDropLargeItem();
    void ServerDropItem(const int8 Index);
    void ServerClimbLadder(class ALadder* Ladder, bool bEntering, FActivityStateChange ActivityStateChange);
    void ServerClimb(FVector2D InputDirection, FActivityStateChange ActivityStateChange);
    void ServerChangeItemEquipState(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange);
    void ServerCarryWounded(class ASimCharacter* WoundedCharacter);
    void OnRep_ZombieType();
    void OnRep_VisualCustomizationMaskNotify();
    void OnRep_TeamIdNotify();
    void OnRep_Muddyness(const uint8 PreviousMuddyness);
    void OnRep_MountComponent();
    void OnRep_IsWearingGasMask();
    void OnRep_IsBleeding();
    void OnRep_Health();
    void OnRep_CurrentVehicle(class ASimVehicle* PreviousVehicle);
    void OnRep_CurrentOccupiedStructure();
    void OnRep_CharacterStance();
    void OnRep_CharacterActivityState();
    void MulticastSpawnMeleeHitEffects(FHitNotify SimulatedHitNotify);
    void MulticastOnUniformMitigatedDamage(EDamageType DamageType);
    void MulticastApplyNonFatalHit(const float InStagger);
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace);
    void ClientSyncStability(const float NewStability);
    void ClientSyncNormalizedStamina(float InNormalizedStamina);
    void ClientSyncActivityStateSequence(uint8 CurrentSequenceNumber, int8 HeldItemIndex);
    void ClientSuppress(const float SuppressAmount);
    void ClientSetItemHolderItems(const TArray<FItemInstance>& InItemHolderItems);
    void ClientSetGainingHeatFromHits(bool bIsGaining);
    void ClientInterruptActivityState(uint8 SequenceNumber);
    void ClientEndWoundedState();
    void ClientCorrectActivityState(uint8 LastSuccessfulSequenceNumber, int8 HeldItemIndex, ECharacterActivityState NewState);
    void ClientCarryWoundedSetupMovement(class ASimCharacter* WoundedCharacter, bool bBeganCarrying);
    void ClientBeginWoundedState(const float WoundedTimeSec, uint8 CurrentSequenceNumber);
    void ClientAckActivityState(uint8 SequenceNumber);
    void CheckForCover();
    void BPUpdateHeatVisuals(bool bState);
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void BPCinematicDeath();
    void AllApplyStagger(float StaggerAmount);
};

struct FUITargetingInfo
{
    int32 MaxRange;
    int32 MaxReachability;
    FVector MuzzleLocation;
    TWeakObjectPtr<class AActor> ActorToIgnore;
    bool bHasLOS;
    bool bWeaponReady;
    FVector TargetPoint;
    FVector ImpactPoint;
    FVector GroundReference;
    bool bMuzzleBlocked;

};

struct FVector2D_NetQuantize : public FVector
{
};

class APlayerCharacter : public ASimCharacter
{
    float AimingMaxSpeedModifier;
    float ControllerAimScale;
    float MouseAimScale;
    float NoAimYawScale;
    bool bDisablePlayerFogOfWar;
    float AlwaysVisibleRadius;
    int32 AimRadius;
    int32 ScopeRadius;
    class UParticleSystem* OfflineFxTemplate;
    FUITargetingInfo LastUITargetingInfo;
    FVector2D_NetQuantize YawPitchPacked;
    float AimUpdateRate;
    class UPlayerCameraRigComponent* CameraRigComponent;
    class UCameraComponent* TopDownCameraComponent;
    class UParticleSystemComponent* ScopePS;
    class UPostProcessComponent* LOSPostProcess;
    class UPlayerLOSRasterComponent* LOSRasterComponent;
    TSubclassOf<class UCameraShake> SprintCameraShake;
    class UStaticMeshComponent* GrenadeAimMesh;
    class USceneComponent* Grip_Standing;
    class USceneComponent* Grip_Crouched;
    class USceneComponent* Grip_Prone;
    uint8 bIsInScopeMode;
    FDateTime OfflineExpiryTime;

    void ServerUpdateAimYawAndPitch(FVector2D_NetQuantize InYawPitchPacked);
    void ServerToggleRailSwitch(class ARailwayTrack* RailwayTrack, int32 PathSocketId);
    void ServerSyncLastWeaponInvoke(const FCharacterInvokeInfo& ClientWeaponInvoke);
    void ServerSwitchSeats(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex);
    void ServerSetIsInScopeMode(bool InIsInScopeMode);
    void ServerPlayEmote(const ECharacterActivityState EmoteActivityState);
    void ServerOpenVehicleInventory(class ASimVehicle* Vehicle);
    void ServerOnUseFromVehicle(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    void ServerMountStructure(class AStructure* Structure, FActivityStateChange ActivityStateChange);
    void ServerLinkRailVehicles(class ARailVehicle* VehicleA, class ARailVehicle* VehicleB);
    void ServerExitVehicle(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    void ServerEnterVehicle(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, const int32 SeatIndex);
    void ClientVehicleSeatSwitched(bool bIsDriver);
    void ClientSetUnmountPosition(FVector Position, FRotator Rotation);
    void ClientSetFlyMode(const bool bInIsFlyMode, const float FlyHeight, const float FlySpeed);
    void ClientOpenVehicleResponse(class ASimVehicle* Vehicle, const EOpenVehicleInventoryResponse OpenVehicleInventoryResponse);
    void ClientLockStance(ESimCharacterStance Stance, bool bLocked);
    void ClientCannonLaunch(const FVector2D_NetQuantize LaunchVelocity);
    void BPUpdateMaterialParameters(const FVector& Position);
};

class UPlayerCharacterMovementComponent : public UCharacterMovementComponent
{
    float MaxWalkSpeedProne;
    float ProneHalfHeight;
    float ImmersionDepthHeightBias;
    float WaterFrictionCoefficient;

    void CapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class UPlayerLOSRasterComponent : public USceneComponent
{
    class UMaterialInterface* CharacterOutlineMaterial;
    class UMaterialInterface* VisibilityIndicatorMaterial;
    class UMaterialInstanceDynamic* VisibilityIndicatorMaterialDynamic;

};

struct FBanReasonInfo
{
    EBanReason BanReason;

};

struct FGlobalSpawnPoint
{
    FSpawnPoint Local;
    FVector2D Location;
    EWorldConquestMapId MapId;

};

struct FPlayerSpawnPoints
{
    FGlobalSpawnPoint StaticBase;
    FGlobalSpawnPoint ForwardBase;
    ESpawnPointCategory SelectedCategory;

};

struct FDeployHistory
{
    FDateTime LastDeployTime;
    FDateTime LastDeployTimeAlt;

};

struct FTechTreeComponentVotes
{
    EInfrastructureType StaticBaseVote;
    EInfrastructureType ForwardBaseVote;

};

struct FPlayerWarState
{
    int8 LastTeamId;
    float TimePlayedTeam0;
    float TimePlayedTeam1;
    FPlayerSpawnPoints SpawnPoints;
    FDeployHistory DeployHistory;
    FTechTreeComponentVotes TechTreeVotes;
    EZombieType ZombieType;
    int32 NumUnstuckCommandsUsed;
    FDateTime LastPostTravelInvul;
    FDateTime LastResourceSpawn;
    float TimeInConquest;
    FPlayerActivity Activity;

};

struct FSavedCharacterInventory
{
    TArray<FItemInstance> BagItems;
    TArray<FItemInstance> EquippedItems;
    bool OverrideStarterGear;

};

struct FCommendHistory
{
    FString CommendedPlayerID;
    int32 NumCommends;
    int64 LastCommendUnixTimestamp;

};

class UPlayerProfile : public USaveGame
{
    FString OnlineID;
    int32 XP;
    int32 CP;
    int32 CPToGive;
    int32 XPForCP;
    int32 Level;
    FDateTime BanLift;
    FBanReasonInfo BanReasonInfo;
    TMap<EUserVoteKickCategory, int32> VoteKickCategoryCountMap;
    FDateTime TimeOfLastVoteKickAgainstMe;
    int8 OffenseCount;
    FDateTime OffenseCountClearTime;
    int64 TimeOfLastVoteKick;
    FDateTime FirstMonthlyVoteKickTime;
    uint16 MonthlyVoteKickCount;
    FDateTime FirstDailyVoteKickTime;
    uint16 DailyVoteKickCount;
    FDateTime LastLogin;
    FString LastVersion;
    FDateTime LastFriendlyFire;
    float RecentTeamKills;
    float RecentFriendlyCharacterDamage;
    float RecentFriendlyStructureDamage;
    float RecentFriendlyVehicleDamage;
    int16 RecentNameChanges;
    ERestrictedState RestrictedState;
    TArray<FDateTime> RestrictionClearTimes;
    FString PreviousPlayerName;
    FDateTime LastFreshLoginTime;
    int32 RecentLoginCount;
    FString UniqueDeviceID;
    FPlayerWarState PlayerWarState;
    FSavedCharacterInventory CharacterInventory;
    float Health;
    bool IsBleeding;
    uint8 PlayerMode;
    bool bIsGodMode;
    TArray<FCommendHistory> CommendHistories;
    int32 NumSelfServeFactionUnlocksUsed;
    FString OfflineCharacterServer;
    FDateTime OfflineCharacterCreationTime;
    float NormalizedStamina;
    EOutfitType OutfitType;
    FCharacterCustomizationInfo CharacterCustomizationInfo;

};

class UPlayerProfileManager : public UObject
{
};

struct FSoundClassVolume
{
    FString ClassName;
    float Value;

};

class UPlayerSaveGame : public USaveGame
{
    float Gamma;
    bool bSprintModeHeld;
    TArray<FSoundClassVolume> VolumeSettings;
    bool bShowTutorial;
    bool bShowHomeTutorial;
    bool bShowMapTutorial;
    bool bShowZombieTutorial_2020;
    int32 TimesHammerTutorialShown;
    bool bVoiceChatEnabled;
    FString ActiveVoiceOutputDeviceID;
    FString ActiveMicDeviceID;
    bool bMiniMapEnabled;
    EChatLanguage ChatBroadcastLanguage;
    TArray<EChatLanguage> ChatListenLanguages;
    int32 ExitCount;
    FString LastJoinedServerName;
    ELanguageType ClientLanguage;
    EItemSortMethod StockpileSortMethod;
    EStockpileType ActiveStockpileType;
    TArray<FText> LocalChatHistory;
    TSet<FString> LocalVoiceMuteList;
    TSet<FString> LocalTextChatMuteList;
    bool bPlayVoiceInBackground;
    bool bMuteEnemyPlayers;
    TSet<EChatChannel> MutedTextChatChannels;
    int32 LastShardId;
    float SignpostVisibilityDistance;
    EWarCameraMode WarCameraMode;
    bool bStreamerModeEnabled;
    bool bIsBadWordFilterEnabled;
    EFactionId LastFactionId;
    TMap<class FString, class FDateTime> ReportTimes;
    TArray<FString> QueuedModReplies;
    bool bUseDifferentialSteeringMode;
    TArray<FString> WarIdsJoinedList;

};

class APowerLine : public ABuildableStructure
{
    class USplineConnectorComponent* SplineConnector;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;

};

class IPowerNode : public IInterface
{
};

class APowerPlant : public AFacilityRefinery
{
};

class APowerPole : public ATeamStructure
{
    class UBuildSocketComponent* PowerSocket;
    class UFacilityLightComponent* LightComponent;
    class UMaterialInterface* CableMaterial;
    FPowerGridInfo PowerGridInfo;

    void OnRep_PowerGridInfo();
};

class IPowerGridNode : public IInterface
{
};

class UProjectileItemComponent : public UMultiAmmoItemComponent
{
    class USkeletalMesh* SkeletalMesh;
    class USkeletalMesh* PayloadMesh;
    class UParticleSystem* MuzzleFlashPS;
    class UParticleSystem* BackMuzzleFlashPS;
    class USoundCue* ShotSoundCue;
    TArray<class TSubclassOf<AWarProjectile>> ProjectileClasses;
    EProjectileFiringMode FiringMode;
    float SuggestedVelocitySpeed;
    float FallbackAngle;
    float MinDistance;
    bool bIsSingleUse;

    void ServerStartInvoke(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange);
    void AllSpawnFiringEffects();
};

class APrototypeKitPickup : public AItemPickup
{
};

class AProxyDrawbridgeSide : public APersistentProxy
{
};

class URadioBackpackItemComponent : public UMiscItemComponent
{
    float DetectionCooldown;
    float DetectionRadius;

    void ServerStopTransmittingLaunchCodes();
    void ServerStartTransmittingLaunchCodes(const FActivityStateChange& ActivityStateChange, const FVector StrikeLocation);
    void ClientStopLaunchCodeTransmission();
    void ClientReceiveLaunchCodes(const uint8 LaunchCodeID);
    void ClientReceiveLaunchCodeResponse(const ETransmitResponse Response);
};

class ARadioBackpackPickup : public ABackpackItemPickup
{
};

class ARadioPickup : public ABasicItemPickup
{
};

class URailCouplerUseComponent : public UUseComponent
{
    FVector ChainVisualOffset;

};

class URailVehicleAnimInstance : public USimVehicleAnimInstance
{
    float BufferYOffset;
    float ExtendToDistance;
    float MaxExtensionDistance;
    float FrontBogieTurnAngle;
    float RearBogieTurnAngle;
    float BufferExtendFrontLeft;
    float BufferExtendFrontRight;
    float BufferExtendBackLeft;
    float BufferExtendBackRight;

};

class UInfantryRailVehicleAnimInstance : public URailVehicleAnimInstance
{
    float RightGunnerYaw;
    float RightGunnerPitch;
    bool bRightGunnerIsFiring;
    float LeftGunnerYaw;
    float LeftGunnerPitch;
    bool bLeftGunnerIsFiring;
    bool bIsRightHatchOpen;
    bool bIsLeftHatchOpen;
    float MainGunnerYaw;
    float MainGunnerPitch;
    bool bMainGunnerIsFiring;

    void AnimNotify_OnFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAltFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt02FiringOver(const class UAnimNotify* Notify);
};

class ULRArtilleryCarAnimInstance : public UInfantryRailVehicleAnimInstance
{
    bool bIsFiring;
    bool bIsCranking;

};

class AVehicleBuildSite : public ABuildSite
{
    FVector BuildOffset;
    FRotator BuildRotation;
    FName VehicleCodeName;

};

class ARailVehicleBuildSite : public AVehicleBuildSite
{
    FString FrontTrackName;
    FString RearTrackName;
    float FrontTrackPackedAlpha;

};

class ARailVehicleCrane : public ARailVehicle
{
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UBoxComponent* ShippableCollision;
    class UAudioComponent* ArmMovementSFXLoop;
    class UAudioComponent* DeployingSFXLoop;
    class UAudioComponent* PulleyMovementSFXLoop;
    class UCraneComponent* CraneComponent;

};

class USimpleVehicleMovementComponent : public UCharacterMovementComponent
{
    bool bCanSink;
    bool bIgnoreStepCheck;
    bool bUsesConstantFriction;
    bool bAllowIsWalkable;
    float WaterDepthNormalized;
    float FloatVelocity;
    float DepthOffset;
    float MaxDepth;

};

struct FRailPhysicsState
{
    FQuat WorldRotation;
    class ARailwayTrack* FrontTrack;
    class ARailwayTrack* RearTrack;
    FVector WorldLocation;
    float LinearMomentum;
    float DeferredImpulses;
    float Forces;
    float LinearSpeed;
    float FrontAlpha;
    float RearAlpha;
    bool bFrontWagonToRail;
    bool bRearWagonToRail;
    bool bWasCollidingWithTrailer;
    bool bWasBlocked;

};

class URailVehicleMovementComponent : public USimpleVehicleMovementComponent
{
    FRailPhysicsState PhysicsState;
    class UCurveFloat* EngineForceCurve;
    class UCurveFloat* BoostingEngineForceCurve;
    class UCurveFloat* FrictionForceCurve;
    class UCurveFloat* BrakingFrictionForceCurve;
    float MaxRailSpeed;
    float MaxRailSpeedBoosted;

};

class ARailVehicleProxy : public ABuildableStructure
{
};

class ARailVehicleResourcePlatform : public ARailVehicle
{
    class UGenericStockpileComponent* GenericStockpileComponent;

};

struct FRailSwitchState
{
    uint8 ID;
    bool bIsActive;

};

class ARailwayTrack : public ATeamStructure
{
    class USplineConnectorComponent* SplineConnector;
    float GrassCullRadius;
    class UBuildSocketComponent* BackSocket;
    class UBuildSocketComponent* FrontSocket;
    class URailSwitchUseComponent* BackSwitch;
    class URailSwitchUseComponent* FrontSwitch;
    class USkeletalMeshComponent* BackSwitchMesh;
    class USkeletalMeshComponent* FrontSwitchMesh;
    ETrackGauge TrackGauge;
    float MaxHeightAboveRoad;
    float RailZOffset;
    TArray<FRailSwitchState> SwitchStates;
    TArray<class ARailVehicle*> Vehicles;
    TArray<class UPhysicalMaterial*> RoadCheckPhysMaterials;
    bool bHasIncomingTravel;

    void OnRep_SwitchStates();
};

class URailSwitchUseComponent : public UUseComponent
{
};

class UReadableTextComponent : public UUseComponent
{
    FName LoreCodeName;

};

struct FRefinementOrderInfo
{
    ERefineryOrderAccessLevel AccessLevel;
    TArray<FRefinementOrder> OrderList;
    int64 ExpiryTimestampTicks;

};

class ARefinery : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UBoxComponent* DrivewayFootprintComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    class USceneComponent* TransferLocation;
    TMap<class FString, class FRefinementOrderInfo> RefinementOrderMap;
    TArray<FRefinableItemInfo> RefinableItems;
    bool bIsRefining;

    bool IsRefining();
};

class ARefineryBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    TMap<class FString, class FRefinementOrderInfo> RefinementOrderMap;

};

class ADestroyedRefinery : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    TMap<class FString, class FRefinementOrderInfo> RefinementOrderMap;

};

class URefineryUserComponent : public UUserComponent
{
    FRefinementOrderInfo OrderInfo;

};

class ARelicAPC : public ASimVehicle
{
    class USceneComponent* LeftGunMuzzleLocation;
    class USceneComponent* RightGunMuzzleLocation;
    FVector2D LeftGunYawAndPitch;
    FVector2D RightGunYawAndPitch;
    int32 StashedLeftGunAmmo;
    int32 StashedRightGunAmmo;

};

class ARelicAPCStructure : public ABuildableStructure
{
    TSubclassOf<class ASimVehicle> VehicleClass;

};

class ARelicAPCStructureBuildSite : public AStructureBuildSite
{
};

class ARelicArmouredCar : public AArmoredCar
{
};

class ATownHall : public ABase
{
    bool bIsFort;
    class UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;

};

class AStaticBase : public ATownHall
{
    class UAITurretsControllerComponent* AITurretsController;
    FDynamicTierInfo DynamicTierInfo;
    bool bIsVictoryTownRep;
    int32 TownConnectionLevel;

    void OnRep_IsVictoryTown();
};

class ARelicBase : public AStaticBase
{
};

class ARelicBus : public ARWDSimVehicle
{
};

class ARelicScoutVehicle : public ASimVehicle
{
};

struct FReserveStockpileData
{
    FString StockpileName;
    FString OwnerOnlineID;
    FString OwnerName;
    TArray<FString> AllowedUserOnlineIDList;
    EReserveStockpileAccessLevel AccessLevel;
    int32 PassCode;
    int64 ExpiryTimestampTicks;
    TArray<FStockpileEntry> Items;
    TArray<FStockpileEntry> Vehicles;
    TArray<FStockpileEntry> VehicleCrates;
    TArray<FStockpileEntry> Structures;
    TArray<FStockpileEntry> StructureCrates;

};

class UReserveStockpileComponent : public UActorComponent
{
    TArray<FReserveStockpileData> StockpileDataList;
    TSet<uint16> ActivePassCodes;

};

struct FReserveStockpileFailedPassCodeInfo
{
    int32 NumFailedAttempts;
    int64 LastAttemptTimestampTicks;

};

class UReserveStockpileUserComponent : public UUserComponent
{
    TArray<FReserveStockpileData> StockpileDataList;
    FReserveStockpileFailedPassCodeInfo FailedPassCodeAttemptInfo;
    class UReserveStockpileComponent* ReserveStockpileBeingUsed;

    void ServerTransferRequestToPublic(FString SourceStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType);
    void ServerTransferRequestFromReserveToReserve(FString SourceStockpileName, FString DestinationStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType);
    void ServerTransferItemFromReserveToReserve(FString SourceStockpileName, FString DestinationStockpileName, const FName CodeName, const int32 Quantity);
    void ServerTransferItemFromReserveToPublic(FString SourceStockpileName, const FName CodeName, const int32 Quantity);
    void ServerSubmitVehicle(FString TargetStockpileName, class AActor* DestinationActor, class ASimVehicle* Vehicle);
    void ServerSubmitShippableCrate(FString TargetStockpileName, class AActor* DestinationActor, class AShippableCrate* ShippableCrate);
    void ServerSubmitItemsFromPlayerStockpileFiltered(FString TargetStockpileName, class AActor* DestinationActor, const FStockpileEntry ItemFilter);
    void ServerSubmitItemsFromPlayerStockpile(FString TargetStockpileName, class AActor* DestinationActor);
    void ServerSubmitItemsFromItemHolderFiltered(FString TargetStockpileName, class AActor* DestinationActor, class UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter);
    void ServerSubmitItemsFromItemHolder(FString TargetStockpileName, class AActor* DestinationActor, class UItemHolderComponent* SourceItemHolder);
    void ServerSubmitContainer(FString TargetStockpile, class AActor* DestinationActor, class AContainer* Container);
    void ServerReleaseStockpile(FString StockpileName);
    void ServerRefreshExpiryTime();
    void ServerMakeVisible(FString TargetStockpileName, const bool bMakeVisible);
    void ServerCreateStockpile(FString StockpileName);
    void ServerAccessStockpile(const int32 PassCode);
    void OnRep_StockpileData(const TArray<FReserveStockpileData>& PreviousStockpileDataList);
    void ClientShowStockpileResponse(const ETransactionResponse Response);
};

class AResource : public AActor
{
    TSubclassOf<class AImpactEffect> HammerImpactEffect;
    TSubclassOf<class AImpactEffect> SledgeImpactEffect;
    class UArrowComponent* ArrowComponent;
    class UParticleSystemComponent* HighYieldEffect;
    TSubclassOf<class AItemPickup> ResourcePickupClass;
    int32 BaseAmountPerGather;
    int32 BonusAmountOnFinalGather;
    int32 BaseAmount;
    int32 AmountRemaining;
    int32 GatherXP;
    bool bPlayGatherFX;
    float ChanceForRareResource;
    int32 ResourceLevel;
    uint32 ResourceFieldId;
    bool bIsHighYield;
    int32 NumNextTierResourcesToSpawn;
    TArray<class TSubclassOf<AResource>> PossibleNextTierResources;
    bool bShouldPersist;
    class UParticleSystem* DestroyedFX;
    class USoundCue* DestroyedSoundCue;
    class USoundCue* SpawnSoundCue;

    void OnRep_IsHighYield(const bool bPreviousIsHighYield);
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
};

class AWorldResource : public AResource
{
};

struct FSecondaryResourceWeight
{
    TSubclassOf<class AItemPickup> ResourcePickupType;
    int32 Weight;

};

class AResourceField : public ABuildableStructure
{
    class UStaticMeshComponent* ResourceFieldMeshComponent;
    class USphereComponent* NoBuildVolume;
    class UStaticMesh* ResourceFieldMesh1;
    class UStaticMesh* ResourceFieldMesh2;
    class UStaticMesh* ResourceFieldMesh3;
    TSubclassOf<class AResource> ResourceClass;
    float SpawnPeriod;
    int32 MaxConcurrentNodes;
    float MinSpawnDistance;
    float MaxSpawnDistance;
    int32 ResourcesPerReplenishment;
    int32 ResourcesLeftToSpawn;
    int32 ResourceFieldMeshLevel;
    float TimeToReplenish;
    int32 ResourceFieldId;
    float RemainingTimeToReplenish;
    float LandscapeTraceDistance;
    ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod;
    float ResourceNodeSphereColliderRadius;
    bool bIgnoredByResourceRolling;
    TArray<FSecondaryResourceWeight> SecondaryResourceWeights;
    float ChanceToSpawnSecondaryNormalized;
    TSubclassOf<class AItemPickup> SecondaryResourceToSpawn;

    void OnRep_ResourceFieldMeshLevel();
};

struct FResourceRenderInfo
{
    FName CodeName;
    class UStaticMesh* StaticMesh;

};

class UResourceGroupRenderComponent : public USceneComponent
{
    FResourceRenderInfo RenderingInfo;
    TArray<class UStaticMeshComponent*> ResourceNodes;

};

class UResourceMapping : public UObject
{
    TMap<class FName, class TSubclassOf<AResourceMine>> MineTypes;
    TMap<class FName, class TSubclassOf<AResourceField>> FieldTypes;

};

class AResourceMine : public ABuildableStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    FName ProducedItem;
    int16 ProducedItemCount;
    FName ProducedRareItem;
    float ChanceToProduceRareItem;
    float ProductionCycleTime;
    float PetrolEfficiencyMultiplier;
    float DieselConsumptionRate;
    float PetrolConsumptionRate;
    FFuelTank FuelTankDiesel;
    FFuelTank FuelTankPetrol;
    bool bIsProducing;
    float ItemsInProduction;
    class USceneComponent* TransferLocation;
    FName RequiredFieldCodeName;

    bool IsProducing();
};

class AResourceMineBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;

};

class ADestroyedResourceMine : public ADestroyedStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;

};

class AResourceTransferStation : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class USceneComponent* TransferLocation;

};

class ALiquidTransferStation : public AResourceTransferStation
{
    TArray<FFuelQuantity> FuelBuffers;
    TArray<class UBuildSocketComponent*> InputSockets;
    class UBuildSocketComponent* OutputSocket;

};

class ARespawnSpectatorPawn : public ASpectatorPawn
{
};

struct FProductionResource
{
    FName ItemCodeName;
    uint16 Quantity;

};

struct FRocketLaunchCodeInfo
{
    EWorldConquestMapId LaunchCodeRegion;
    uint8 LaunchCodeID;

};

class ARocket : public ATeamStructure
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UParticleSystemComponent* FuelingParticleSystem;
    class UParticleSystemComponent* GroundParticleSystem;
    class UParticleSystemComponent* LaunchParticleSystem;
    class UParticleSystemComponent* InFlightParticleSystem;
    class USoundCue* LaunchSoundCue;
    class USoundCue* ImpactSoundCue;
    TSubclassOf<class UCameraShake> InFlightCameraShake;
    float LaunchAnimationTime;
    float FlightAnimationTime;
    TArray<FProductionResource> InitialResourceRequirements;
    int32 FuelRequiredForLocalLaunch;
    int32 FuelRequiredForGlobalLaunch;
    TSoftClassPtr<ARocketImpactEffect> ImpactEffectClass;
    TSoftClassPtr<ARocketGroundZero> GroundZeroClass;
    class UAudioComponent* LaunchAudioComponent;
    ERocketLaunchSequence State;
    EFactionId InitiatingFaction;
    int16 Fuel;
    FVector SelectedStrikeLocation;
    float ExpiryTime;
    FRocketLaunchCodeInfo SelectedCode;
    int64 ExpiryTimeTicks;

    void OnRep_State();
    void OnRep_Fuel();
    void OnRep_ExpiryTime();
    void BPBeginLaunch();
};

class ARocketBuildSite : public AStructureBuildSite
{
};

class ARocketImpactEffect : public AActor
{
    class UArrowComponent* ArrowComponent;

};

class ARocketGroundZero : public AActor
{
    class UArrowComponent* ArrowComponent;
    float DamageDuration;

};

class ARocketFacility : public ATeamStructure
{
    class UBoxComponent* BuildLocation;
    ERocketLaunchSequence Sequence;
    FRocketLaunchCodeInfo SelectedCode;
    FVector SelectedStrikeLocation;
    FString LastBuilderOnlineID;
    int32 SquadId;
    uint8 RequiredSquadMembers;
    uint8 SelectedCodeEntryCount;
    EWorldConquestMapId TargetRegion;
    FWarGridCoordinate Coordinate;
    FFuelTank FuelTank;
    float RemainingTimeToLaunch;

    void OnRep_RemainingTimeToLaunch();
};

class ADestroyedRocketFacility : public ADestroyedStructure
{
    EMapTeamId SavedMapTeamID;

};

class ARocketLauncherProjectileDummy : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;

    void SpoolupFinished();
    void BPBeginLaunch();
};

class URotatorMountComponent : public UMountComponent
{
    int32 PlayersRequiredToRotate;

    void ServerOnMoveRight(float Val);
};

class URWDVehicleMovementComponent : public USimpleVehicleMovementComponent
{
    float CenterOfGravityHeight;
    float EngineForce;
    float BrakeForce;
    float HandbrakeForce;
    float AirResistance;
    float RollingResistance;
    bool bUseLegacyLateralCalc;

};

class AScoutVehicle : public ARWDSimVehicle
{
    class USceneComponent* GunMuzzleLocation;
    int32 StashedAmmo;

};

class UScoutVehicleAnimInstance : public USimVehicleAnimInstance
{
    bool bIsTransmitting;

};

class AScreenshotCharacter : public AActor
{
    class USkeletalMeshComponent* Mesh;
    class USkeletalMeshComponent* Head;
    class USkeletalMeshComponent* Hands;
    class USkeletalMeshComponent* Legs;
    class USkeletalMeshComponent* Back;
    class USkeletalMeshComponent* Helmet;
    class USkeletalMeshComponent* EquippedItemMesh;
    bool bSetMeshesDynamically;
    bool bAlwaysResetEquippedItemMesh;
    EFactionId FactionId;
    EOutfitType OutfitType;
    EUniformType UniformType;
    EZombieType ZombieType;
    bool bIsFemale;
    uint8 SkinTone;
    class UMaterialInstance* OverrideMaterial;
    TSoftClassPtr<AItemPickup> EquippedItem;

};

class AStorageFacility : public ATunnelNode
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UReserveStockpileComponent* ReserveStockpileComponent;
    class UBoxComponent* DrivewayFootprintComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    class USceneComponent* TransferLocation;
    class UAITurretsControllerComponent* AITurretsController;

};

class ASeaport : public AStorageFacility
{
    class UBoxComponent* LandLoadingArea2;
    class UBoxComponent* WaterLoadingArea1;
    class UBoxComponent* WaterLoadingArea2;
    class USceneComponent* TransferLocation2;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    class UPersistentProxyComponent* ProxyLoadingDockComponent;
    class UBoxComponent* PassengerUnloadingArea1;
    class UBoxComponent* PassengerUnloadingArea2;
    class USceneComponent* LadderLocationSeaport1;
    class USceneComponent* LadderLocationSeaport2;
    class USceneComponent* LadderLocationDock1;
    class USceneComponent* LadderLocationDock2;
    TSubclassOf<class ALadder> LadderType;
    TArray<class ALadder*> SpawnedLadders;
    class UTeamFlagMeshComponent* FlagMesh;

};

class ADestroyedSeaport : public ADestroyedStorageFacility
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    class UPersistentProxyComponent* ProxyLoadingDockComponent;

};

class AStorageFacilityBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;
    class UReserveStockpileComponent* ReserveStockpileComponent;
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

};

class ASeaportBuildSite : public AStorageFacilityBuildSite
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    class UPersistentProxyComponent* ProxyLoadingDockComponent;

};

class UExitComponent : public USceneComponent
{
};

struct FGameplayFlags
{
    int32 Flags;

};

struct FRefinableItemModifier
{
    FName SourceItemCodeName;
    FName RefinedItemCodeName;
    float SpeedModifier;
    float YieldModifier;

};

struct FWarTweakables : public FTweakables
{
    bool bRequireAuth;
    bool bLogAuthToDiscord;
    bool bEnableRestrictions;
    float VehicleWrenchPreventionTime_Min;
    EDiscordEnableStatus DiscordEnableStatus;
    EAWSLogEnableStatus AWSLogEnableStatus;
    float UprisingPhaseDuration;
    int32 MineDecayTimeSec;
    float MaxAFKDurationSeconds;
    float MaxStructureAFKDurationSeconds;
    float GasMaskFilterAbsorbPerPoint;
    float StockpileDecimation;
    float ResearchDecimation;
    bool bEnableUprisings;
    bool bEnableResourceTestMode;
    float ScrapReplenishRates;
    float ComponentReplenishRates;
    float SulfurReplenishRates;
    float SpawnTimeColonial;
    float SpawnTimeWarden;
    float SpawnTimeCap;
    float StructureRecentAttackDurationMin;
    float StructureUnderAttackAlertCooldownMin;
    float PostTravelInvulnerabilityTime;
    float PostTravelInvulCooldownSeconds;
    float GarrisonFrequency;
    float GarrisonActivityFactor;
    float GarrisonActivityFactorOverride;
    float SmallGarrisonActivityFactor;
    float LargeGarrisonActivityFactor;
    float GarrisonDeployCost;
    float GarrisonDecay;
    float GarrisonStarterSize;
    float GarrisonMinSize;
    float DesiredFriendlyGarrisonSize;
    float FriendlyGarrisonGrowth;
    int32 DeployRechargeTime;
    float TimeBetweenDeadlyGasDamage;
    float ZombieRegularHealthModifier;
    float ZombieSpitterHealthModifier;
    float ZombieTankHealthModifier;
    float ZombieRegularDamage;
    float ZombieSpitterDamage;
    float ZombieTankDamage;
    float HitMitigation;
    float HitMitigationRifle;
    float HitMitigationCarbine;
    float HitMitigationSniper;
    float HitMitigationAssault;
    float HitMitigationOptimalDistance;
    float ForwardArcDot;
    float CriticalWoundChanceNormalized;
    float PatientConversionTimeModifier;
    int32 SuppliesPerPatient;
    int32 HomeRegionTestPopulation;
    int32 HomeRegionPlayersPerBase;
    float UnexplodedOrdnanceChance;
    int32 FortBaseNetworkDistance;
    float LRAMaxPowerPerMin;
    float LRADamage;
    float LRADamageInnerRadius;
    float LRAAccuracyRadiusMultiplier;
    float FSAAccuracyRadiusMultiplier;
    float LRALaunchVelocity;
    float LRALaunchVelocityZ;
    float LRALaunchVelocityZDistanceFactor;
    float IntelCenterListeningRadiusMin;
    float IntelCenterListeningRadiusMax;
    float IntelCenterMaxPowerPerMin;
    float ConcreteSettleDurationModifier;
    bool bPreventSaveWithZeroActors;
    bool bEnableVips;
    bool bLogIncompleteValidations;
    float ValidationThreshold;
    float FastDecayOnRoadFactor;
    float FortDecayFactor;
    float FortChanceToAggro;
    float BorderFOBDeploymentDistance;
    int32 NumUnstuckCommandsPerWar;
    float UnstuckWaitTime;
    float ReserveStockpileExpiryHours;
    float RefineryExpiryHours;
    int32 SupplySurplusMaxRegionStructures;
    int32 SupplySurplusMaxLocalStructures;
    int32 StockpileAlertMinValue;
    int32 DistributionCenterAlertMinValue;
    int32 DistributionCenterSubmitCooldown;
    int32 FactoryScalingPopulationMin;
    int32 FactoryScalingPopulationMax;
    float FactoryScalingModifierMin;
    float FactoryScalingModifierMax;
    float FactoryExpiryMultiplier;
    float FactoryOrderTimeMultiplier;
    float MassProductionSpeedFactor;
    int32 MassProductionMaxCompletedOrders;
    float ResourceHighYieldChance;
    float ResourceHighYieldRandomFloor;
    float ResourceHighYieldRandomCeiling;
    int32 ResourceFieldScalingPopulationMin;
    int32 ResourceFieldScalingPopulationMax;
    float ResourceFieldScalingModifierMin;
    float ResourceFieldScalingModifierMax;
    float ResourceFieldReplenishmentVariation;
    float TechNodeMinSpawnChance;
    float TechNodeMaxSpawnChance;
    int32 TechNodeMinThreshold;
    int32 TechNodeMaxThreshold;
    int32 ResourceMineScalingPopulationMin;
    int32 ResourceMineScalingPopulationMax;
    float ResourceMineScalingModifierMin;
    float ResourceMineScalingModifierMax;
    float MinVehicleSpawnTimeSeconds;
    float MaxVehicleSpawnTimeSeconds;
    float ResearchTickRate;
    float StockpileActivityModifier;
    float MaxStockpileActivityPerHour;
    float SuppliesActivityModifier;
    float MaxSuppliesActivityPerHour;
    float SpawnPointActivityModifier;
    float MaxSpawnPointActivityPerHour;
    float TeamStructureActivityModifier;
    float MaxTeamStructureActivityPerHour;
    float FriendlyTerritoryActivityModifier;
    float MaxActivityPerHour;
    int32 ProvisionalGarrisonSpawnsRequired;
    float MinTankArmourMultiplier;
    float SubsystemDisableChanceMultiplier;
    float FrontierMapIntelLimitDistance;
    float ZombieHeavyStructureThreshold;
    float ZombieHeavyStructureHitChance;
    float ZombieTankHeavyStructureHitChance;
    float BorderBaseCooldownSeconds;
    int32 BorderBaseSuppliesPopulationMin;
    int32 BorderBaseSuppliesPopulationMax;
    float BorderBaseSuppliesModifierOverride;
    float JoinServerReservationMinutes;
    float TravelReservationMinutes;
    int32 MaxReservedQueueSlots;
    float TimeInConquestQueueThreshold;
    float AISupppressionMax;
    float AISuppressionDecayRate;
    float AISuppressionGrowthRate;
    float AISuppressionGrowthMax;
    int32 VoiceChatChannelNameSuffix;
    bool bFactionSpecificVoice;
    int32 MaxResourceNodesOfAnyKind;
    float WorldResourceSpawnChance;
    float WorldResourceRoadMultiplier;
    float WorldResourceMaxBadLuckMins;
    float WorldResourceMaxBadLuckMultiplier;
    float WorldResourceDistanceCheck;
    float WorldResourceDistance;
    float WorldResourceCooldown;
    int32 WreckageToBMatMax;
    int32 WreckageToRMatMax;
    int32 WreckageToRelicMax;
    int32 WreckageBMatWeight;
    int32 WreckageRMatWeight;
    float BallisticPenetrationMaxDistance;
    float BallisticPenetrationDistanceExponent;
    float BallisticPenetrationMaxAngleBonus;
    float BallisticPenetrationMaxRangeBonus;
    float MuddynessGain;
    float MuddynessLost;
    float PlayerSnowStormTemperatureLoss;
    float VehicleSnowStormTemperatureLoss;
    float PlayerInVehicleTemperatureGain;
    float PlayerInStructureTemperatureGain;
    float PlayerNoWeatherTemperatureGain;
    float VehicleNoWeatherTemperatureGain;
    float PlayerFirePitTemperatureGain;
    float VehicleFirePitTemperatureGain;
    float VehicleEngineOnTemperatureGain;
    float VehicleShelteredTemperatureGain;
    float NaturalHeatDecay;
    float NaturalHeatGrowth;
    float StructurePrototypeRepairModifier;
    float VehiclePrototypeRepairModifier;
    float FirePitFuelUseMultiplier;
    float MHTAllowedExtraDistance;
    bool ArtilleryFreeAmmo;
    float WindDirectionOverride;
    float WindSpeedOverride;
    float WindFactor;
    float WindSpeedMin;
    float WindSpeedMax;
    float WindSpeedChangeRateMin;
    float WindSpeedChangeRateMax;
    float WindDirectionChangeRateMin;
    float WindDirectionChangeRateMax;
    float WeatherWindChangeMultiplier;
    float StructureDamageDevastationSize;
    float StructureDamageDevastationFactor;
    float StructureDamageDevastationMultiplierMax;
    float StructureDamageDevastationMinThreshold;
    float RuinedStructureDevstationSize;
    float RuinedStructureDevstationThreshold;
    int32 MinFortArtilleryShots;
    int32 MaxFortArtilleryShots;
    float LightArtilleryDamageOverride;
    float HeavyArtilleryDamageOverride;
    float DecayDamageMultiplier;
    bool bDisableVehiclePendingTravelCheck;
    FString ExtraColonialStarterTowns;
    FString ExtraWardenStarterTowns;
    float DeployQueueTimerSec;
    float AutoSaveSeconds;
    float RecoverySaveSeconds;
    bool WarBalancerEnabled;
    bool WarBalancerDryRunMode;
    int32 WarBalancerMaxPlayers;
    int32 WarBalancerMinPlayersBasedOnTick;
    int32 WarBalancerFalloffStartDay;
    int32 WarBalancerWinFactorMinZoneDelta;
    int32 WarBalancerLocalPopulationFactorSmallFaction;
    int32 WarBalancerLocalPopulationFactorMinDelta;
    int32 WarBalancerMostlyFriendlyRegionZoneDelta;
    int32 WarBalancerContestedPopulation;
    int32 WarBalancerContestedMinFreeSlots;
    float WarBalancerDisadvantagedImbalance;
    float WarBalancerImbalanceLimit;
    float WarBalancerContestedMaxPopulationMultiplier;
    float WarBalancerSpawnTimeAveragePopulationWeight;
    float WarBalancerSpawnTimeMultiplier;
    float WarBalancerSpawnTimeEnemyRegionMultiplier;
    float WarBalancerSpawnTimeMax;
    float WarBalancerMaxTickMs;
    int32 WarBalancerContestedMaxQueueSize;
    int32 MaxProfilesToProcessAtOnce;
    FString MergeDestUrl;
    FString MergeSourceUrl;
    bool bKickForVacTimeout;
    bool bEnableInfoUpdate;
    float RecoveryModeDurationSeconds;
    bool bEnableDamageDebug;
    float BridgeVehicleDecayPercent;
    int32 IntelLeakVoteKicksRequired;
    float PreAutoRestartAlertTime;
    float PreAutoRestartAlertInterval;
    float SameStructureRadius;
    int32 SameStructureMaxOverlapCount;
    int32 SameStructureMaxDenseStructures;
    float NetStatsInterval;
    float AbandonedBaseTickRate;
    float AbandonedBaseNormalizedDamage;
    float FacilityDurationModifier;
    float FacilityPowerDurationModifier;
    float BuildingFireSpreadChanceFactor;
    int32 MaxPowerNodeDistance;
    int32 MaxRailTravelPassengers;
    int32 NumDisruptivePlacementVotes;
    float FireBaseChance;
    float FireMaxDevastationBonusToFireChance;
    float FireMaxAddedBurningFromHitsPerTick;
    float FireMinAddedBurningFromHitsPerTick;
    float FireBurningCharacterRange;
    float FireMinFireDamageToContinueBurning;
    float FireExtinguishEffectivenessMultiplier;
    float FireAddedBurningEffectivenessMultiplier;
    float FireBuildingCharacterBurnMultiplier;
    float ArtilleryTravelFiringPreventionSeconds;

};

struct FWarTimeDiscrepancy
{
    float MaxTimeMargin;
    float MinTimeMargin;
    float DriftAllowance;
    float ResolutionRate;

};

class UServerSettings : public USaveGame
{
    bool bFriendlyFire;
    bool bLoginRestrictions;
    bool bDevBranchMode;
    bool bFactionLock;
    bool bAllowMods;
    float ResourceBalanceBase;
    float BorderDecayFactor;
    float AddedTimePerHomeSpawn;
    int32 ConquestIteration;
    TArray<FName> ExcludedCodeNames;
    FText WelcomeMessage;
    int32 MaxPlayers;
    FString ServerName;
    bool IsCommunityServer;
    FGameplayFlags GameplayFlags;
    ERegionType ServerRegion;
    float GlobalRefineSpeedModifer;
    TArray<FRefinableItemModifier> RefinableItemModifierList;
    float GlobalRefineYieldModifier;
    int32 ShardId;
    float SpawnInvulnerabilityTime;
    int32 MinLobbyPlayers;
    bool bEnableVehicleAFKTimeout;
    bool bEnableTravelPortalSearchFallback;
    bool bAdvertiseToSteam;
    TArray<int32> MinClientVersion;
    bool bSelfServeFactionUnlockEnabled;
    float AutoRestartServerTimeSecs;
    FWarTweakables WarTweakables;
    FWarReplicatedTweakables WarRepTweakables;
    FWarTimeDiscrepancy WarTimeDiscrepancy;
    FDateTime NextWarTime;
    FString NextWarMapOverride;

};

class AShippable : public ABuildableStructure
{
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UMeshComponent* DynamicMeshComponent;
    FName ShippableType;
    FReplicatedShippableData ShippableData;
    FSavedShippableData SavedData;

    void OnRep_ShippableType();
    void OnRep_ShippableData();
};

class AShippableCrate : public AReservableStructure
{
    class UStaticMesh* ShippableMesh;
    FName StoredCodeName;

};

class AVehicleCrate : public AShippableCrate
{
};

class AStructureCrate : public AShippableCrate
{
};

struct FShippableRenderInfo
{
    class UStaticMesh* Base;
    class UStaticMesh* BaseDanglingRope;
    class UStaticMesh* BaseRope;
    class UStaticMesh* ContainerDanglingRope;
    class UStaticMesh* ContainerRope;
    FVector CollisionExtents;
    float DanglingRopeOffsetZ;

};

class AGlobalShippableInfo : public AInfo
{
    FShippableRenderInfo SmallSizeConfig;
    FShippableRenderInfo NormalSizeConfig;
    FShippableRenderInfo LargeSizeConfig;
    FShippableRenderInfo ExtraLargeSizeConfig;

};

class AResourceContainer : public AContainer
{
};

class AShippingContainer : public AContainer
{
    TArray<FLinearColor> Colors;
    class UResourceGroupRenderComponent* ResourceGroupRenderComponent;
    uint8 ColorIndex;

    void OnRep_Color();
};

class AShootingRangeArea : public AActor
{
    class UBoxComponent* ShootingRangeComponent;

    void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
};

class UShotgunComponent : public UHitScanWeaponComponent
{
    TArray<FHitNotify> SimulatedHitNotifies;

    void OnRep_SimulatedHitNotifies();
};

class UShovelComponent : public UTaskItemComponent
{
    TSubclassOf<class AImpactEffect> ImpactEffect;

    void ServerPlaceTrench(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    void MulticastPlayFX();
};

struct FSignPostVote
{
    FString VoterOnlineID;
    bool bIsUpVote;

};

class ASignPost : public ABuildableStructure
{
    int32 HealPerUpVote;
    int32 DamagePerDownVote;
    FText Text;
    TArray<FSignPostVote> VoteList;
    int64 LastEditedTimeTicks;
    bool bIsWorldSignPost;

};

class ASignPostBuildSite : public AStructureBuildSite
{
};

struct FSavedCharacter
{
    float Health;
    TArray<FItemInstance> BagItems;
    TArray<FItemInstance> EquippedItems;

};

struct FWarReporter
{
    TArray<int32> TeamKills;
    TArray<FString> OnlineIDListOfAllPlayersJoined;

};

class ASimGameMode : public AWarGameMode
{
    float DefaultAutoSavePeriod;
    FString DefaultAutoSaveSlot;
    TSubclassOf<class APawn> DefaultBotClass;
    TMap<uint32, AActor*> AssignableSpawnPoints;
    TMap<class FString, class AOfflineCharacter*> OfflineCharacterMap;
    TSubclassOf<class AOfflineCharacter> OfflineCharacterClass;
    TMap<class FString, class FSavedCharacter> SavedCharacterMap;
    class UPlayerProfileManager* PlayerProfileManager;
    FWarReporter WarReporter;
    class UResourceMapping* ResourceMapping;

    void HeadlessServerCommand(FString Command);
    void HeadlessCommand(FString Command);
};

class AWarGameState : public AGameState
{
};

struct FTownHallInfo
{
    int8 TeamId;
    ETownHallState TownHallState;
    FVector2D_NetQuantize Location;

};

struct FWarAchievementProgress
{
    TArray<float> ColonialProgress;
    TArray<float> WardenProgress;

};

struct FWeatherState
{
    EWorldConquestMapId MapId;
    EWeatherType Type;
    uint8 Intensity;
    uint8 PeakIntensity;
    FVector2D WorldLocation;
    float InnerRadius;
    float OuterRadius;

};

struct FWorldWeatherState
{
    FWeatherState GameplayState;
    TArray<FWeatherState> States;

};

class ASimGameState : public AWarGameState
{
    TArray<FTownHallInfo> TownHallInfo;
    FGameplayFlags GameplayFlags;
    class AMapIntelligence* MapIntelligence;
    float ConcreteSettleDurationModifier;
    FWarAchievementProgress WarAchievementProgress;
    uint32 StructureLayers;
    FWorldWeatherState WorldWeatherState;
    float PrevWindSpeedTime;
    uint8 PrevWindSpeed;
    float NextWindSpeedTime;
    uint8 NextWindSpeed;
    float PrevWindDirectionTime;
    uint8 PrevWindDirection;
    float NextWindDirectionTime;
    uint8 NextWindDirection;
    class ATechTree* ColonialTechTree;
    class ATechTree* WardenTechTree;
    EFactionId ConquestWinner;
    EWarPhase WarPhase;
    FDateTime WarPhaseEndTime;
    bool bIsPatchRequired;

    void OnRep_WorldWeatherState();
    void OnRep_WardenTechTree();
    void OnRep_GameplayFlags();
    void OnRep_ColonialTechTree();
    void MulticastToggleEarlyWarRestrictionOverride();
    void MulticastRemoveOfflinePlayerState(FString OnlineID);
    FVector2D GetWindVector();
};

class ASimPainCausingVolume : public APainCausingVolume
{
};

struct FSpectateTarget
{
    class APlayerState* PlayerState;

};

class ASimPlayerCameraManager : public APlayerCameraManager
{
    class UPostProcessComponent* PostProcessComponent;
    class UMaterialInstanceDynamic* FogMaterialDynamic;
    FSpectateTarget SpectateTarget;

};

class AWarPlayerState : public APlayerState
{
};

class ASimPlayerState : public AWarPlayerState
{
    int8 TeamId;
    int8 Level;
    int8 Rank;
    int32 XP;
    int16 CP;
    int8 CPToGive;
    int64 TimeOfLastVoteKick;
    uint16 DailyVoteKickCount;
    ERestrictedState RestrictedState;
    int32 SquadId;
    int32 InactiveSquadIds;
    int32 RegimentID;

    void OnRep_TeamID();
    void OnRep_SquadId(const int32 PreviousSquadId);
    void OnRep_RestrictedState();
    void OnRep_RegimentId();
    void OnRep_InactiveSquadIds();
    void ClientSetIsGodMode(const bool bIsGodMode);
};

class ASimulatedBombardment : public AActor
{
};

class AGlobalMovementModifiersInfo : public AInfo
{
    TArray<FSurfaceMovementData> VehicleData;
    TArray<FSurfaceMovementData> MotorboatData;

};

class ASimWaterVolume : public ASimPainCausingVolume
{
};

class ASirenWarning : public AActor
{
    class UArrowComponent* ArrowComponent;

};

class ASkySphere : public AActor
{

    void BP_UpdateSunDirection();
};

class ASmokeGrenadeExplosionEffect : public AWarExplosionEffect
{
    class UObscuringSphereComponent* ObscuringSphere;
    float MinimumVisibilityRadius;
    class UCurveFloat* VisibilityRadiusCurve;

};

class USniperRifleComponent : public UHitScanWeaponComponent
{
};

class ASoldierItemPickUp : public AItemPickup
{
    class USkeletalMeshComponent* Torso;
    class USkeletalMeshComponent* Legs;
    class USkeletalMeshComponent* Head;
    class USkeletalMeshComponent* Hands;
    class USkeletalMeshComponent* Helmet;

};

class USoulstoneComponent : public UItemComponent
{
    TSubclassOf<class AWarExplosionEffect> TransformExplosionEffect;
    bool bIsEquipped;

    void ServerUseSoulstone(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
};

class USpawnPointComponent : public USceneComponent
{
    ESpawnPointPriority Priority;

};

class ASpecializedFactoryBuildSite : public AStructureBuildSite
{
    class USpecializedFactoryComponent* SpecializedFactoryComponent;

};

class ADestroyedSpecializedFactory : public ADestroyedTeamStructure
{
    class USpecializedFactoryComponent* SpecializedFactoryComponent;

};

class ASpecializedFactory : public ATeamStructure
{
    class USpecializedFactoryComponent* SpecializedFactoryComponent;

};

class AMassProductionFactoryBuildSite : public ASpecializedFactoryBuildSite
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

};

class ADestroyedMassProductionFactory : public ADestroyedSpecializedFactory
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;

};

class AMassProductionFactory : public ASpecializedFactory
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    class USceneComponent* TransferLocation;
    class UBoxComponent* TransferLocationFootprint;
    class USoundCue* ShippableCrateSound;
    class UParticleSystem* ShippableCratePS;

    void MulticastPlayShippableCrateFX();
};

struct FFactoryProductionItem
{
    FName CodeName;

};

struct FFactoryProductionCategory
{
    EFactoryQueueType Type;
    TArray<FFactoryProductionItem> CategoryItems;

};

struct FSpecializedFactoryOrder
{
    FString OnlineID;
    EFactionId FactionId;
    EFactoryOrderAccess AccessLevel;
    int32 SquadId;
    TArray<FSpecializedFactoryOrderItem> OrderItems;
    float ProductionTimeMultiplier;
    float CompleteTime;

};

struct FFactoryQueue
{
    EFactoryQueueType Type;
    float CraftingProgress;
    float CraftingSpeedFactor;
    TArray<FSpecializedFactoryOrder> Orders;
    TArray<FSpecializedFactoryOrder> CompletedOrders;

};

class USpecializedFactoryComponent : public UActorComponent
{
    TArray<FFactoryProductionCategory> ProductionCategories;
    int32 MaxOrderSize;
    int32 MaxQueueSize;
    int32 MaxCompletedOrders;
    float CraftUpdateCycleSeconds;
    float CompletedOrderExpiryTime;
    float ProductionTimeMultiplier;
    float MassProductionDiscountPerItem;
    float MassProductionMaxDiscount;
    bool bIsMassProductionSupported;
    int32 MassProductionMinOrderSize;
    bool bAutoAddVehicleProductionCategory;
    bool bAutoAddStructureProductionCategory;
    TArray<FFactoryQueue> Queues;
    bool bIsProducing;

    bool IsProducing();
};

class USpecializedFactoryUserComponent : public UUserComponent
{
    TArray<FFactoryQueue> Queues;

};

class ASpiderMech : public ATankBase
{
    class UStaticMesh* PackagedMesh;
    float GunnerYaw;
    FVector2D AltGunnerYawAndPitch;
    int32 StashedAmmo;
    int32 AltStashedAmmo;

};

class USpiderMechAnimInstance : public USimVehicleAnimInstance
{
    float GunnerYaw;
    float AltGunnerYaw;
    float AltGunnerPitch;
    bool bIsHatchOpen;

};

struct FSplineConnectorMeshConfigPoint
{
    int32 PointIndex;
    float MinPrevDistance;
    float MinNextDistance;

};

struct FMeshConfigSurfaceSettings
{
    bool bEnableSurfaceDeltaLowerBound;
    float SurfaceDeltaLowerBound;
    bool bEnableSurfaceDeltaUpperBound;
    float SurfaceDeltaUpperBound;
    bool bRequireBothSidesWithinBounds;
    TArray<class UPhysicalMaterial*> PhysMatBlockList;

};

struct FSplineConnectorMeshConfig
{
    class UStaticMesh* Mesh;
    TArray<class UStaticMesh*> Meshes;
    TArray<FDecalData> Decals;
    bool bReceivesDecals;
    class UMaterialInterface* BuildGhostMaterialOverride;
    class UMaterialInterface* BuildSiteMaterialOverride;
    ESplineConnectorMeshMode Mode;
    TArray<FName> ComponentTags;
    FName CollisionProfileName;
    bool bCollisionOnly;
    class UPhysicalMaterial* PhysMaterialOverride;
    uint8 CollisionIgnoreFlags;
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
    uint32 StartIndex;
    uint32 EndIndex;
    float BoxWidth;
    float BoxHeight;
    float BoxLengthPadding;
    TArray<FSplineConnectorMeshConfigPoint> SpawnPoints;
    TEnumAsByte<ESplineMeshAxis::Type> SplineMeshAxis;
    FVector2D SplineStartOffset;
    FVector2D SplineEndOffset;
    float SplineBoundaryMin;
    float SplineBoundaryMax;
    float MinSplineLength;
    bool bExtendSplineToMinLength;
    float MinSplineLengthForCollision;
    FVector2D SplineMaterialScaling;
    float Interval;
    float IntervalDeltaPerDegree;
    bool bEvenlySpace;
    bool bLinearPlacement;
    bool bFillRemainder;
    bool bFixedPitch;
    float FixedPitch;
    float StartOffset;
    float EndOffset;
    bool bApplySlopeOffset;
    FTransform RelativeTransform;
    FRotator RandomRotationVariance;
    FVector RandomPositionVariance;
    bool bDisplayOnInvalidPath;
    int32 CopyPlacementRangeFrom;
    bool bIsEndCap;
    bool bEndCapReactsToSockets;
    bool bReactToSurface;
    FMeshConfigSurfaceSettings SurfaceSettings;

};

struct FSplineConnectorComponentConfig
{
    FName ComponentName;
    FTransform RelativeTransform;
    float Distance;

};

struct FSplineConnectorMeshComponentInfo
{
    class UMeshComponent* MeshComponent;
    class UMaterialInterface* BuildGhostMaterialOverride;
    class UMaterialInterface* BuildSiteMaterialOverride;

};

class USplineConnectorComponent : public USceneComponent
{
    FName TargetComponentName;
    FName TargetComponentTag;
    float MaxTargetDistance;
    float MaxTargetAngle;
    bool bIgnoreTargetAngle;
    FTransform DefaultTarget;
    float SurfaceSampleResolution;
    TArray<FSplineConnectorMeshConfig> MeshConfigs;
    TArray<FSplineConnectorComponentConfig> ComponentConfigs;
    EConnectorPathMode PathMode;
    bool bUseBiarcPathModeWhenSnapped;
    bool bWorldSpaceArcTangents;
    float MinBuffer;
    float MaxBuffer;
    float MinRadius;
    float MaxRadius;
    float MaxArcAngle;
    ESplineFootprintShapeType BuildFootprintShapeType;
    float BuildFootprintCapsuleRadius;
    float BuildFootprintCapsuleHalfHeight;
    float BuildFootprintWidth;
    float BuildFootprintLength;
    float BuildFootprintHeight;
    float BuildFootprintVerticalOffset;
    float BuildFootprintStartOffset;
    float BuildFootprintEndOffset;
    float BuildFootprintBoxEndVerticalOffset;
    float BuildFootprintBoxEndLengthOverride;
    float BuildFootprintBoxEndHeightOverride;
    bool bUseExtendedFootprint;
    float MaxSlopeAngle;
    float MaxFootprintDepthBelowSurface;
    float MaxFootprintHeightAboveSurface;
    float MaxHeightAboveSurfaceAtEnds;
    int32 NumHeightEndSamples;
    bool bNoPlacementAboveWater;
    float Alpha;
    TArray<FSplineConnectorMeshComponentInfo> InstancedMeshes;
    TArray<FSplineConnectorMeshComponentInfo> SplineMeshes;
    TArray<class UBoxComponent*> BoxComponents;
    TArray<class UDecalComponent*> Decals;

};

class UStaticArtilleryAnimInstance : public UAnimInstance
{
    float Yaw;
    float Pitch;
    bool bIsMoving;
    bool bIsShooting;

};

class AHomeRegionBase : public AStaticBase
{
    int32 SpawnPriority;

};

class AStaticCrane : public ATeamStructure
{
    class USkeletalMeshComponent* MainMesh;
    class UStaticMeshComponent* BaseMesh;
    class UStaticMeshComponent* RopeMesh;
    class UBoxComponent* ShippableCollision;
    class UAudioComponent* ArmMovementSFXLoop;
    class UAudioComponent* DeployingSFXLoop;
    class UAudioComponent* PulleyMovementSFXLoop;
    class UOccupiableComponent* OccupiableComponent;
    class UBoxComponent* OccupiableComponentTrigger;
    class UBuildSocketComponent* PowerSocket;
    class UFacilityLightComponent* LightComponent;
    class UCraneComponent* CraneComponent;
    FPowerGridInfo PowerGridInfo;

    void OnRep_PowerGridInfo();
};

class UStealthComponent : public UActorComponent
{
    FName OpacityParamName;

};

class AStickyBombExplosive : public AExplosive
{
    float TotalFuseTime;
    float FuseTime;

};

class AStickyBombProjectile : public AWarProjectile
{
    class USkeletalMeshComponent* BombMesh;
    class USoundCue* AttachCue;
    float DetonationDelay;

    void CallDetonateWithLastHitResult();
};

class UStockpileUserComponent : public UUserComponent
{
    TArray<FStockpileEntry> Items;
    TArray<FStockpileEntry> ReservableItemCrates;
    TArray<FStockpileEntry> Vehicles;
    TArray<FStockpileEntry> VehicleCrates;
    TArray<FStockpileEntry> Structures;
    TArray<FStockpileEntry> StructureCrates;

    void ServerBeginRetrieve(class UActorComponent* RetrieveFromStockpileComponent, class UGenericStockpileComponent* RetrieveToStockpileComponent, FString StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const bool bIsRetrievingMulti);
    void OnRep_Vehicles();
    void OnRep_VehicleCrates();
    void OnRep_Structures();
    void OnRep_StructureCrates();
    void OnRep_Items();
};

class UReplicatedStockpileUserComponent : public UStockpileUserComponent
{
};

class AStorageBox : public ABuildableStructure
{
    class UStaticMeshComponent* MeshComponent;
    TArray<FItemInstance> ItemsToReplenish;
    float ReplenishRate;
    bool bReplenishFirstItem;
    bool bReplenishedOnce;

};

class AStructureIsland : public AActor
{
    TArray<class AStructure*> Structures;
    float StructuralIntegrity;
    uint8 TeamId;
    float HealthPool;
    float HealthPoolMax;
    EFireIntensity FireIntensity;

    void OnRep_Structures();
};

class UStructureLayerComponent : public UActorComponent
{
    uint32 IncludedInLayers;
    uint32 ExcludedByLayers;

};

struct FStructureProfileData
{
    bool bSupportsAdvancedConstruction;
    bool bHasDynamicStartingCondition;
    bool bIsRepairable;
    bool bIsOnlyMountableByFriendly;
    bool bIsUpgradeRotationAllowed;
    bool bIsUsableFromVehicle;
    bool bAllowUpgradeWhenDamaged;
    bool bCanOverlapNonBlockingFoliage;
    bool bDisallowAdjacentUpgradesInIsland;
    bool bIncludeInStructureIslands;
    bool bCanDecayBePrevented;
    float VerticalEjectionDistance;
    bool bEnableStealth;
    bool bIsRuinable;
    bool bBypassesRapidDecayForNearbyStructures;
    bool bUsesImpactsMaterial;
    bool bIsBurnable;

};

class AStructureProfileList : public AInfo
{
    TMap<class EStructureProfileType, class FStructureProfileData> StructureProfileMap;

};

class UTankEngineerComponent : public UMountComponent
{
    int32 TargetMountIndex;
    int32 RepairAmount;
    class USoundCue* ReloadSoundCue;
    class USoundCue* RepairSoundCue;
    TArray<FName> CompatibleAmmoNames;

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    void ServerRepair(FActivityStateChange ActivityStateChange);
    void MulticastRepairFX();
    void MulticastReloadFX();
};

class UTankGunnerMountComponent : public UMultiAmmoVehicleMountComponent
{
    class USoundCue* ReloadSoundCue;
    class USoundCue* ShotSoundCue;
    class UParticleSystem* MuzzleFlashPS;
    bool bTriggerDriverFiringState;

    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    void MulticastPlayFiringFX();
    void MulticastPlayDebugTrace(FVector TraceStart, FVector TraceEnd, FVector HitLocation, float HitAngle, FVector HitNormal, float DamageInnerRadius, float DamageOuterRadius);
};

class ATargetingRange : public AActor
{
};

class ATargetingWall : public AActor
{
    TArray<FPointDamageEvent> DamageEvents;
    class UStaticMeshComponent* ResetTrigger;

    void OnRep_DamageEvents();
};

class UTeamFlagMeshComponent : public UStaticMeshComponent
{
    class UStaticMesh* Team0Mesh;
    class UStaticMesh* Team1Mesh;
    class UMaterialInterface* MaterialConnected;
    class UMaterialInterface* MaterialDisconnected;
    class UMaterialInterface* MaterialDisconnectedStarved;

};

struct FTechTreeItemInfo
{
    FSlateBrush BrushOverride;
    FText DisplayNameOverride;
    FText DescriptionOverride;

};

struct FTechTreeItem
{
    FName CodeName;
    ETechID TechID;

};

struct FTechTreeLevel
{
    FName ItemCodeName;
    uint16 ItemsRequired;
    uint16 TechRequired;
    TArray<FTechTreeItem> Items;
    TArray<FTechTreeItem> SecondaryItems;

};

struct FTechTreeCategory
{
    TArray<FTechTreeLevel> Levels;

};

struct FTechTreeCategories
{
    FTechTreeCategory Vehicles;
    FTechTreeCategory Misc;

};

class ATechTree : public AInfo
{
    TMap<class ETechID, class FTechTreeItemInfo> ItemInfo;
    FTechTreeCategories Categories;
    TArray<uint32> TechUnlockBits;
    TArray<float> TechUnlockProgress;

    void OnRep_TechUnlockBits(const TArray<uint32>& PreviousTechUnlockBits);
};

struct FTechTreeComponentItemProgress
{
    ETechComponentID TechID;
    float Amount;

};

class UTechTreeComponent : public UActorComponent
{
    TSubclassOf<class UTechTreeComponentData> DataClass;
    bool bStartsCompleted;
    class UTechTreeComponentData* Data;
    TArray<FTechTreeComponentItemProgress> ItemProgress;
    int32 ItemUnlockBits;
    uint8 InfrastructureModCount;
    FTechTreeComponentDynamicOnResearched DynamicOnResearched;
    void DynamicOnResearched(const class UTechTreeComponent* TechTreeComponent, const ETechComponentID TechID);

    void OnRep_ItemUnlockBits(const int32 PreviousItemUnlockBits);
};

struct FTechTreeComponentItem
{
    ETechComponentID TechID;
    ETechComponentID NextTechID;
    EInfrastructureType InfrastructureType;
    int32 Requirement;
    int32 ModRequirement;

};

class UTechTreeComponentData : public UActorComponent
{
    TArray<FTechTreeComponentItem> Items;

};

class UTechTreeUserComponent : public UUserComponent
{
    FTechTreeComponentVotes TechTreeVotes;
    bool bIsSpawnPointSetHere;

    void ServerSetVote(const ESpawnPointCategory SpawnPointCategory, const EInfrastructureType Vote);
};

class UTemperatureModifierBoxComponent : public UBoxComponent
{

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class UTemperatureModifierSphereComponent : public USphereComponent
{

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class ATemplate : public AActor
{
};

class UTemplateComponent : public USceneComponent
{
    TSubclassOf<class ATemplate> TemplateActor;
    TArray<class UActorComponent*> SpawnedComponents;

};

class ATownBase : public AStaticBase
{
};

class ATownHallBuildSite : public ABaseBuildSite
{
};

class ATownBaseBuildSite : public ATownHallBuildSite
{
};

class UTrackSwitchAnimInstance : public UAnimInstance
{
    float Angle;

};

class UTrainPassengerMountComponent : public UMountComponent
{

    void ServerSubmitItems(class AActor* TargetActor);
};

class ATransportTruck : public ARWDSimVehicle
{
    class UBoxComponent* WorkVolume;
    int32 StashedAmmo;
    FName StashedAmmoType;

};

class UTraumaKitComponent : public UTaskItemComponent
{
};

class ATravelBlockingArea : public AActor
{
    class UBoxComponent* TravelBlockingComponent;

};

class UTravelManager : public UObject
{
    float RequestTimeout;
    float ProfileLoadTimeout;
    float ReservationTimeout;
    float FirstPlayerReservationTimeout;
    float TravelBorderSize;
    float SearchBorderOffset;
    float SearchMaxRadius;
    float SearchMaxRadiusVehicle;
    float SearchGroundMargin;
    float SearchMinimumWaterDepth;
    float OfflineCharacterOffset;
    float OfflineCharacterSpacing;
    float OfflineCharacterZOffset;
    float ArrivalInvulnerabilityTime;

    void ProfileSyncComplete(bool bSuccess, uint32 PendingTravelId);
};

class UTravelPortalComponent : public UUseComponent
{
};

class ATroopShip : public ASimVehicle
{
    class USceneComponent* RampExitPosition;
    class UGenericStockpileComponent* GenericStockpileComponent;
    FRampData Ramp;
    FName DeployedStructureCodeName;
    class UParticleSystemComponent* FrontLeftWaterEmitter;
    class UParticleSystemComponent* FrontRightWaterEmitter;
    class UParticleSystemComponent* BackRightWaterEmitter;
    class UParticleSystemComponent* BackLeftWaterEmitter;
    class UParticleSystemComponent* WakeWaterEmitter;
    class UAudioComponent* WaterDriveLoop;
    TEnumAsByte<EDeploymentState> DeploymentState;
    float RampAngle;

    void ServerToggleDeployment();
    void OnRep_DeploymentState();
};

class UTroopShipAnimInstance : public USimVehicleAnimInstance
{
    float RampAngle;
    bool bIsDeploying;
    bool bIsDeployed;

};

class ATroopShipBase : public AForwardBase
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UParticleSystemComponent* MinorDamagePS;
    class UParticleSystemComponent* MajorDamagePS;
    float RampAngle;

};

class ATunnelNodeProxy : public ATunnelNode
{
    float ProxyConnectionRange;

};

class UTurretLightComponent : public USceneComponent
{
    class USceneComponent* RotatedSceneComponent;
    class ULightComponentBase* LightComponent;

};

struct FDamageMitigation
{
    float Mitigation;
    class USoundBase* SFX;

};

struct FUniform
{
    int32 ItemHolderCapacity;
    uint32 StackFilter;
    int8 StackSize;
    uint32 EncumbranceFilter;
    float EncumbranceModifier;
    float DetectionChance;
    float SnowStormMitigation;
    float RainStormMitigation;
    TMap<class EDamageType, class FDamageMitigation> DamageMitigation;
    float BleedChanceModifier;
    bool bAllowRegimentFriendlyFire;

};

class UUniforms : public UObject
{
    FUniform Data;

};

class UUniformItemComponent : public UItemComponent
{
    EUniformType UniformType;

    void OnRep_UniformType();
};

class AUniformPickup : public AItemPickup
{
    EUniformType UniformType;

};

class UUseMonumentComponent : public UUseComponent
{
};

class UUseWorldMapComponent : public UUseComponent
{
};

struct FVehicleMovementProfileData
{
    float Mass;
    float BrakeForce;
    float HandbrakeForce;
    float AirResistance;
    float RollingResistance;
    float LowSpeedEngineForceMultiplier;
    float LowGearCutoff;
    float CenterOfGravityHeight;
    class UCurveFloat* FrontGripCurve;
    class UCurveFloat* RearGripCurve;
    class UCurveFloat* EngineForceMultiplierCurve;
    bool bUsesDifferentialSteering;
    bool bCanRotateInPlace;

};

class AVehicleMovementProfileList : public AInfo
{
    TMap<class EVehicleMovementProfileType, class FVehicleMovementProfileData> VehicleMovementProfileMap;

};

struct FVehicleProfileData
{
    bool bUsesRollTrace;
    bool bCanTriggerMine;
    bool bCanUseStructures;
    int32 RamDamageDealtFlags;
    bool bUsesGas;
    float DrivingSpeedThreshold;
    float MaxVehicleAngle;
    bool bEnableStealth;
    float DamageDrivingOverStructures;

};

class AVehicleProfileList : public AInfo
{
    TMap<class EVehicleProfileType, class FVehicleProfileData> VehicleProfileMap;

};

struct FModularMount
{
    FName ItemCodeName;
    FName CodeName;
    TSubclassOf<class UMountComponent> Component;
    class USkeletalMesh* SkeletalMesh;

};

struct FModularMounts
{
    TArray<FModularMount> Entries;

};

class UVehicleSeatComponent : public USceneComponent
{
    int32 Index;
    ESeatDirection Direction;
    FName TriggerName;
    FName ExitName;
    FName MountCodeName;
    TSubclassOf<class UMountComponent> MountComponent;
    FModularMounts ModularMounts;
    bool bIsSwitchable;
    bool bIsExposed;
    bool bCanFireWeapon;
    bool bIsWoundable;
    bool bIsEnabled;
    bool bOverrideAsPassenger;
    class USoundCue* EnterSFX;
    class UPrimitiveComponent* Trigger;
    class USceneComponent* Exit;
    class APlayerController* PC;
    class APlayerCharacter* Character;

};

class UVehicleTriggerComponent : public UBoxComponent
{
};

class UVehicleExitComponent : public USceneComponent
{
};

class UVehicleSpawnLocationComponent : public USceneComponent
{
    TSubclassOf<class ASimVehicle> VehicleClass;

};

class AVehiclesRenderInfo : public AInfo
{
    FPhysicalMaterialResolver PhysicalMaterialResolver;

};

class UVisibilityToggleAreaComponent : public UBoxComponent
{
    FName ToggleableComponentsTag;
    bool bBlockVehicles;

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class AWall : public ABuildableStructure
{
    bool bAllowStanding;
    bool UpgradeRequiresConnectedWalls;

};

class AConcreteWall : public AWall
{
    FConcreteSettler ConcreteSettler;

};

class ARock : public AWall
{
};

class UWarAssetManager : public UAssetManager
{
};

class UWarAudioComponent : public UAudioComponent
{
};

class AWarBaseHUD : public AHUD
{
};

struct FWarBeaconJoinRequestData
{
    FString Password;
    TArray<int32> ClientVersion;
    uint8 TeamId;
    EServerTravelOriginType ServerTravelOrigin;
    bool bConsumeSelfServeFactionUnlock;
    EQueueType QueueType;
    bool bSpawnAtOfflineCharacter;
    FSpawnPoint TravelPoint;
    FString DeviceID;

};

class AWarBeaconClient : public AOnlineBeaconClient
{

    void ServerRequestQueueStatusUpdate();
    void ServerLeaveQueue();
    void ServerJoinQueue(FWarBeaconJoinRequestData JoinRequestData);
    void ClientUpdateQueueStatus(const int32 NumPlayersAhead);
    void ClientPlayerIsBannedResponse(const bool IsBanned, const int64 BanDurationTicks, const FBanReasonInfo& BanReasonInfo);
    void ClientOnServerTravelling();
    void ClientJoinServer(const uint8 TeamId);
    void ClientJoinQueueResponse(const EJoinWarResponse JoinWarResponse);
};

class AWarBeaconHost : public AOnlineBeaconHostObject
{
};

class UWarBenchmarkNetConnection : public USimulatedClientNetConnection
{
};

class AWarBenchmarkPlayerController : public ASimPlayerController
{
};

class UWarDiscordClient : public UObject
{
};

struct FQueuedPlayer
{
    FUniqueNetIdRepl UniqueId;
    class AWarBeaconClient* BeaconClient;
    FDateTime TimeoutTime;
    bool IsConnected;

};

struct FWarServerQueue
{
    TArray<FQueuedPlayer> RegularQueue;
    TArray<FQueuedPlayer> PrioritizedQueue;
    TArray<FQueuedPlayer> ModQueue;
    TArray<FQueuedPlayer> ReservedList;

};

struct FDeploymentQueueEntry
{
    class AWarPlayerController* Controller;
    EWorldConquestMapId TargetMapId;
    FSpawnPoint TravelPoint;
    bool bIsRecovery;

};

struct FWarAPIClient
{
};

struct FMapPostManager
{
};

struct FWarRichTextStyle
{
};

struct FRegionZoneManager
{
};

struct FSquadManager
{
};

struct FRegimentManager
{
};

struct FSquadReplicatedState
{
    TArray<int32> ActiveSquadIdList;

};

struct FWarServiceReplicatedState
{
    FSquadReplicatedState SquadReplicatedState;

};

struct FRegimentMember
{
    FString OnlineID;
    FString PlayerName;
    ERegimentRole Role;

};

struct FRegiment
{
    int32 ID;
    int8 TeamId;
    FString Name;
    FString Tag;
    FString Link;
    TArray<FRegimentMember> Members;
    FString LastActiveWarId;

};

struct FRegimentClientReplicatedState
{
    TArray<FRegiment> ActiveRegimentList;

};

struct FExternalWarServiceReplicatedState
{
    FRegimentClientReplicatedState RegimentClientReplicatedState;

};

class UWarGameInstance : public UGameInstance
{
    class USoundMix* BaseSoundMix;
    class UObjectLibrary* BuildableStructureLibrary;
    class UObjectLibrary* ModificationTemplateLibrary;
    class UObjectLibrary* ItemPickupLibrary;
    class UObjectLibrary* VehicleLibrary;
    class UObjectLibrary* CharacterLibrary;
    class UBorderBaseManager* BorderBaseManager;
    class UWeatherManager* WeatherManager;
    class UWorldResourceSpawner* WorldResourceSpawner;
    class UWarDiscordClient* DiscordClient;
    class UWarSaveGame* CurrentWarSave;
    class UPlayerProfileManager* PlayerProfileManager;
    class UServerSettings* ServerSettings;
    class UClientStreamingManager* StreamingManager;
    class UTravelManager* TravelManager;
    class ULandscapeDeformationManager* LandscapeDeformationManager;
    class UCrossRegionActorManager* CrossRegionActorManager;
    class AMapList* MapList;
    class UWarSessionSettings* WarSessionSettings;
    class ALoreList* LoreList;
    uint32 LastColonialCount;
    uint32 LastWardenCount;
    FString BadWordList;
    class UDiscordRichPresence* DiscordRichPresence;
    FString DiscordRichPresenceApplicationID;
    class AWarBeaconHost* WarBeaconHost;
    class UMonumentManager* MonumentManager;
    FWarServerQueue ColonialQueue;
    FWarServerQueue WardenQueue;
    TArray<FDeploymentQueueEntry> DeploymentQueue;
    class UWarVoiceClient* WarVoiceClient;
    class UClientConfigManager* ClientConfigManager;
    FWarAPIClient WarAPIClient;
    FMapPostManager MapPostManager;
    FWarRichTextStyle RichTextStyle;
    FRegionZoneManager RegionZoneManager;
    FSquadManager SquadManager;
    FRegimentManager RegimentManager;
    FWarServiceReplicatedState WarServiceReplicatedState;
    FExternalWarServiceReplicatedState ExternalWarServiceReplicatedState;

    void ResetServerTravelStatusOnClient();
    uint32 GetLocalNetworkVersion();
    void DumpProperties(FString OutputFileName, const UClass* Type, const TArray<class UClass*>& BaseClassFilters, const TArray<FString>& PropertyNameFilter);
    void DumpCollisionProfiles(FString OutputFileName, const UClass* Type, const TArray<class UClass*>& BaseClassFilters, const TArray<FString>& ProfileNameFilters);
};

class AWarGameSession : public AGameSession
{
};

class UWarGameUserSettings : public UGameUserSettings
{
};

class UWarGameViewportClient : public UGameViewportClient
{
};

class AWarHUD : public AWarBaseHUD
{
    EHUDMode HudMode;
    class APostProcessVolume* LevelPostVolume;
    class UTexture2D* LocalMapImage;
    class UFont* OtherPlayerNamesFont;
    class UFont* WarTimerFont;
    class UFont* ReticleFont;
    class UFont* MapGridFont;

};

struct FWorldMapStyle
{
    FSlateBrush RegionAvailableIcon;
    FSlateBrush RegionQueuesIcon;
    FSlateBrush RegionContestedIcon;
    FSlateBrush RegionFocusImage;
    TArray<class UCurveFloat*> RegionFocusAlphaCurves;
    TArray<class UCurveFloat*> RegionFocusScaleCurves;
    FTextBlockStyle TitleTextStyle;

};

struct FContextMenuStyle
{
    FSlateBrush WhisperOnIcon;
    FSlateBrush CommendOnIcon;
    FSlateBrush VoteKickOnIcon;
    FSlateBrush ViolationLogIcon;
    FSlateBrush VoiceMuteOnIcon;
    FSlateBrush VoiceMuteOffIcon;
    FSlateBrush MuteOffIcon;
    FSlateBrush MuteOnIcon;
    FSlateBrush SquadInviteOnIcon;
    FSlateBrush RegimentInviteIcon;
    FSlateBrush RegimentPromoteIcon;
    FSlateBrush RegimentDemoteIcon;
    FSlateBrush RegimentDischargeIcon;

};

struct FWarMenuStyle : public FSlateWidgetStyle
{
    FButtonStyle MenuButtonStyle;
    FButtonStyle MenuButtonStyleA;
    FButtonStyle MenuButtonStyleB;
    FButtonStyle OpeningMenuTopButtonStyle;
    FButtonStyle NavigationMenuButtonStyle;
    FButtonStyle TutorialButtonStyle;
    TArray<FSlateBrush> HomeTutorialImagesC;
    TArray<FSlateBrush> HomeTutorialImagesW;
    TArray<FSlateBrush> WarTutorialImages;
    TArray<FSlateBrush> ZombieModeImages;
    FSlateBrush VoiceImageBrush;
    FButtonStyle NewsItemBgButtonStyle;
    FComboButtonStyle OptionsDropDownStyle;
    FSliderStyle OptionsSliderStyle;
    FComboBoxStyle OptionsTextComboBoxStyle;
    FSlateFontInfo OptionsTextComboBoxFont;
    FTextBlockStyle ExtraLargeTitleOutlinedTextBlockStyle;
    FTextBlockStyle LargeTitleTextBlockStyle;
    FTextBlockStyle SmallTitleTextBlockStyle;
    FTextBlockStyle LargeBodyTextBlockStyle;
    FTextBlockStyle BigCenteredBodyTextBlockStyle;
    FTextBlockStyle MediumStrokedBodyTextBlockStyle;
    FTextBlockStyle SmallStrokedBodyTextBlockStyle;
    FTextBlockStyle Tiny20pStrokedBodyTextBlockStyle;
    FTextBlockStyle Tiny16pStrokedBodyTextBlockStyle;
    FTextBlockStyle Tiny12pStrokedBodyTextBlockStyle;
    FTextBlockStyle Tiny8pStrokedBodyTextBlockStyle;
    FTextBlockStyle NormalBodyTextBlockStyle;
    FTextBlockStyle SmallBodyTextBlockStyle;
    FTextBlockStyle SmallBodyTextBlockGreyedStyle;
    FTextBlockStyle VerySmallBodyTextBlockStyle;
    FTextBlockStyle ExtremelySmallBodyTextBlockStyle;
    FTextBlockStyle ListHeaderTextBlockStyle;
    FTextBlockStyle LargeHeaderTextBlockStyle;
    FTextBlockStyle MenuButtonTextBlockStyle;
    FSlateBrush ColonialLogoBrush;
    FSlateBrush WardenLogoBrush;
    FSlateBrush NeutralFactionLogoBrush;
    FSlateBrush OpeningScreenBgBrush;
    FSlateBrush OpeningMenuBgBrush;
    FSlateBrush PauseMenuBgBrush;
    FSlateBrush NewsMenuBgBrush;
    FSlateBrush KeyboardConfigBgBrush;
    FSlateBrush TitleLogoBrush;
    FSlateBrush TitleLogoSmallBrush;
    FSlateBrush OptionsLogoBrush;
    FSlateBrush SolidColorBgBrush;
    FSlateBrush CreditsBGBrush;
    FSlateBrush GameModeDetailsBGBrush;
    FSlateBrush GameModeWarningBGBrush;
    FSlateBrush PlayerProfileBgBrush;
    FSlateBrush ServerListBgBrush;
    FSlateBrush ServerBrowserDetailsMenuBg;
    FButtonStyle CalloutButtonBackgroundStyle;
    FSlateBrush CalloutIconBrush;
    FSlateBrush CalloutPinpointIconBrush;
    FSlateBrush SquadTabBgBrush;
    FSlateBrush SquadTabTooltipBrush;
    FSlateBrush LoadingScreenBgBrush;
    FSlateBrush EmptyTransparentImage;
    FHeaderRowStyle ListHeaderRowStyle;
    FWorldMapStyle WorldMapStyle;
    FContextMenuStyle ContextMenuStyle;
    FSlateBrush ErrorMessageBg;
    FSlateBrush WelcomeMessageBg;
    FTextBlockStyle OpeningMenuTopTextStyle;
    FTextBlockStyle DeployTextStyle;
    FTextBlockStyle NavigationMenuTextStyle;
    FButtonStyle DiscordButtonStyle;
    FButtonStyle TwitchButtonStyle;
    FButtonStyle TwitterButtonStyle;
    FButtonStyle RedditButtonStyle;
    FButtonStyle WikiButtonStyle;
    FSlateBrush DiscordMessageBrush;
    FTextBlockStyle ProfileNameTextStyle;
    FSlateBrush ProfileWardenLogoBrush;
    FSlateBrush ProfileColonialLogoBrush;
    FButtonStyle PotraitScrollLeftButton;
    FButtonStyle PotraitScrollRightButton;
    FSlateBrush FemaleSexIcon;
    FSlateBrush MaleSexIcon;
    TArray<FSlateBrush> SkinToneTiles;
    TArray<FSlateBrush> VeteranPreAlphaMedals;
    FSlateBrush ServerPasswordLockedImage;
    FTextBlockStyle FrameRateWarningTextStyle;
    FSlateBrush MapHoverDetailsBG;
    FButtonStyle GameModeSelectionButtonStye;
    FCheckBoxStyle MapIconFilterCheckBoxStyle;
    FSlateBrush VivoxLogoBrush;
    FSlateBrush SiegeCampLogoBrush;
    FSlateBrush PlayerOnlineIcon;
    FSlateBrush PlayerOfflineIcon;
    FTextBlockStyle SupportMenuTitleTextStyle;
    FTextBlockStyle SupportMenuComboBoxLabelStyle;
    FButtonStyle SupportButtonStyle;
    FButtonStyle DeployButtonStyle;
    float NavigationButtonWidth;
    float NavigationButtonHeight;
    FMargin NavigationButtonBoxPadding;
    FMargin NavigationButtonVerticalBoxPadding;

};

class UWarMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
    FWarMenuStyle WidgetStyle;

};

class AWarPlayerStart : public APlayerStart
{
    class AActor* PlayerStartOwner;

};

class UWarReplicationGraph : public UReplicationGraph
{
    TArray<class UClass*> NonSpatializedChildClasses;
    class UWarReplicationGraphNode_GridSpatialization2D* GridNode;
    class UWarReplicationGraphNode_RailVehicleNode* RailVehicleNode;
    class UReplicationGraphNode_ActorList* AlwaysRelevantNode;

};

class UWarReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    class AActor* LastMovementBaseActor;
    class AActor* LastMountedStructure;
    class AActor* LastMountedVehicle;
    class AActor* LastVehicleBaseActor;
    class AActor* LastBaseBaseActor;

};

class UWarReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode_GridSpatialization2D
{
};

class UWarReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
{
};

struct FTrainRepInfo
{
};

class UWarReplicationGraphNode_RailVehicleNode : public UReplicationGraphNode
{
    TMap<class ARailVehicle*, class FTrainRepInfo> Trains;

};

struct FWarReplicationGraphActorDebugInfo
{
    class AActor* Actor;
    FVector WorldLocation;
    float GlobalCullDistance;
    float ConnectionCullDistance;

};

class AWarReplicationGraphDebugActor : public AReplicationGraphDebugActor
{

    void ServerViewTargets(float Delay);
    void ServerActorInfo(FString MatchString);
    void ClientViewTargets(const FNetViewer NetViewer);
    void ClientActorInfo(const TArray<FWarReplicationGraphActorDebugInfo>& DebugInfo, const FVector& ViewLocation);
};

struct FSavedActor
{
    FTransform Transform;
    FString Name;
    UClass* ActorClass;
    bool bIsLoadedFromMap;
    TArray<uint8> ByteStream;

};

struct FWarBalancer
{
    int32 NumImbalanceIterations;
    float RunningPopulationImbalancePercent;
    int32 CurrentAbsoluteMaxPopulation;

};

struct FScheduledWeatherState
{
    FWeatherState State;
    FVector2D NormalizedLocation;
    FDateTime StartTime;
    FDateTime EndTime;
    int8 IntensityCurve;

};

struct FWarDebugVariables
{
    int32 FastMode;
    int32 Build;
    int32 Crane;
    int32 Package;
    int32 Retrieve;
    int32 Placement;

};

class UWarSaveGame : public USaveGame
{
    FString WarId;
    TArray<FSavedActor> SavedActors;
    uint32 NextSpawnPointId;
    FString MapName;
    bool bUprisingStarted;
    FGameplayFlags GameplayFlags;
    TMap<class FString, class FPlayerWarState> PlayerWarStates;
    TMap<class FString, class FSavedCharacter> SavedCharacterMap;
    FWarReporter WarReporter;
    FWarBalancer WarBalancer;
    TArray<FTransform> ResourceMineTransforms;
    TArray<FTransform> ResourceFieldTransforms;
    EWarPhase WarPhase;
    FDateTime WorldResourceSpawnTime;
    TArray<FScheduledWeatherState> WeatherStateTimes;
    bool bIsWeatherManual;
    FWarDebugVariables DebugVariables;
    FDateTime Timestamp;
    bool bIsAutoSave;
    TSet<FName> DestroyedDestructibleProps;

};

struct FSavedRecoveryCharacter
{
    FString OnlineID;
    uint8 TeamId;
    FTransform Transform;
    uint8 VisualCustomizationMask;
    float Temperature;
    float Muddyness;
    FSavedCharacter SavedCharacter;

};

struct FSavedRecoveryVehicle : public FSavedActor
{
    FDateTime LastAutoSaveTimestamp;

};

class UWarRecoverySaveGame : public USaveGame
{
    FDateTime Timestamp;
    FString WarId;
    EWarPhase WarPhase;
    FString MapName;
    TArray<FSavedRecoveryCharacter> Characters;
    TArray<FSavedRecoveryVehicle> Vehicles;

};

class UWarSessionSettings : public UObject
{
};

class UWarStatics : public UObject
{

    bool IsNight(const class UObject* WorldContextObject);
};

class UWarVoiceClient : public UObject
{
};

class AWatchTower : public ATeamStructure
{
    class UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;
    class UTeamFlagMeshComponent* TeamFlagMeshComponent;

};

class AObservationTower : public AWatchTower
{
};

class UWaterBucketItemComponent : public UProjectileItemComponent
{
};

class AWaterMeshActor : public AStaticMeshActor
{
};

class UWaterReloadSourceComponent : public UActorComponent
{
};

class UWeaponAnimInstance : public UAnimInstance
{
    ECharacterActivityState CharacterActivityState;
    ESimCharacterStance CharacterStance;
    float CharacterSpeed;
    float AimOffsetYaw;
    float AimOffsetPitch;
    bool bIsCharacterScoping;

};

class AWeaponFireFX : public AActor
{
    class UProjectileMovementComponent* MovementComp;
    class USphereComponent* CollisionComp;

    void OnProjectileStop(const FHitResult& HitResult);
};

class AWearablePickup : public AItemPickup
{
};

class AWeatherActor : public AActor
{
    class UArrowComponent* ArrowComponent;
    class UBoxComponent* FreezeBoxComponent;
    EWeatherType WeatherType;
    FName ParameterName;
    class UCurveFloat* ParameterCurve;
    float TransitionDuration;

};

class AWeatherEffectsActor : public AActor
{
};

struct FWeatherEvent
{
    EWorldConquestMapId MapId;
    EWeatherType Type;
    FVector2D NormalizedLocation;
    float InnerRadius;
    float OuterRadius;
    float Intensity;
    int32 Delay;
    int32 Duration;
    int32 IntensityCurveIndex;

};

struct FWeatherPattern
{
    TArray<FWeatherEvent> Events;
    float PerWarSkipChance;
    int32 MinPostEventsDuration;
    int32 MaxPostEventsDuration;

};

class UWeatherData : public UObject
{
    TArray<FWeatherPattern> WeatherPatterns;

};

struct FWeatherEffectsActorTrigger
{
    TSubclassOf<class AWeatherEffectsActor> ActorClass;
    float IntensityThreshold;

};

struct FNamedParameterRange
{
    FName Name;
    float Start;
    float End;

};

struct FWeatherEffects
{
    TArray<FWeatherEffectsActorTrigger> EffectsActors;
    FNamedParameterRange MaterialParameter;
    float IntensityThreshold;
    float OffroadPenalty;
    float MinVisibility;
    float MaxVisibility;

};

class UWeatherManager : public UObject
{
    TSubclassOf<class UWeatherData> DataClass;
    TMap<class EWeatherType, class FWeatherEffects> WeatherEffects;
    class UMaterialParameterCollection* MaterialParameterCollection;
    TArray<class UCurveFloat*> IntensityCurves;
    float FogVisibilityMultiplier;
    class UMaterialInterface* FogMaterial;
    class UCurveFloat* FogBlendCurve;
    FNamedParameterRange CloudParameter;
    FNamedParameterRange WindParameter;
    FVector EffectsOffset;
    float EffectsLookAheadScale;
    TArray<class UPhysicalMaterial*> MudPhysicalMaterials;
    TArray<class UPhysicalMaterial*> SnowyPhysicalMaterials;
    TArray<class UPhysicalMaterial*> ConvertedPhysicalMaterials;

};

class UWorkItemComponent : public UItemComponent
{
    class USkeletalMesh* SkeletalMesh;
    TSubclassOf<class AImpactEffect> ImpactEffect;
    class USoundCue* WorkSoundCue;
    float QueryOffset;
    int32 MaxRange;
    bool bIsEquipped;

    void ServerPerformWork(class AActor* InTargetActor, class USceneComponent* InTargetActorComponent, FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
};

class AWorldProxyActor : public AActor
{
    TArray<class TSubclassOf<AActor>> ActorTypes;

};

class UWorldResourceSpawner : public UObject
{
    TSubclassOf<class AWorldResource> ResourceClass;

};

class AWoundedCarriedItemPickup : public AItemPickup
{
};

struct FZombieWeaponInfo
{
    EZombieType Type;
    FText Name;
    class UTexture2D* Icon;
    TSubclassOf<class UDamageType> MeleeDamageType;
    EZombieSecondaryAttack SecondaryAttack;
    ECharacterActivityState ActivityState;
    float Cooldown;

};

class UZombieWeaponComponent : public UItemComponent
{
    TArray<FZombieWeaponInfo> WeaponInfo;
    float MeleeDamageDelay;
    float MeleeDamageDelaySecond;
    TSubclassOf<class AWarProjectile> ProjectileClass;
    float ProjectileDelay;
    float ProjectileSpeed;
    class USoundCue* ProjectileSoundCue;
    class UParticleSystem* ProjectilePS;
    TSubclassOf<class AWarExplosionEffect> SmashExplosionEffect;
    float SmashDamageDelay;
    float SmashBaseDamage;
    float SmashRadius;
    bool bIsEquipped;

    void ServerInvokeRangedAttack(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange);
    void ServerInvokePrimaryAttack(FActivityStateChange ActivityStateChange);
    void ServerInvokeFrontalAOEAttack(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
    void MulticastRangedAttackTriggered();
};

struct FAdminCommandPlayerContext
{
    class UWorld* World;
    class ASimPlayerController* AdminSimController;
    FString AdminOnlineID;
    FString AdminPlayerName;

};

struct FAdminCommandHttpResponse
{
    FString Result;
    FString Message;
    FString ServerName;

};

struct FAdminCommandHttpResponseGroup
{
    TArray<FAdminCommandHttpResponse> ResponseList;
    FString AdminOnlineID;

};

struct FAdminCommandResult
{
    FString Result;
    FString Message;

};

struct FGlobalAdminCommandRequest
{
    TArray<FString> Params;
    FString TargetServerName;
    FString AdminOnlineID;

};

struct FAlert
{
};

struct FAmmoDynamicData : public FTableRowBase
{
    float Damage;
    float Suppression;
    float ExplosionRadius;
    TSubclassOf<class UDamageType> DamageType;
    float DamageInnerRadius;
    float DamageFalloff;
    float AccuracyRadius;
    int16 EnvironmentImpactAmount;
    float AddedBurning;
    float AddedHeat;

};

struct FAnalyticsPrototypeResult
{
    FName PrototypeCodeName;
    bool bPrototypeComplete;
    bool bPrototypeSucceeded;

};

struct FAnalyticsItem
{
    FString Name;
    int32 Quantity;

};

struct FAnalyticsItemList
{
    TArray<FAnalyticsItem> ItemList;

};

struct FAnalyticsReserveItemList
{
    FString StockpileName;
    FAnalyticsItemList ItemList;

};

struct FAnalyticsReserveItem
{
    FString StockpileName;
    FAnalyticsItem Item;

};

struct FAnalayticsReleaseReserveStockpileItemInfo
{
    FString StockpileName;
    FName CodeName;
    int32 QuantityReleased;
    int32 TotalQuantity;

};

struct FAnalyticsUnstuckInfo
{
    FVector NewLocation;
    int32 NumUnstuckCommandsUsed;

};

struct FAnalyticsVehicleWrenchUnlockedInfo
{
    FName VehicleCodeName;
    int16 SquadId;
    EFactionId FactionId;
    FString LastDriverOnlineID;

};

struct FAnalyticsFactoryOrderCompleteInfo
{
    TArray<FSpecializedFactoryOrderItem> OrderItems;
    EFactoryOrderAccess AccessLevel;
    int16 SquadId;

};

struct FAnalyticsModBanInfo
{
    FString AdminPlayerName;
    FString AdminOnlineID;
    float DurationMins;
    EBanReason BanReason;

};

struct FFriendlyFireStats
{
    int32 TeamKills;
    int32 CharacterDamage;
    int32 StructureDamage;
    int32 VehicleDamage;
    int32 NameChanges;

};

struct FAnalyticsPlayerRestrictedInfo
{
    FFriendlyFireStats FriendlyFireStats;
    FString RestrictionType;
    float DurationMins;
    bool bWasRestrictedByAdmin;

};

struct FAnalyticsTeamKillInfo
{
    FString DeadPlayerName;
    FString DeadPlayerOnlineID;
    FString TeamKillSource;

};

struct FAnalyticsWhisperInfo
{
    EChatLanguage ChatLanguage;
    FString TargetOnlineID;
    FString TargetPlayerName;
    FString Message;

};

struct FAnalyticsChatInfo
{
    EChatChannel ChatChannel;
    EChatLanguage ChatLanguage;
    FString Message;

};

struct FAnalyticsEvent
{
    FString WarId;
    EAnalyticsEventType EventType;
    int64 UnixTimeStamp;
    EAnalyticsAccessLevel AccessLevel;
    EWorldConquestMapId MapId;
    FString ServerName;
    float WorldPosX;
    float WorldPosY;
    float WorldPosZ;
    FString OnlineID;
    FString PlayerName;
    FString DeviceID;
    uint8 TeamId;
    FString JsonPayload;

};

struct FGetAnalyticsEventsResponse
{
    TArray<FAnalyticsEvent> EventList;

};

struct FGetAnalyticsEventsRequest
{
    FString WarId;
    EAnalyticsEventType EventType;

};

struct FPlayerVoteKickInfo
{
    FString OnlineID;
    FString PlayerName;
    FString DeviceID;
    int32 RegimentID;
    uint8 TeamId;
    EUserVoteKickCategory VoteKickCategory;
    TMap<EUserVoteKickCategory, int32> VoteKickCategoryCountMap;
    float RecentTeamKills;
    float RecentFriendlyCharacterDamage;
    float RecentFriendlyStructureDamage;
    float RecentFriendlyVehicleDamage;
    int16 RecentNameChanges;

};

struct FPlayerBan
{
    int32 ID;
    FString OnlineID;
    FString DeviceID;
    int64 BanLiftTimeUnix;
    EBanReason BanReason;
    int16 VoteKickCount;
    int64 LastVoteKickTime;
    int16 BanCount;
    int64 BanCountClearTime;

};

struct FArmourProfile : public FTableRowBase
{
    float SuppressionModifier;

};

struct FUObjectHandle
{
    int32 ObjectIndex;
    int32 ObjectSerialNumber;

};

struct FRPCBorderBaseClaimResponse
{
    FUObjectHandle ObjectHandle;
    EFactionId ClaimingFaction;
    uint8 Response;
    bool bIsUsable;
    bool bAllowClaimOverride;

};

struct FRPCBorderBaseClaimRequest
{
    FUObjectHandle ObjectHandle;
    EWorldConquestMapId OriginMapID;
    uint8 RoadID;
    EFactionId ClaimingFaction;

};

struct FShardStatusServerConnectionInfo
{
    FString currentMap;
    FString steamId;
    FString ipAddress;
    int32 Port;
    int32 BeaconPort;
    uint64 packedWarStatus;
    uint64 packedServerState;
    int16 colonialQueueSize;
    int16 wardenQueueSize;
    FString Name;
    FString Version;
    int32 serverType;
    int16 openColonialSlots;
    int16 openWardenSlots;

};

struct FShardStatus
{
    bool bShowColonialQueueWarning;
    bool bShowWardenQueueWarning;
    float NormalizedGlobalPopulation;
    TArray<FShardStatusServerConnectionInfo> serverConnectionInfoList;
    FString WarId;
    int32 SquadMaxSize;
    int32 SecondsToPreConquest;
    bool bIsPreConquest;
    bool bIsVIPMode;

};

struct FGlobalShardConfig
{
    int32 DefaultShardId;
    bool bEnableOverpopMode;
    bool bRedirectToShardSelector;
    int32 OverpopShardId;
    FString OverpopText;
    FString OverpopYesButton;
    FString OverpopNoButton;
    bool bEnableRandomHomeRegion;
    int32 DeployDelayMin;
    int32 DeployDelayMax;
    int32 PreConquestDeployDelayMin;
    int32 PreConquestDeployDelayMax;

};

struct FWarShardInfo
{
    FString ShardName;
    int32 ShardId;
    bool bEnabled;
    bool bEnableJoinEventsColonial;
    bool bEnableJoinEventsWarden;
    bool bEnableZombieButton;
    EQueueWarningState ColonialQueueWarning;
    EQueueWarningState WardenQueueWarning;
    FString WarServiceExternalURL;
    FString WarSupportURL;
    int32 TravelMapMinimumOpenSlots;
    int32 EnableJoinEventsQueueThreshold;
    EUprisingChanceType UprisingChanceType;
    FString EventMapName;
    FString EventServerPassword;
    float NormalizedGlobalPopulation;
    FString Description;

};

struct FWarClientConfig
{
    bool bDisableOneWorld;
    FGlobalShardConfig GlobalShardConfig;
    TArray<FWarShardInfo> AvailableShardList;
    TArray<FString> ConquestNews;

};

struct FCommsRatingChatVoteInfo
{
};

struct FRPCCrossRegionActorRequest
{
    EWorldConquestMapId RequestingServer;
    TArray<int32> Ids;

};

struct FCrossRegionActorData
{
    int32 ID;
    FVector2D OriginLocation;
    float OriginLocationZ;
    FRotator Rotation;
    TArray<uint8> Serialized;

};

struct FRPCCrossRegionChangelistBroadcast
{
    EWorldConquestMapId OriginServer;
    TArray<FCrossRegionActorData> NewActors;
    TArray<int32> RemovedActors;

};

struct FRPCCrossRegionActorBroadcast
{
    EWorldConquestMapId OriginServer;
    int64 InitTicks;
    TArray<int32> Ids;

};

struct FCrossRegionSerializedActor
{
    UClass* ActorClass;
    TArray<uint8> ActorBytes;

};

struct FDamageProfile : public FTableRowBase
{
    float LightVehicle;
    float Tier1Tank;
    float Tier2Tank;
    float Tier0Structure;
    float Tier1Structure;
    float Tier2Structure;
    float Tier2BStructure;
    float Tier3Structure;
    float HeavyBuildSite;
    float Tier1GarrisonHouse;
    float Tier2GarrisonHouse;
    float Tier3GarrisonHouse;
    float Trench;

};

struct FLogSquadMessage
{
    FString SenderName;
    FString SenderOnlineId;
    int8 SenderFactionId;
    int32 SquadId;
    FString SquadName;
    FString Text;

};

struct FLogRegimentMessage
{
    FString SenderName;
    FString SenderOnlineId;
    int8 SenderFactionId;
    int32 RegimentID;
    FString RegimentName;
    FString Text;

};

struct FLogWhisperMessage
{
    FString SenderName;
    FString SenderOnlineId;
    int8 SenderFactionId;
    FString RecipientName;
    FString RecipientOnlineID;
    FString Text;

};

struct FRPCFrontierBaseBuildRequest
{
    EWorldConquestMapId OriginMapID;
    EWorldConquestMapId TargetMapId;
    FVector BorderLocation;
    FUObjectHandle RequestingObject;
    EFactionId BuilderFactionId;

};

struct FRPCFrontierBaseBuildResponse
{
    FRPCFrontierBaseBuildRequest Request;
    bool bIsAllowedToBuild;

};

struct FFactionResourceState
{
    int32 AluminumAmount;
    int32 TargetAluminumAmount;
    int32 CopperAmount;
    int32 TargetCopperAmount;
    int32 IronAmount;
    int32 TargetIronAmount;

};

struct FGlobalResourceState
{
    FFactionResourceState Colonials;
    FFactionResourceState Wardens;

};

struct FRPCIntelCenterFireListeningAreaEvent
{
    FVector2D Location2D;
    EFactionId FactionId;
    float Radius;
    float Duration;

};

struct FGrenadeDynamicData : public FTableRowBase
{
    float MinTossSpeed;
    float MaxTossSpeed;
    float GrenadeFuseTimer;
    float GrenadeRangeLimit;

};

struct FMovementModifierForStanceData
{
    float TurnRateScale;
    float WalkingSpeedScale;

};

struct FMovementModifierData
{
    FMovementModifierForStanceData Stances;

};

struct FWeaponDynamicData : public FTableRowBase
{
    float SuppressionMultiplier;
    int32 MaxAmmo;
    float MaxApexHalfAngle;
    float BaselineApexHalfAngle;
    float StabilityCostPerShot;
    float Agility;
    float CoverProvided;
    float StabilityFloorFromMovement;
    float StabilityGainRate;
    int32 MaximumRange;
    int32 MaximumReachability;
    float DamageMultiplier;
    FMovementModifierData MovementData;
    float ArtilleryAccuracyMinDist;
    float ArtilleryAccuracyMaxDist;
    float MaxVehicleDeviationAngle;
    float AddedBurningMultiplier;

};

struct FItemDynamicData : public FTableRowBase
{
    TArray<FProductionResource> CostPerCrate;
    int32 QuantityPerCrate;
    float CrateProductionTime;
    float SingleRetrieveTime;
    float CrateRetrieveTime;
    int32 ResearchLevel;

};

struct FRPCLRAFireShellEvent
{
    FVector2D Location2D;
    EFactionId FactionId;
    ELongRangeArtilleryType ArtilleryType;

};

struct FMapIntelList
{
    int8 MapId;
    TArray<int64> PackedIntelItems;

};

struct FMapIntelResponse
{
    TArray<FMapIntelList> MapIntelLists;

};

struct FMapIntelRequest
{
};

struct FMapIntelUpdate
{
    int8 MapId;
    TArray<int64> PackedColonialIntelItems;
    TArray<int64> PackedWardenIntelItems;

};

struct FMapIntelHistoricSnapshot
{
};

struct FMapSnapshotRequest
{
};

struct FMapIntelLoSRequest
{
};

struct FLoSTraceHandle
{
};

struct FMapSnapshotDatum
{
    uint32 IntelCount;
    bool RequesterScouted;

};

struct FMapIntelligenceItem
{
    uint8 TeamId;
    EMapIntelligenceType Type;
    float TimeRemaining;
    FVector2D Location;
    FVector2D NormalizedMapLocation;
    bool bStructureWasAttackedRecently;
    uint8 ListeningTeamID;

};

struct FRPCMapItemResponse
{
    EWorldConquestMapId Origin;
    FUObjectHandle Requester;
    FUObjectHandle MapItem;
    FMapItemDetails MapItemDetails;

};

struct FRPCMapItemRequest
{
    EWorldConquestMapId Origin;
    EFactionId RequesterFactionID;
    FString RequesterOnlineID;
    FUObjectHandle Requester;
    FUObjectHandle MapItem;

};

struct FMapPostMember
{
    FString OnlineID;
    FString Name;

};

struct FMapPostEntry
{
    FMapPostMember Member;
    FString Text;
    int64 UnixTimeStamp;

};

struct FMapPostVote
{
    FString VoterOnlineID;
    EMapPostVoteType VoteType;

};

struct FMapPost
{
    FMapPostEntry OriginalEntry;
    TArray<FMapPostEntry> ReplyList;
    int8 MapId;
    FVector2D NormalizedMapCoords;
    EMapPostType MapPostType;
    int32 GroupId;
    TArray<FMapPostVote> VoteList;
    int32 Rank;
    float CommsRating;

};

struct FCreateDebugMapPostRequest
{
    FMapPost NewMapPost;

};

struct FDeleteMapPostResponse
{
    bool bSuccess;
    FString DeletedPostOwnerOnlineID;

};

struct FDeleteMapPostRequest
{
    FString OriginalPosterOnlineId;

};

struct FMapPostReplyResponse
{
    bool bSuccess;

};

struct FMapPostReplyRequest
{
    FString OriginalPosterOnlineId;
    FString ReplyText;

};

struct FMapPostVoteResponse
{
    bool bSuccess;

};

struct FMapPostVoteRequest
{
    FString OriginalPosterOnlineId;
    EMapPostVoteType VoteType;

};

struct FGetMapPostsResponse
{
    TArray<FMapPost> PostList;

};

struct FGetMapPostsRequest
{
    bool bIsModModeOn;

};

struct FCreateMapPostRequest
{
    FMapPost NewMapPost;
    bool bIsModModeOn;

};

struct FWarReport
{
    int32 TotalEnlistments;
    int32 ColonialCasualties;
    int32 WardenCasualties;
    int32 DayOfWar;
    int32 Version;

};

struct FModerationHelper
{
};

struct FLocalModerationInfo
{
    FString LastUsedSteamID;

};

struct FWarRecord
{
    uint8 ConquestWinner;
    int64 StartTime;
    TArray<float> ColonialWarAchievementProgressList;
    TArray<float> WardenWarAchievementProgressList;

};

struct FWarRecordList
{
    TArray<FWarRecord> WarRecordList;

};

struct FWeaponFiringConeInfo
{
    float MaxApexHalfAngle;
    float BaselineApexHalfAngle;
    float StabilityCostPerShot;
    float Agility;
    float StabilityFloorFromMovement;
    float StabilityGainRate;

};

struct FMountDynamicData : public FTableRowBase
{
    float SuppressionMultiplier;
    float MaxHorizontalDeviation;
    float MaxVerticalDeviation;
    float CoverProvided;
    FWeaponFiringConeInfo FiringConeInfo;
    float TrackingSpeed;
    float TrackingThreshold;
    int32 MaxAmmo;
    float MinDistance;
    float MaxDistance;
    float MaxReachability;
    int32 ScopeRadius;
    float MinYaw;
    float MaxYaw;
    float MinPitch;
    float MaxPitch;
    float FiringDuration;
    float ReloadDuration;
    float DamageMultiplier;
    float ArtilleryAccuracyMinDist;
    float ArtilleryAccuracyMaxDist;
    float AddedBurningMultiplier;

};

struct FInitialCharacterState
{
    TArray<FItemInstance> ItemInstances;

};

struct FGlobalShardProfile
{
    int32 XP;
    int16 CP;
    int8 CPToGive;
    int32 XPForCP;
    int8 Level;
    TArray<FCommendHistory> CommendHistories;

};

struct FLocalShardProfileSerialized
{
    TArray<uint8> GameServerProfileBytes;
    FString LastWarId;

};

struct FWarPlayerProfileSerialized
{
    FGlobalShardProfile GlobalShardProfile;
    FLocalShardProfileSerialized LocalShardProfileSerialized;

};

struct FGameServerProfile
{
    TMap<EUserVoteKickCategory, int32> VoteKickCategoryCountMap;
    FDateTime TimeOfLastVoteKickAgainstMe;
    int64 TimeOfLastVoteKick;
    FDateTime FirstMonthlyVoteKickTime;
    uint16 MonthlyVoteKickCount;
    FDateTime FirstDailyVoteKickTime;
    uint16 DailyVoteKickCount;
    FDateTime LastLogin;
    FString LastVersion;
    FDateTime LastFriendlyFire;
    float RecentTeamKills;
    float RecentFriendlyCharacterDamage;
    float RecentFriendlyStructureDamage;
    float RecentFriendlyVehicleDamage;
    int16 RecentNameChanges;
    uint8 RestrictedState;
    TArray<FDateTime> RestrictionClearTimes;
    FString PreviousPlayerName;
    FDateTime LastFreshLoginTime;
    int32 RecentLoginCount;
    FString UniqueDeviceID;
    FPlayerWarState PlayerWarState;
    FSavedCharacterInventory CharacterInventory;
    float Health;
    bool IsBleeding;
    uint8 PlayerFlags;
    bool bIsGodMode;
    int32 NumSelfServeFactionUnlocksUsed;
    FString OfflineCharacterServer;
    FDateTime OfflineCharacterCreationTime;
    float NormalizedStamina;
    EOutfitType OutfitType;
    FCharacterCustomizationInfo CharacterCustomizationInfo;
    FDateTime VoteKickImmunityTime;

};

struct FLocalShardProfile
{
    FGameServerProfile GameServerProfile;
    FString LastWarId;

};

struct FWarPlayerProfile
{
    FGlobalShardProfile GlobalShardProfile;
    FLocalShardProfile LocalShardProfile;

};

struct FDeviceIdBanRequest
{
    FString TargetDeviceId;
    int64 BanDurationSec;
    EBanReason BanReason;
    FString AdminOnlineID;
    FString AdminPlayerName;

};

struct FDeviceIdBannedMessage
{
    FDeviceIdBanRequest DeviceIdBanRequest;
    bool bIsSenderServer;

};

struct FModBanRequest
{
    FString TargetOnlineID;
    FString TargetPlayerName;
    FString TargetDeviceId;
    int8 TargetPlayerTeamId;
    int64 BanDurationSec;
    EBanReason BanReason;
    FString AdminOnlineID;
    FString AdminPlayerName;

};

struct FPlayerModBannedMessage
{
    FModBanRequest ModBanRequest;
    bool bIsSenderServer;

};

struct FVoteKickRequest
{
    FString InstigatorOnlineId;
    FString TargetOnlineID;
    FString PlayerName;
    FString DeviceID;
    int8 TeamId;
    float RecentTeamKills;
    float RecentFriendlyCharacterDamage;
    float RecentFriendlyStructureDamage;
    float RecentFriendlyVehicleDamage;
    int16 RecentNameChanges;

};

struct FPlayerVoteBannedMessage
{
    FVoteKickRequest VoteKickRequest;
    bool bIsSenderServer;
    int64 BanDurationSec;

};

struct FPutProfileRequest
{
    FString OnlineID;
    FWarPlayerProfileSerialized WarPlayerProfileSerialized;

};

struct FGetProfileResponse
{
    EGetProfileResponseCode ResponseCode;
    FWarPlayerProfileSerialized WarPlayerProfileSerializable;

};

struct FGetBanAndProfileResponse
{
    FPlayerBan PlayerBan;
    FGetProfileResponse ProfileResponse;

};

struct FGetBanAndProfileRequest
{
    FString OnlineID;
    FString DeviceID;

};

struct FGetProfileRequest
{
    FString OnlineID;

};

struct FGetBanResponse
{
    FPlayerBan PlayerBan;

};

struct FGetBanRequest
{
    FString OnlineID;
    FString DeviceID;

};

struct FConvertProfileResponse
{
    FString AdminOnlineID;
    FString TargetOnlineID;
    FPlayerBan PlayerBan;
    FWarPlayerProfileSerialized WarPlayerProfileSerialized;
    int32 ProfileCount;
    int32 NumTotalProfiles;
    int64 StartTime;

};

struct FConvertProfileRequest
{
    FString AdminOnlineID;
    FString TargetOnlineID;
    TArray<uint8> PlayerProfileBlob;
    int32 ProfileCount;
    int32 NumTotalProfiles;
    int64 StartTime;

};

struct FStartMigrateProfilesRequest
{
    FString AdminOnlineID;

};

struct FProfileMergeComplete
{
};

struct FMergeProfileResponse
{
    FString AdminOnlineID;
    FString OnlineID;
    TArray<uint8> MergedProfileBlob;
    int32 ProfileCount;
    int32 NumTotalProfiles;
    int64 StartTimeUnixTimeStamp;

};

struct FMergeProfileRequest
{
    FString AdminOnlineID;
    FString OnlineID;
    TArray<uint8> MergeDestProfileBlob;
    TArray<uint8> MergeSourceProfileBlob;
    int32 ProfileCount;
    int32 NumTotalProfiles;
    int64 StartTimeUnixTimeStamp;

};

struct FMergeProfilesStatusMessage
{
    FString AdminOnlineID;
    FString Message;

};

struct FStartMergeProfilesRequest
{
    FString AdminOnlineID;
    FString MergeDestDatabaseUrl;
    FString MergeSourceDatabaseUrl;

};

struct FRegimentPromptParams
{
    FText Name;
    FText Tag;
    FText Link;

};

struct FLogCreateRegimentRequest
{
    int32 RegimentID;
    FString RegimentName;
    FString RegimentTag;
    FString CreatorOnlineID;
    FString CreatorName;

};

struct FCheatRemoveFromRegimentRequest
{
    FUObjectHandle Admin;
    FString TargetOnlineID;

};

struct FCheatRemoveFromRegimentResponse
{
    FCheatRemoveFromRegimentRequest Request;
    bool bIsSuccess;

};

struct FCheatMakeRegimentCommanderRequest
{
    FUObjectHandle Admin;
    FString CurrentCommanderOnlineID;
    FString NewCommanderOnlineID;

};

struct FCheatMakeRegimentCommanderResponse
{
    FCheatMakeRegimentCommanderRequest Request;
    bool bIsSuccess;

};

struct FCheatViewRegimentInfoRequest
{
    FUObjectHandle Admin;
    int32 RegimentID;

};

struct FCheatViewRegimentInfoResponse
{
    FCheatViewRegimentInfoRequest Request;
    FString RegimentName;
    FString RegimentTag;
    FString Link;
    EFactionId FactionId;
    int32 Members;

};

struct FCheatDisbandRegimentRequest
{
    FUObjectHandle Admin;
    int32 RegimentID;

};

struct FCheatDisbandRegimentResponse
{
    FCheatDisbandRegimentRequest Request;
    FString RegimentName;
    FString RegimentTag;

};

struct FCheatEditRegimentRequest
{
    FUObjectHandle Admin;
    int32 RegimentID;
    FString Name;
    FString Tag;

};

struct FCheatEditRegimentResponse
{
    FCheatEditRegimentRequest Request;

};

struct FCheatGetRegimentInfoRequest
{
    FUObjectHandle Admin;
    ERegimentQueryType QueryType;
    FString QueryValue;

};

struct FCheatGetRegimentInfoResponse
{
    FCheatGetRegimentInfoRequest Request;
    TArray<FRegiment> RegimentList;

};

struct FRegimentNotificationMessage
{
    int32 RegimentID;
    ERegimentNotificationType Type;
    FString TargetOnlineID;
    FString TargetPlayerName;
    ERegimentRole NewRole;
    FString NewRegimentName;
    FString NewRegimentTag;

};

struct FRegimentEditMessage
{
    int32 RegimentID;
    FString Name;
    FString Tag;
    FString Link;

};

struct FRegimentChatMessage
{
    int32 RegimentID;
    FString SenderOnlineId;
    FString SenderName;
    FString Message;
    int8 ChatLanguage;

};

struct FRegimentChangeRoleMessage
{
    int32 RegimentID;
    FString TargetOnlineID;
    ERegimentRole DesiredTargetRole;

};

struct FDisbandRegimentMessage
{
    int32 RegimentID;

};

struct FRemoveMemberFromRegimentMessage
{
    int32 RegimentID;
    FString MemberToRemoveOnlineId;

};

struct FInviteToRegimentMessage
{
    int32 InviterRegimentId;
    FString TargetOnlineID;
    FString InviterOnlineId;
    FString InviterPlayerName;
    int8 InviterFactionId;
    FString RegimentName;

};

struct FAcceptInviteToRegimentMessage
{
    FInviteToRegimentMessage InviteToAccept;
    FString TargetPlayerName;

};

struct FModifiedRegimentMessage
{
    FRegiment ModifiedRegiment;

};

struct FBatchModifiedRegimentIdMessage
{
    int32 ID;
    int8 FactionId;
    TArray<FString> OnlineIdList;

};

struct FModifiedRegimentIdMessage
{
    int32 ID;
    int8 FactionId;
    FString OnlineID;

};

struct FCreateRegimentWarMessage
{
    FString Name;
    FString Tag;
    FString Link;
    int8 FactionId;

};

struct FRegionLog
{
};

struct FRPCRegionZoneResponse
{
    EWorldConquestMapId Origin;
    FUObjectHandle Requester;
    FRegionMinimalData Data;

};

struct FRPCRegionZoneRequest
{
    EWorldConquestMapId Origin;
    FUObjectHandle Requester;

};

struct FRPCRocketTravel
{
    EWorldConquestMapId Origin;
    FRocketLaunchCodeInfo Info;
    EFactionId FactionId;
    FVector_NetQuantize StrikeLocation;

};

struct FRPCRocketLaunchFail
{
    EWorldConquestMapId Origin;
    uint8 LaunchCodeID;
    EFactionId FactionId;

};

struct FRPCRocketLaunchCodeResponse
{
    EWorldConquestMapId Origin;
    uint8 LaunchCodeID;
    bool bHasStrikeLocation;
    FVector_NetQuantize StrikeLocation;
    FWarGridCoordinate Coordinate;

};

struct FRPCRocketLaunchCodeRequest
{
    EWorldConquestMapId Origin;
    EFactionId FactionId;
    uint8 LaunchCodeID;

};

struct FCachedPlayerState
{
    FString OnlineID;
    FString DeviceID;
    int32 RegimentID;
    int8 Level;
    int8 Rank;
    FString PlayerName;
    int8 TeamId;
    float RecentTeamKills;
    float RecentFriendlyCharacterDamage;
    float RecentFriendlyStructureDamage;
    float RecentFriendlyVehicleDamage;
    int16 RecentNameChanges;
    FDateTime TimeWhenCached;

};

struct FLogCreateSquadRequest
{
    int32 SquadId;
    FString SquadName;
    FString CreatorOnlineID;
    FString CreatorName;

};

struct FCheatViewSquadInfoResponse
{
    FUObjectHandle Admin;
    int32 SquadId;
    FString Name;
    FString LeaderOnlineID;
    FString LeaderName;
    int16 MemberCount;
    int16 InactiveMemberCount;

};

struct FCheatViewSquadInfoRequest
{
    FUObjectHandle Admin;
    int32 SquadId;

};

struct FCheatRemoveFromSquadRequest
{
    FString AdminOnlineID;
    FString TargetOnlineID;

};

struct FCheatRemoveFromSquadResponse
{
    FCheatRemoveFromSquadRequest CheatRemoveFromSquadRequest;
    TArray<int32> RemovedFromColonialSquadIds;
    TArray<int32> RemovedFromWardenSquadIds;

};

struct FCheatGetSquadInfoRequest
{
    FString AdminOnlineID;
    FString TargetOnlineID;

};

struct FCheatGetSquadInfoResponse
{
    FCheatGetSquadInfoRequest CheatGetSquadInfoRequest;
    int32 ExpectedSquadId;
    TArray<int32> ColonialSquadIds;
    TArray<int32> WardenSquadIds;

};

struct FSquadMember
{
    FString OnlineID;
    FString Name;

};

struct FSquadInviteInfo
{
    int32 SquadId;
    FString SquadName;
    FSquadMember LeaderMember;
    FString TargetOnlineID;
    int8 FactionId;

};

struct FSquad
{
    int32 SquadId;
    FString SquadName;
    int8 AccessLevel;
    FSquadMember Leader;
    TArray<FSquadMember> MemberList;
    TArray<FSquadMember> InactiveMemberList;

};

struct FActivateSquadWarMessage
{
    int32 SquadId;

};

struct FGetSquadsMessage
{
    TArray<FSquad> SquadList;

};

struct FSquadDeletedMessage
{
    int32 SquadId;

};

struct FSquadMessageMessage
{
    FString OnlineID;
    FString Name;
    FString Message;
    int32 SquadId;
    int8 Language;

};

struct FSquadMessageWarMessage
{
    FString Message;
    int8 Language;

};

struct FGetSquadInfoWarMessage
{
    FString OnlineID;
    int8 FactionId;

};

struct FClearSquadsConditionalWarMessage
{
    int32 MinAgeMinutes;
    int32 MaxHistoricalPlayers;

};

struct FToggleSquadPrivacyWarMessage
{
    int32 SquadId;

};

struct FReassignSquadLeaderWarMessage
{
    int32 SquadId;
    FString NewLeaderOnlineID;

};

struct FRenameSquadWarMessage
{
    int32 SquadId;
    FString NewName;

};

struct FRemoveFromSquadWarMessage
{
    int32 SquadId;
    FString LeaderOnlineID;
    FString TargetOnlineID;
    int8 FactionId;

};

struct FAcceptSquadInviteWarMessage
{
    FSquadInviteInfo SquadInviteInfo;
    FString NewMemberName;

};

struct FSquadInviteWarMessage
{
    FSquadInviteInfo SquadInviteInfo;

};

struct FJoinSquadWarMessage
{
    int32 SquadId;
    FSquadMember NewMember;
    int8 FactionId;

};

struct FAcceptJoinSquadWarMessage
{
    FJoinSquadWarMessage JoinMessage;
    FString LeaderOnlineID;
    int8 LeaderFactionId;

};

struct FJoinSquadRequestMessage
{
    FJoinSquadWarMessage JoinMessage;
    FString LeaderOnlineID;

};

struct FModifiedSquadMessage
{
    FSquad ModifiedSquad;

};

struct FModifiedSquadIdRecord
{
    int32 SquadId;
    bool bIsLeader;

};

struct FModifiedSquadIdMessage
{
    int8 FactionId;
    FString OnlineID;
    TArray<FModifiedSquadIdRecord> Records;

};

struct FCreateSquadWarMessage
{
    FString Name;
    int8 FactionId;

};

struct FStealthChecker
{
};

struct FSquadStorableCrate
{
    FName CodeName;
    int16 Quantity;

};

struct FStructureDynamicData : public FTableRowBase
{
    int32 MaxHealth;
    FResourceAmounts ResourceAmounts;
    FResourceAmounts AltResourceAmounts;
    float DecayStartHours;
    float DecayDurationHours;
    int32 RepairCost;
    float StructuralIntegrity;
    int32 StoredItemCapacity;
    int32 RamDamageReceivedFlags;
    bool bCanBeHarvested;
    bool IsVaultable;
    bool bIsDamagedWhileDrivingOver;

};

struct FCursorStyle
{
    FSlateBrush Brush;
    FVector2D Offset;

};

struct FTechResource
{
    EFactionId FactionId;
    ETechResourceID ID;
    int16 Amount;

};

struct FSavedVehicle
{
    FTransform Transform;
    UClass* ActorClass;
    TArray<uint8> Bytes;
    bool bFacingForward;
    int32 RailEntryTrackId;
    float RailEntryPackedAlpha;
    bool bRailIsTailFirst;

};

struct FVehicleDynamicData : public FTableRowBase
{
    FResourceAmounts ResourceAmounts;
    FResourceAmounts AltResourceAmounts;
    bool bHasTierUpgrades;
    FResourceAmounts UpgradeResourceAmounts;
    int32 MaxHealth;
    float MinorDamagePercent;
    float MajorDamagePercent;
    int32 RepairCost;
    int32 ResourcesPerBuildCycle;
    int32 ItemHolderCapacity;
    float FuelCapacity;
    float FuelConsumptionPerSecond;
    float SwimmingFuelConsumptionModifier;
    float DefaultSurfaceMovementRate;
    float OffroadSnowPenalty;
    float ReverseSpeedModifier;
    float RotationRate;
    float RotationSpeedCuttoff;
    float SpeedSqrThreshold;
    float EngineForce;
    float MassOverride;
    int32 TankArmour;
    float MinTankArmourPercent;
    float TankArmourMinPenetrationChance;
    float VehicleSubsystemDisableChances;

};

struct FViolationLog
{
};

struct FViolationEvent
{
    FString OnlineID;
    FString DeviceID;
    FString PlayerName;
    int64 Timestamp;
    EViolationLogType LogType;
    EBanReason Reason;
    double DurationMins;
    FString InstigatorOnlineId;
    float Rtk;
    float Rtd;
    float Rsd;
    float Rvd;
    int16 Rnc;
    FString Note;

};

struct FGetViolationsHttpResponse
{
    TArray<FViolationEvent> EventList;

};

struct FGetViolationsHttpRequest
{
    FString OnlineID;
    FString DeviceID;

};

struct FGetViolationsResponse
{
};

struct FGetViolationsRequest
{
};

struct FWarAchievements
{
};

struct FWarAchievementParamResponse
{
};

struct FWarAchievementTownNumbersResponse
{
};

struct FWarAPIRequestInfo
{
    FDateTime LastRequestTime;
    FString ETag;

};

struct FWarAPIWarReportSummary
{
    int32 DayOfWar;
    int32 ColonialCasualties;
    int32 WardenCasualties;

};

struct FWarBenchmarkAlgorithmBase : public FTickFunction
{
    TArray<class USimulatedClientNetConnection*> SimulatedConnections;
    TArray<class ASimPlayerController*> SimulatedControllers;

};

struct FVIPModeChangedMessage
{
    bool bIsVIPMode;

};

struct FServerTravelClientState
{
    EServerTravelStatusOnClient Status;
    EServerTravelOriginType OriginType;
    EWarServerType OriginServerType;
    bool bIsBorderTravel;

};

struct FWarMapUI
{
};

struct FWorldMapRegionStyle
{
    FVector2D Offset;
    FButtonStyle ButtonStyle;

};

struct FWarPropertyUtil
{
};

struct FGlobalAdminCommand
{
};

struct FPlayerRequestData
{
    FString OnlineID;
    FString Name;
    EFactionId FactionId;
    EWorldConquestMapId RegionId;
    uint8 Extras;

};

struct FShardConfig
{
    int32 PopulationCap;
    TArray<FString> EnabledRegions;
    FDateTime ScheduledConquestStartTime;

};

struct FSessionServerState
{
};

struct FSessionWarStatus
{
};

struct FAlertAllPlayersOnTeamRPCInfo
{
    FString AlertText;
    float Duration_Sec;
    uint8 TeamId;

};

struct FAlertAllPlayersRPCInfo
{
    FString AlertText;
    float Duration_Sec;

};

struct FAdminSteamInfo
{
    FString steamId;
    FString PlayerName;

};

struct FCachedWorldStructure
{
    TSubclassOf<class AStructure> StructureClass;
    FVector WorldPosition;

};

struct FVector2D_Byte
{
    int8 X;
    int8 Y;

};

struct FOutpostInfo
{
    int8 TeamId;
    FVector2D_NetQuantize Location;

};

struct FSecondaryHUDInfo
{
};

struct FIconInfo
{
};

struct FHUDInfo
{
};

struct FRay_NetQuantize
{
    FVector_NetQuantize Origin;
    FVector_NetQuantizeNormal Direction;

};

struct FWeatherManagerState
{
    FWorldWeatherState WorldState;
    TArray<FScheduledWeatherState> StateTimes;

};

#endif
