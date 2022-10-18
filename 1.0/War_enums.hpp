enum class ETechComponentID {
    None = 0,
    RifleGarrison = 1,
    MGGarrison = 2,
    ATGarrison = 3,
    HowitzerGarrison = 4,
    Concrete = 5,
    Deployment = 6,
    AdvancedBunkers = 7,
    CommandCenter = 8,
    ListeningPost = 9,
    Hospital = 10,
    ProvisionalGarrison = 11,
    SmallGarrison = 12,
    LargeGarrison = 13,
    Industry = 14,
    Fortifications = 15,
    ArtilleryShelter = 16,
    RadioStation = 17,
    OccupiedTown = 18,
    ObservationBunkers = 19,
    TechAvailable = 20,
    Count = 21,
    ETechComponentID_MAX = 22,
};

enum class EActionType {
    None = 0,
    Lock = 1,
    Unlock = 2,
    MakePrivate = 3,
    MakePrivateWithPrompt = 4,
    MakePublic = 5,
    Package = 6,
    Unpackage = 7,
    PackageShippable = 8,
    UnpackageShippable = 9,
    SetSpawn = 10,
    SubmitItemsToStockpile = 11,
    SubmitShippablesToStockpile = 12,
    SubmitStarterKit = 13,
    SubmitLargeItem = 14,
    SubmitVehicle = 15,
    BuildRocket = 16,
    EnterRocketCode = 17,
    ViewLog = 18,
    ViewRegionLog = 19,
    ViewTechTree = 20,
    StopRefueling = 21,
    ChangeFuel = 22,
    SubmitPatients = 23,
    SignPostEdit = 24,
    SignPostUpVote = 25,
    SignPostDownVote = 26,
    CreateReserveStockpile = 27,
    AccessReserveStockpile = 28,
    RefreshReserveStockpiles = 29,
    FullRepair = 30,
    RegimentLeave = 31,
    RegimentEdit = 32,
    RegimentLink = 33,
    RegimentDisband = 34,
    DetachModularMount = 35,
    Claim = 36,
    ClaimWithPrompt = 37,
    ClaimMulti = 38,
    ClaimRefresh = 39,
    ClaimRemove = 40,
    Demolish = 41,
    PackUp = 42,
    DisconnectAll = 43,
    FlagDisruptivePlacement = 44,
    DrainPipes = 45,
    EActionType_MAX = 46,
};

enum class ECommandTarget {
    LocalOnly = 0,
    Global = 1,
    GlobalSingleServer = 2,
    Invalid = 3,
    ECommandTarget_MAX = 4,
};

enum class ECommandParam {
    Bool = 0,
    Int = 1,
    Float = 2,
    String = 3,
    MultiwordString = 4,
    IntArray = 5,
    StringArray = 6,
    Enum = 7,
    ECommandParam_MAX = 8,
};

enum class ETurretTargetType {
    None = 0,
    Players = 1,
    AllVehicles = 2,
    WaterVehicles = 4,
    BuildSites = 8,
    EmplacedWeapons = 16,
    All = 31,
    ETurretTargetType_MAX = 32,
};

enum class EAnalyticsAccessLevel {
    Dev = 0,
    Mod = 1,
    Public = 2,
    EAnalyticsAccessLevel_MAX = 3,
};

enum class EAnalyticsEventType {
    PlayerLogin = 0,
    FriendlyPlayerKill = 1,
    VoteKick = 2,
    ModKick = 3,
    VoteBan = 4,
    ModBan = 5,
    PlayerRestricted = 6,
    ExcessFriendlyFire = 7,
    PlayerChat = 8,
    ModAdminCommand = 9,
    GameShare = 10,
    ServerInitialized = 11,
    VehicleBuilt = 12,
    FactoryOrderComplete = 13,
    VehicleWrenchUnlocked = 14,
    PlayerUnstuck = 15,
    StructureBuilt = 16,
    StructureDecayed = 17,
    RetrieveItemFromStockpile = 18,
    SubmitShippingContainer = 19,
    SubmitCrateStoragePublic = 20,
    SubmitVehicleStoragePublic = 21,
    PrototypeResult = 22,
    ReserveStockpileCreated = 23,
    ReserveStockpileReleased = 24,
    ReserveStockpileExpired = 25,
    ReserveStockpileItemReleased = 26,
    SubmitCrateStorageReserve = 27,
    SubmitVehicleStorageReserve = 28,
    Count = 29,
    EAnalyticsEventType_MAX = 30,
};

enum class EUserVoteKickCategory {
    TeamKilling = 0,
    TeamVehicleDamage = 1,
    TeamStructureDamage = 2,
    Cheating = 3,
    BadLanguage = 4,
    BadStructurePlacement = 5,
    IntelLeak = 6,
    SuspectedAltAccount = 7,
    Count = 8,
    EUserVoteKickCategory_MAX = 9,
};

enum class EBanReason {
    CommsMisuse = 0,
    Harrassment = 1,
    BadLanguage = 2,
    GriefTeam = 3,
    Cheating = 4,
    AbuseTools = 5,
    VoteKick = 6,
    UnderReview = 7,
    FactionUnlock = 8,
    IntelLeak = 9,
    SuspectedAltAccount = 10,
    Count = 11,
    EBanReason_MAX = 12,
};

enum class EArmourDirection {
    Default = 0,
    Front = 1,
    Back = 2,
    Left = 3,
    Right = 4,
    Turret = 5,
    Turret2 = 6,
    Turret3 = 7,
    Count = 8,
    EArmourDirection_MAX = 9,
};

enum class EArmourType {
    None = 0,
    NoArmour = 1,
    LightVehicle = 2,
    Tier1Tank = 3,
    Tier2Tank = 4,
    Tier0Structure = 5,
    Tier1Structure = 6,
    Tier2Structure = 7,
    Tier2BStructure = 8,
    Tier3Structure = 9,
    HeavyBuildSite = 10,
    Tier1GarrisonHouse = 11,
    Tier2GarrisonHouse = 12,
    Tier3GarrisonHouse = 13,
    Trench = 14,
    MAX = 15,
};

enum class ESpawnPointType {
    None = 0,
    Campsite = 1,
    Outpost = 2,
    FrontierBase = 3,
    TownHall = 4,
    Keep = 5,
    ForwardBase1 = 6,
    ForwardBase2 = 7,
    ForwardBase3 = 8,
    StaticBase1 = 9,
    StaticBase2 = 10,
    StaticBase3 = 11,
    Unused = 12,
    LandingShipBase = 13,
    Unknown = 14,
    BuildSite = 15,
    GarrisonStation = 16,
    Fort = 17,
    RelicBase = 18,
    BunkerBase = 19,
    BorderBase = 20,
    TownBase = 21,
    Count = 22,
    ESpawnPointType_MAX = 23,
};

enum class ESpawnPointCategory {
    None = 0,
    StaticBase = 1,
    ForwardBase = 2,
    Count = 3,
    ESpawnPointCategory_MAX = 4,
};

enum EBargeDockedState {
    Docked = 0,
    Docking = 1,
    Undocked = 2,
    Undocking = 3,
    EBargeDockedState_MAX = 4,
};

enum class EPlacementModificationInteraction {
    NoInteraction = 0,
    HidesModification = 1,
    BlocksPlacement = 2,
    EPlacementModificationInteraction_MAX = 3,
};

enum class EBuildCategory {
    Defense = 0,
    Bunker = 1,
    Default = 2,
    Facility = 3,
    Mining = 4,
    Power = 5,
    Foundation = 6,
    MAX = 7,
};

enum class ESnapType {
    None = 0,
    Socket = 1,
    Path = 2,
    ESnapType_MAX = 3,
};

enum class EConnectorConfigurationFlag {
    None = 0,
    OverridePathModeToBiarc = 1,
    EConnectorConfigurationFlag_MAX = 2,
};

enum class ESlopeRotationMode {
    OpposingSockets = 0,
    LocalSampling = 1,
    ManualControl = 2,
    ESlopeRotationMode_MAX = 3,
};

enum class EBuildSocketTagRule {
    AffectsBoth = 0,
    AffectsHigherZ = 1,
    AffectsLowerZ = 2,
    EBuildSocketTagRule_MAX = 3,
};

enum class EBuildSocketType {
    Sandbag = 0,
    Trench = 1,
    Fort = 2,
    FortFoundation = 3,
    FortModification = 4,
    EmplacementFoundation = 5,
    TrenchSide = 6,
    Tripod = 7,
    TripodMount = 8,
    Wall = 9,
    TrenchConnector = 10,
    Pipeline = 11,
    BarbedWire = 12,
    FieldBridge = 13,
    PipelineStructure = 14,
    RailwayTrack = 15,
    Foundation = 16,
    PowerLine = 17,
    PowerPole = 18,
    RailwayTrackPath = 19,
    PowerStructure = 20,
    RailwayTrackSmall = 21,
    RailwayTrackSmallPath = 22,
    RailwayTrackCrane = 23,
    PipelineValve = 24,
    CatwalkBridge = 25,
    CatwalkPlatform = 26,
    RailwayTrackCranePath = 27,
    PipelineOverhead = 28,
    BuildableRoad = 29,
    BuildableRoadPath = 30,
    EBuildSocketType_MAX = 31,
};

enum class ESocketDirection {
    None = 0,
    Front = 1,
    Left = 2,
    Back = 3,
    Right = 4,
    FrontLeft = 5,
    FrontRight = 6,
    BackLeft = 7,
    BackRight = 8,
    Rail = 9,
    ESocketDirection_MAX = 10,
};

enum class EWarCameraMode {
    Legacy = 0,
    Tactical = 1,
    EWarCameraMode_MAX = 2,
};

enum class EOutfitMeshInfoType {
    Invalid = 0,
    Default = 1,
    ColonialMale = 2,
    ColonialFemale = 3,
    ColonialMaleZombie = 4,
    ColonialFemaleZombie = 5,
    ColonialZombieSpitter = 6,
    ColonialZombieTank = 7,
    WardenMale = 8,
    WardenFemale = 9,
    WardenMaleZombie = 10,
    WardenFemaleZombie = 11,
    WardenZombieSpitter = 12,
    WardenZombieTank = 13,
    EOutfitMeshInfoType_MAX = 14,
};

enum class EOutfitType {
    Invalid = 0,
    Default = 1,
    Press = 2,
    Mod = 3,
    NumOutfits = 4,
    EOutfitType_MAX = 5,
};

enum class EChatMessageType {
    RegionTeam = 1,
    WorldTeam = 2,
    Logistics = 4,
    Intel = 8,
    LocalAll = 16,
    Squad = 32,
    Regiment = 64,
    Whisper = 128,
    Operation = 256,
    Zombie = 512,
    Admin = 1024,
    EChatMessageType_MAX = 1025,
};

enum class EChatChannel {
    Default = 0,
    RegionTeam = 1,
    WorldTeam = 2,
    Logistics = 3,
    Intel = 4,
    LocalAll = 5,
    Squad = 6,
    Regiment = 7,
    Whisper = 8,
    Admin = 9,
    MAX = 10,
};

enum class EClientConfigDownloadTaskState {
    NotStarted = 0,
    Completed = 1,
    InProgress = 2,
    EClientConfigDownloadTaskState_MAX = 3,
};

enum class EClientConfigDownloadStatusType {
    Success = 0,
    HttpRequestFailed = 1,
    HttpResponseCode = 2,
    JsonDeserializationFailed = 3,
    EmptyShardList = 4,
    EClientConfigDownloadStatusType_MAX = 5,
};

enum class EClientConfigURLType {
    Live = 0,
    Internal = 1,
    Iteration = 2,
    DevBranch = 3,
    EClientConfigURLType_MAX = 4,
};

enum class EUprisingChanceType {
    None = 0,
    ColonialLow = 1,
    ColonialHigh = 2,
    WardenLow = 3,
    WardenHigh = 4,
    EUprisingChanceType_MAX = 5,
};

enum class EQueueWarningState {
    Auto = 0,
    ForceShow = 1,
    ForceHide = 2,
    EQueueWarningState_MAX = 3,
};

enum class EClientFoliageReplacementState {
    Initial = 0,
    Damaged = 1,
    Destroyed = 2,
    EClientFoliageReplacementState_MAX = 3,
};

enum class EAssignCoalitionResponse {
    Error = 0,
    Success = 1,
    NotBuilder = 2,
    Num = 3,
    EAssignCoalitionResponse_MAX = 4,
};

enum class EFactionId {
    Colonials = 0,
    Wardens = 1,
    NumFactions = 2,
    NoTeam = 255,
    EFactionId_MAX = 256,
};

enum class ECommsRatingCondition {
    Good = 0,
    Poor = 1,
    VeryPoor = 2,
    ECommsRatingCondition_MAX = 3,
};

enum class EBuildLocationType {
    None = 0,
    Anywhere = 1,
    VehicleFactory = 2,
    Shipyard = 3,
    ConstructionYard = 4,
    TestShard = 5,
    RailTrackLarge = 6,
    RailTrackSmall = 7,
    RailTrackCrane = 8,
    EBuildLocationType_MAX = 9,
};

enum ECraneState {
    Inactive = 0,
    Destroyed = 1,
    DeployingWeights = 2,
    UndeployingWeights = 3,
    DeployedWeights = 4,
    PickingUp = 5,
    DroppingOff = 6,
    ResettingToDeployed = 7,
    ECraneState_MAX = 8,
};

enum class EDamageType {
    None = 0,
    LightKinetic = 1,
    HeavyKinetic = 2,
    AntiTankKinetic = 3,
    AntiTankExplosive = 4,
    ArmourPiercing = 5,
    Explosive = 6,
    HighExplosive = 7,
    Demolition = 8,
    Karate = 9,
    Shrapnel = 10,
    TankZombie = 11,
    PoisonGas = 12,
    Environment = 13,
    GroundZero = 14,
    Decay = 15,
    Incendiary = 16,
    IncendiaryHighExplosive = 17,
    Fire = 18,
    MAX = 19,
};

enum class ETankArmourEffectType {
    None = 0,
    Small = 1,
    Large = 2,
    ETankArmourEffectType_MAX = 3,
};

enum class EPackUpResponse {
    Success = 0,
    Error = 1,
    InUse = 2,
    InventoryMustBeEmpty = 3,
    MustBeRepaired = 4,
    EPackUpResponse_MAX = 5,
};

enum class EAWSLogEnableStatus {
    Live = 0,
    Dev = 1,
    Off = 2,
    EAWSLogEnableStatus_MAX = 3,
};

enum class EDiscordEnableStatus {
    PostToFOD = 0,
    PostToTestServer = 1,
    Off = 2,
    EDiscordEnableStatus_MAX = 3,
};

enum class ELogChannel {
    WarServer = 0,
    WarBans = 1,
    WarLogins = 2,
    WarGameShare = 3,
    WarTeamKills = 4,
    WarMisc = 5,
    WarVerify = 6,
    WarCreate = 7,
    WarChat = 8,
    ELogChannel_MAX = 9,
};

enum EBridgeState {
    Closed = 0,
    Closing = 1,
    Opening = 2,
    Open = 3,
    EBridgeState_MAX = 4,
};

enum EBridgeSide {
    None = 0,
    A = 1,
    B = 2,
    Bottom = 3,
    EBridgeSide_MAX = 4,
};

enum class EWindowState {
    Built = 0,
    Disconnected = 1,
    Starved = 2,
    MAX = 3,
};

enum class EDynamicTier {
    Default = 0,
    One = 1,
    Two = 2,
    Three = 3,
    MAX = 4,
};

enum class EWSExternalConnectionErrorType {
    ConnectionFailed = 0,
    AuthenticationFailed = 1,
    EWSExternalConnectionErrorType_MAX = 2,
};

enum class EFacilityRefineryState {
    Idle = 0,
    Active = 1,
    Finished = 2,
    EFacilityRefineryState_MAX = 3,
};

enum class EFireIntensity {
    None = 0,
    Low = 1,
    High = 2,
    Blazing = 3,
    Blazing2 = 4,
    MAX = 5,
};

enum class EInfrastructureType {
    None = 0,
    Garrison = 1,
    Command = 2,
    Base = 3,
    Town = 4,
    GarrisonStation = 5,
    Count = 6,
    EInfrastructureType_MAX = 7,
};

enum class EFortModificationType {
    Default = 0,
    Door = 1,
    FiringPort = 2,
    BarbedWire = 3,
    Bridge = 4,
    Pipes = 5,
    BunkBed = 6,
    Lockers = 7,
    Kitchen = 8,
    Pantry = 9,
    DishWashStation = 10,
    Stove = 11,
    Latrine = 12,
    StrategicMap = 13,
    RadioStation = 14,
    Desk = 15,
    Chalkboard = 16,
    Module = 17,
    Stairs = 18,
    Sandbags = 19,
    Ladder = 20,
    TrenchRoof = 21,
    InteriorFiringPort = 22,
    RocketFactory = 23,
    LargeShellFactory = 24,
    ToolShed = 25,
    SpecializedEquipment = 26,
    PipeFabricator = 27,
    Petrol = 28,
    Fracker = 29,
    Excavator = 30,
    MaterialsSorter = 31,
    Electric = 32,
    SulfuricReactor = 33,
    IndustrialTurbines = 34,
    SteamTurbine = 35,
    Forge = 36,
    MetalPress = 37,
    Smelter = 38,
    BlastFurnace = 39,
    EngineeringStation = 40,
    Recycler = 41,
    CokeFurnace = 42,
    CoalLiquefier = 43,
    AdvCoalLiquefier = 44,
    Reformer = 45,
    CrackingUnit = 46,
    PetrochemicalPlant = 47,
    MotorPool = 48,
    ArtilleryFactory = 49,
    LightVehicleAssembly = 50,
    TankAssembly = 51,
    WeaponsPlatformAssembly = 52,
    TrainAssembly = 53,
    HeavyTankAssembly = 54,
    MachiningStation = 55,
    AdvMachiningStation = 56,
    Light = 57,
    Count = 58,
    None = 59,
    EFortModificationType_MAX = 60,
};

enum class EFortTier {
    None = 0,
    T1 = 1,
    T2 = 2,
    T3 = 3,
    T3AI = 4,
    Count = 5,
    EFortTier_MAX = 6,
};

enum class EGateState {
    Closed = 0,
    OpenForward = 1,
    OpenBackward = 2,
    FullyOpenForward = 3,
    FullyOpenBackward = 4,
    EGateState_MAX = 5,
};

enum EGunboatTurret {
    Machinegun = 1,
    Artillery = 2,
    EGunboatTurret_MAX = 3,
};

enum class EHexDirection {
    North = 0,
    NorthEast = 1,
    SouthEast = 2,
    South = 3,
    SouthWest = 4,
    NorthWest = 5,
    Num = 6,
    EHexDirection_MAX = 7,
};

enum class ESubmitPatientsResponse {
    Success = 0,
    AtCapacity = 1,
    NoCriticalSoldiersInInventory = 2,
    Error = 3,
    ESubmitPatientsResponse_MAX = 4,
};

enum class EInteractiveObjectType {
    ItemPickup = 0,
    LargeItemPickup = 1,
    BuildableStructure = 2,
    DestroyedStructure = 3,
    StructureBuildSite = 4,
    Vehicle = 5,
    UseComponent = 6,
    TravelBorder = 7,
    Ladder = 8,
    Character = 9,
    Invalid = 10,
    EInteractiveObjectType_MAX = 11,
};

enum class ECoverMitigationType {
    Default = 0,
    Assault = 1,
    Carbine = 2,
    Rifle = 3,
    Sniper = 4,
    ECoverMitigationType_MAX = 5,
};

enum class EItemProfileType {
    Invalid = 0,
    RawResource = 1,
    UnstackableRawResource = 2,
    RefinedResourceFastRetrieve = 3,
    RefinedResource = 4,
    OnSiteResources = 5,
    RefinedFuel = 6,
    Throwable = 7,
    HandheldWeapon = 8,
    LightAmmo = 9,
    HeavyAmmo = 10,
    LargeItemAmmo = 11,
    Supplies = 12,
    Accessory = 13,
    Tool = 14,
    StackableTool = 15,
    UniqueItem = 16,
    Uniform = 17,
    LargeResource = 18,
    LiquidAmmo = 19,
    Count = 20,
    EItemProfileType_MAX = 21,
};

enum class EAccessItemHolderResponse {
    Success = 0,
    OwnerPendingTravel = 1,
    ZombiesRestricted = 2,
    VehicleLocked = 3,
    EnemyTeamStrucuture = 4,
    OutOfRange = 5,
    SquadLocked = 6,
    Error = 7,
    EAccessItemHolderResponse_MAX = 8,
};

enum class EItemFlags {
    None = 0,
    Default = 1,
    BasicMaterial = 2,
    GasMaskFilter = 4,
    Grenade = 8,
    HeavyAmmo = 16,
    HeavyWeapon = 32,
    KineticAmmo = 64,
    KineticWeapon = 128,
    Material = 256,
    MedicalAmmo = 512,
    MedicalKit = 1024,
    RawResource = 2048,
    LightKineticAmmo = 4096,
    PistolAmmo = 8192,
    LightExplosiveAmmo = 16384,
    EItemFlags_MAX = 16385,
};

enum class EItemCategory {
    Misc = 0,
    SmallArms = 1,
    HeavyArms = 2,
    HeavyAmmo = 3,
    Utility = 4,
    Medical = 5,
    Supplies = 6,
    Uniforms = 7,
    EItemCategory_MAX = 8,
};

enum class EInventoryType {
    Default = 0,
    Player = 1,
    Ambulance = 2,
    Hospital = 3,
    EInventoryType_MAX = 4,
};

enum class ELongRangeArtilleryType {
    Static = 0,
    Train = 1,
    ELongRangeArtilleryType_MAX = 2,
};

enum class EMapExtentMarkerLocation {
    TopLeft = 0,
    BottomRight = 1,
    EMapExtentMarkerLocation_MAX = 2,
};

enum class EMapIntelligenceType {
    None = 0,
    Soldier = 1,
    Vehicle = 2,
    Defense = 3,
    Howitzer = 4,
    Outpost = 5,
    Watchtower = 6,
    InactiveWatchtower = 7,
    FieldHospital = 8,
    GarrisonStation = 9,
    Zombie = 10,
    ObservationBunkerT2 = 11,
    ObservationBunkerT3 = 12,
    Facility = 13,
    NumTypes = 14,
    EMapIntelligenceType_MAX = 15,
};

enum EMapSnapshotSource {
    PlayerSource = 0,
    AISource = 1,
    EMapSnapshotSource_MAX = 2,
};

enum class EMapPostRank {
    High = 0,
    Low = 1,
    EMapPostRank_MAX = 2,
};

enum class EMapPostCreationResponse {
    Success = 0,
    RankTooLow = 1,
    AlreadyExists = 2,
    TooSoon = 3,
    InvalidRegionForMapPost = 4,
    Error = 5,
    EMapPostCreationResponse_MAX = 6,
};

enum class EMapPostType {
    Public = 0,
    Squad = 1,
    Regiment = 2,
    Count = 3,
    EMapPostType_MAX = 4,
};

enum class EMapPostVoteType {
    None = 0,
    Up = 1,
    Down = 2,
    EMapPostVoteType_MAX = 3,
};

enum class EMapMarkerType {
    Major = 0,
    Minor = 1,
    EMapMarkerType_MAX = 2,
};

enum class EMapItemFlags {
    IsTownBase = 1,
    IsHomeTown = 2,
    IsBuildSite = 4,
    IsDetectionAreaHidden = 8,
    IsScorched = 16,
    IsTownClaimed = 32,
    EMapItemFlags_MAX = 33,
};

enum class EMapTeamId {
    Colonial = 0,
    Warden = 1,
    None = 2,
    Count = 3,
    EMapTeamId_MAX = 4,
};

enum class EMapIconType {
    None = 0,
    HomeTown = 1,
    TownHall = 2,
    Outpost = 3,
    PortBase = 4,
    StaticBase1 = 5,
    StaticBase2 = 6,
    StaticBase3 = 7,
    ForwardBase1 = 8,
    ForwardBase2 = 9,
    ForwardBase3 = 10,
    Hospital = 11,
    VehicleFactory = 12,
    Armory = 13,
    SupplyStation = 14,
    Workshop = 15,
    ManufacturingPlant = 16,
    Refinery = 17,
    Shipyard = 18,
    TechCenter = 19,
    SalvageField = 20,
    ComponentField = 21,
    FuelField = 22,
    SulfurField = 23,
    WorldMapTent = 24,
    TravelTent = 25,
    TrainingArea = 26,
    SpecialBase = 27,
    ObservationTower = 28,
    Fort = 29,
    TroopShip = 30,
    ScrapMine = 31,
    SulfurMine = 32,
    StorageFacility = 33,
    Factory = 34,
    GarrisonStation = 35,
    AmmoFactory = 36,
    RocketSite = 37,
    SalvageMine = 38,
    ConstructionYard = 39,
    ComponentMine = 40,
    OilWell = 41,
    OperationStorageFacility = 42,
    FrontierBase = 43,
    CursedFort = 44,
    RelicBase1 = 45,
    RelicBase2 = 46,
    RelicBase3 = 47,
    FortBase1 = 48,
    FortBase2 = 49,
    FortBase3 = 50,
    MassProductionFactory = 51,
    Seaport = 52,
    CoastalGun = 53,
    SoulFactory = 54,
    BorderBase = 55,
    TownBase1 = 56,
    TownBase2 = 57,
    TownBase3 = 58,
    LRArtillery = 59,
    IntelCenter = 60,
    CoalField = 61,
    OilField = 62,
    Count = 63,
    EMapIconType_MAX = 64,
};

enum class EMonumentType {
    None = 0,
    Bronze = 1,
    Silver = 2,
    Gold = 3,
    Platinum = 4,
    NumMonumentTypes = 5,
    EMonumentType_MAX = 6,
};

enum class EOccupyResult {
    Occupied = 0,
    Vacated = 1,
    Failed = 2,
    EOccupyResult_MAX = 3,
};

enum class EOpenVehicleInventoryResponse {
    Success = 0,
    Locked = 1,
    EOpenVehicleInventoryResponse_MAX = 2,
};

enum class ECustomMovementMode {
    MOVE_Custom_None = 0,
    MOVE_Custom_LadderClimbing = 1,
    MOVE_Custom_WoundedCarried = 2,
    MOVE_Custom_MAX = 3,
};

enum class EGetProfileResponseCode {
    Success = 0,
    NoProfile = 1,
    Error = 2,
    EGetProfileResponseCode_MAX = 3,
};

enum class EItemSortMethod {
    Default = 0,
    CodeName = 1,
    EItemSortMethod_MAX = 2,
};

enum class EProjectileFiringMode {
    Default = 0,
    Grenade = 1,
    ShortToss = 2,
    EProjectileFiringMode_MAX = 3,
};

enum class ETransmitResponse {
    Success = 0,
    Error = 1,
    InStructure = 2,
    InVehicle = 3,
    InvalidMovementBase = 4,
    InvalidStance = 5,
    OutOfRange = 6,
    NoEnemyStructures = 7,
    FriendlyStaticBase = 8,
    BlockedFromAbove = 9,
    ETransmitResponse_MAX = 10,
};

enum class ETrackGauge {
    Large = 0,
    Small = 1,
    Crane = 2,
    ETrackGauge_MAX = 3,
};

enum class ERamDamageFlags {
    Light = 1,
    Medium = 2,
    Destructible = 4,
    DrivenOver = 8,
    DrivenOverTracked = 16,
    WaterVehicles = 32,
    ERamDamageFlags_MAX = 33,
};

enum class ERefineryClaimType {
    Single = 0,
    Multiple = 1,
    Crate = 2,
    ToRefineryInventory = 3,
    ERefineryClaimType_MAX = 4,
};

enum class ERefinementOrderResponse {
    Success = 0,
    Error = 1,
    NotEnoughMaterials = 2,
    InventoryFull = 3,
    NotEnoughToCrate = 4,
    AtRefinedItemCap = 5,
    UnsupportedItem = 6,
    ERefinementOrderResponse_MAX = 7,
};

enum class ERefineryOrderAccessLevel {
    Personal = 0,
    Public = 1,
    Count = 2,
    ERefineryOrderAccessLevel_MAX = 3,
};

enum class ERegimentCreationResponse {
    Success = 0,
    AlreadyInRegiment = 1,
    RankTooLow = 2,
    TooSoon = 3,
    Error = 4,
    ERegimentCreationResponse_MAX = 5,
};

enum class ERegimentRole {
    Commander = 0,
    Officer = 1,
    Member = 2,
    ERegimentRole_MAX = 3,
};

enum class ERegimentQueryType {
    PlayerOnlineId = 0,
    RegimentName = 1,
    RegimentTag = 2,
    RegimentId = 3,
    ERegimentQueryType_MAX = 4,
};

enum class ERegimentNotificationType {
    MemberAdded = 0,
    MemberRemoved = 1,
    Disbanded = 2,
    MemberRoleChanged = 3,
    Rename = 4,
    ERegimentNotificationType_MAX = 5,
};

enum class ERegionLogEntryType {
    None = 0,
    FriendlyPlayerDamage = 1,
    FriendlyDamage = 2,
    VehiclesTransferred = 3,
    VehicleSelfDamage = 4,
    DisruptivePlacement = 5,
    Count = 6,
    ERegionLogEntryType_MAX = 7,
};

enum class EReserveStockpileUserRole {
    Owner = 0,
    UserWithAccess = 1,
    ExternalUser = 2,
    NotVisible = 3,
    EReserveStockpileUserRole_MAX = 4,
};

enum class EReserveStockpileAccessLevel {
    Visible = 0,
    Hidden = 1,
    EReserveStockpileAccessLevel_MAX = 2,
};

enum class ERestrictedState {
    None = 0,
    WeaponUsage = 1,
    Build = 2,
    Chat = 4,
    Voice = 8,
    Intel = 16,
    ERestrictedState_MAX = 17,
};

enum class ERocketLaunchSequence {
    Idle = 0,
    Verifying = 1,
    PreLaunch = 2,
    Launching = 3,
    InFlight = 4,
    InDescent = 5,
    Incomplete = 6,
    Complete = 7,
    HitStrikeLocation = 8,
    ERocketLaunchSequence_MAX = 9,
};

enum class ERocketConsoleActionResult {
    Success = 0,
    Error = 1,
    Failure = 2,
    InWrongSquad = 3,
    NotInSquad = 4,
    NotEnoughSquadMembers = 5,
    InvalidCode = 6,
    InvalidFormat = 7,
    CodeMismatch = 8,
    NotEnoughFuel = 9,
    ERocketConsoleActionResult_MAX = 10,
};

enum class EShippableType {
    None = 0,
    Small = 1,
    Normal = 2,
    Large = 3,
    ExtraLarge = 4,
    EShippableType_MAX = 5,
};

enum class EShippableStatus {
    Success = 0,
    Error = 1,
    NoShippable = 2,
    NotShippable = 3,
    RepairNeeded = 4,
    ArmourNeeded = 5,
    CargoInside = 6,
    OccupantsInside = 7,
    MustBePackaged = 8,
    MustBeStanding = 9,
    MustBeUnlocked = 10,
    MustBeInSquad = 11,
    CantPackageCargo = 12,
    CantBeTravelling = 13,
    TargetCantBeTravelling = 14,
    InventoryMustBeEmpty = 15,
    VehicleInventoryMustBeEmpty = 16,
    TooClose = 17,
    TooFar = 18,
    AttachmentTooFar = 19,
    PulleyTooFar = 20,
    InvalidPlacement = 21,
    CantPlaceInWater = 22,
    OnUnstableGround = 23,
    OnUnstableVehicle = 24,
    CannotDeploy = 25,
    CannotUndeploy = 26,
    Frozen = 27,
    MustDetachWeapon = 28,
    MustDetachFromTrain = 29,
    Reserved = 30,
    ReservedExit = 31,
    NoPower = 32,
    Unsupported = 33,
    UnsupportedRequest = 34,
    UnsupportedSize = 35,
    UnsupportedType = 36,
    UnsupportedCodeName = 37,
    InvalidState = 38,
    NoShippables = 39,
    MaxShippables = 40,
    ObstructedByPackager = 41,
    ObstructedByOther = 42,
    EShippableStatus_MAX = 43,
};

enum class EActivityStateDebugTraceType {
    None = 0,
    Start = 1,
    Finished = 2,
    StartFail = 3,
    StartRewound = 4,
    Correction = 5,
    Dropped = 6,
    Ack = 7,
    Interrupt = 8,
    EActivityStateDebugTraceType_MAX = 9,
};

enum class EDeployResponse {
    Success = 0,
    RampBlocked = 1,
    ShorelineOnly = 2,
    ShorelineAndDockOnly = 3,
    TooCloseToTroopShip = 4,
    TooCloseToBorder = 5,
    EDeployResponse_MAX = 6,
};

enum class EKickFromCoalitionResponse {
    Success = 0,
    IsOfficer = 1,
    NotFound = 2,
    NumTypes = 3,
    EKickFromCoalitionResponse_MAX = 4,
};

enum class ECreateCoalitionResponse {
    Success = 0,
    LimitReached = 1,
    RankTooLow = 2,
    ZombieNotAllowed = 3,
    NumTypes = 4,
    ECreateCoalitionResponse_MAX = 5,
};

enum class ESimScreen {
    HUD = 0,
    Pause = 1,
    Wait = 2,
    End = 3,
    Options = 4,
    Keyboard = 5,
    Graphics = 6,
    ChatOptions = 7,
    Players = 8,
    Tutorial = 9,
    JoinWar = 10,
    ProfileUpdating = 11,
    Callouts = 12,
    Monument = 13,
    AudioOptions = 14,
    Inventory = 15,
    Factory = 16,
    StorageBox = 17,
    Refinery = 18,
    BuildFromStructure = 19,
    Base = 20,
    Lore = 21,
    Build = 22,
    VehicleStorage = 23,
    Map = 24,
    ItemStash = 25,
    StaticArtillery = 26,
    TechTree = 27,
    StorageFacility = 28,
    GarrisonHouse = 29,
    EmplacementHouse = 30,
    RocketSite = 31,
    ResourceMine = 32,
    ShippingContainer = 33,
    Log = 34,
    Hospital = 35,
    StructureUpgrade = 36,
    ConcreteMixer = 37,
    LongRangeArtillery = 38,
    SignPost = 39,
    Crate = 40,
    EngineeringCenter = 41,
    EmplacedStructure = 42,
    ViolationLog = 43,
    CharacterCustomization = 44,
    SimpleStockpile = 45,
    FirePit = 46,
    IntelCenter = 47,
    None = 48,
    DialogPrompt = 49,
    ReportPlayer = 50,
    ActivityLog = 51,
    RegionLog = 52,
    FuelSilo = 53,
    OilRefinery = 54,
    AssemblyStation = 55,
    Facility = 56,
    NumTypes = 57,
    ESimScreen_MAX = 58,
};

enum class EWheelTrace {
    FrontLeft = 0,
    FrontRight = 1,
    BackLeft = 2,
    BackRight = 3,
    Count = 4,
    EWheelTrace_MAX = 5,
};

enum class EServerAnimTickMode {
    Custom = 0,
    TickWhenOccupied = 1,
    NeverTicks = 2,
    EServerAnimTickMode_MAX = 3,
};

enum class EVehicleBuildType {
    NotBuildable = 0,
    BuildableAnywhere = 1,
    VehicleFactory = 2,
    Shipyard = 3,
    RailTrackLarge = 4,
    RailTrackSmall = 5,
    RailTrackCrane = 6,
    EVehicleBuildType_MAX = 7,
};

enum class ESpawnPointPriority {
    High = 0,
    Low = 1,
    ESpawnPointPriority_MAX = 2,
};

enum class EFactoryReadyOrdersPickupStatus {
    CanBePickedUp = 0,
    TransferLocationBlocked = 1,
    NumTypes = 2,
    EFactoryReadyOrdersPickupStatus_MAX = 3,
};

enum class EFactoryOrderStatus {
    NoOrder = 0,
    Pending = 1,
    ReadyPickup = 2,
    NumTypes = 3,
    EFactoryOrderStatus_MAX = 4,
};

enum class EFactoryOrderAccess {
    Personal = 0,
    Squad = 1,
    Public = 2,
    Count = 3,
    EFactoryOrderAccess_MAX = 4,
};

enum class EFactoryQueueType {
    None = 0,
    SmallArms = 1,
    HeavyArms = 2,
    HeavyAmmo = 3,
    Utility = 4,
    Medical = 5,
    Supplies = 6,
    Resources = 7,
    Uniforms = 8,
    Vehicles = 9,
    Structures = 10,
    Count = 11,
    EFactoryQueueType_MAX = 12,
};

enum class ESplineFootprintShapeType {
    Box = 0,
    Capsule = 1,
    CapsuleWithBoxEnds = 2,
    ESplineFootprintShapeType_MAX = 3,
};

enum class EConnectorPathMode {
    Spline = 0,
    Arc = 1,
    Biarc = 2,
    EConnectorPathMode_MAX = 3,
};

enum class ESplineConnectorMeshMode {
    Spline = 0,
    Interval = 1,
    Points = 2,
    Endpoints = 3,
    Boxes = 4,
    ESplineConnectorMeshMode_MAX = 5,
};

enum class ESquadRole {
    Leader = 0,
    Member = 1,
    NotInSquad = 2,
    ESquadRole_MAX = 3,
};

enum class ESquadActivationResponse {
    Success = 0,
    TooSoon = 1,
    Error = 2,
    ESquadActivationResponse_MAX = 3,
};

enum class ESquadEditMembersResponse {
    Success = 0,
    IsPrivate = 1,
    SquadNotFound = 2,
    SquadLimitReached = 3,
    SizeLimitReached = 4,
    TooSoon = 5,
    AlreadyInSquad = 6,
    Error = 7,
    ESquadEditMembersResponse_MAX = 8,
};

enum class ESquadCreationResponse {
    Success = 0,
    SquadLimitReached = 1,
    TooSoon = 2,
    Error = 3,
    ESquadCreationResponse_MAX = 4,
};

enum class ESquadAccessLevel {
    Private = 0,
    Public = 1,
    ESquadAccessLevel_MAX = 2,
};

enum class ERegimentPromptMode {
    Create = 0,
    Edit = 1,
    ERegimentPromptMode_MAX = 2,
};

enum class EVehicleStockpileResponse {
    Success = 0,
    Error = 1,
    NotStockpilable = 2,
    WaterVehicleNotStockpilable = 3,
    RepairNeeded = 4,
    OccupantsInside = 5,
    MustBeUnlocked = 6,
    CargoMustBeEmpty = 7,
    InventoryMustBeEmpty = 8,
    StockpileMustBeEmpty = 9,
    Frozen = 10,
    ArmourNeeded = 11,
    WeaponMountMustBeEmpty = 12,
    DoorBlocked = 13,
    MustBeTierOne = 14,
    EVehicleStockpileResponse_MAX = 15,
};

enum class EStockpileType {
    Public = 0,
    Squad = 1,
    EStockpileType_MAX = 2,
};

enum class ETransactionResponse {
    Success = 0,
    Error = 1,
    None = 2,
    DrivewayBlocked = 3,
    TroopShipLocked = 4,
    InvalidStance = 5,
    UnableToRetrieve = 6,
    TooFewSupplies = 7,
    CantRetrieveSupplies = 8,
    InsufficientQuantity = 9,
    AtQuantityLimit = 10,
    AtTotalQuantityLimit = 11,
    AtTypeLimit = 12,
    UnsupportedType = 13,
    CantRetrieveHoldingLargeItem = 14,
    MustBeUnpackaged = 15,
    NotReservable = 16,
    NotStockpilable = 17,
    EmptySource = 18,
    StockpileNotFound = 19,
    MustBeOwner = 20,
    IncorrectPassCode = 21,
    PassCodeAttemptCooldownUnavailable = 22,
    NoRetrievePermission = 23,
    DuplicateName = 24,
    QueueFull = 25,
    OrderExists = 26,
    NotEnoughMaterials = 27,
    NotEnoughFuel = 28,
    NotEnoughBlueprints = 29,
    UnsupportedItem = 30,
    InventoryFull = 31,
    TechRequired = 32,
    InvalidAccessLevel = 33,
    OrderTooSmallForMassProduction = 34,
    IncompatibleMassProducedItem = 35,
    PrototypeRequired = 36,
    CannotBeProducedHere = 37,
    SourceStockpileNotFull = 38,
    DirectRetrievalNotAllowed = 39,
    ETransactionResponse_MAX = 40,
};

enum class EStockpileEntryType {
    None = 0,
    Items = 1,
    ItemCrates = 2,
    ReservableItemCrates = 3,
    Vehicles = 4,
    VehicleCrates = 5,
    Structures = 6,
    StructureCrates = 7,
    MAX = 8,
};

enum class EStructureNetRelevancySize {
    Small = 0,
    Medium = 1,
    Large = 2,
    Custom = 3,
    EStructureNetRelevancySize_MAX = 4,
};

enum class EStructureFlag {
    None = 0,
    Invulnerable = 1,
    VictoryTown = 2,
    IndustrialTown = 4,
    ColonialLiberated = 8,
    WardenLiberated = 16,
    Port = 32,
    LastFlag = 128,
    EStructureFlag_MAX = 129,
};

enum class EStructureLayer {
    Logi = 0,
    Obstacles = 1,
    Logi2 = 2,
    Logi3 = 3,
    Logi4 = 4,
    MAX = 5,
};

enum class EStructureProfileType {
    Default = 0,
    GarrisonHouse = 1,
    BuildSite = 2,
    DestroyedFort = 3,
    DestroyedFortBase = 4,
    DestroyedForwardBase = 5,
    VehicleProxy = 6,
    ResourceField = 7,
    ResourceMine = 8,
    ItemStash = 9,
    DeployableWeapon = 10,
    ForwardBase = 11,
    LogiStructure = 12,
    StaticBase = 13,
    DestroyedStructure = 14,
    DestroyedRuinableStructure = 15,
    Shippable = 16,
    LogiStructureWithValuableStorage = 17,
    FieldGate = 18,
    FieldDefenseStructure = 19,
    FieldLogiStructure = 20,
    FieldStructure = 21,
    Bridge = 22,
    FortForwardBase = 23,
    FortUpgrade = 24,
    FortRotatableUpgrade = 25,
    Fort = 26,
    FortBase = 27,
    Trench = 28,
    SignPost = 29,
    GenericWorldStructure = 30,
    EmplacedWeapon = 31,
    EmplacedArtillery = 32,
    MiscellaneousDefault = 33,
    Crater = 34,
    EmplacementHouse = 35,
    BorderBase = 36,
    Fill = 37,
    FieldBridge = 38,
    Count = 39,
    EStructureProfileType_MAX = 40,
};

enum class ESupportTicketType {
    ShardConnectionError = 0,
    RegionConnectionError = 1,
    RegionLag = 2,
    ShardConnectionAutoError = 3,
    RegionConnectionAutoError = 4,
    None = 5,
    ESupportTicketType_MAX = 6,
};

enum class ETaskItemTargetCheckMethod {
    None = 0,
    OverlapFacing = 1,
    Trace = 2,
    DualTrace = 3,
    ETaskItemTargetCheckMethod_MAX = 4,
};

enum class ETechResourceID {
    None = 0,
    Aluminum = 1,
    Copper = 2,
    Iron = 3,
    ETechResourceID_MAX = 4,
};

enum class ETechTreeTier {
    Prototype = 0,
    One = 1,
    Two = 2,
    Three = 3,
    Count = 4,
    ETechTreeTier_MAX = 5,
};

enum class ETechID {
    None = 0,
    UnlockAssaultRifle = 1,
    UnlockAssaultRifleHeavy = 2,
    UnlockATRifle = 3,
    UnlockATRifleT = 4,
    UnlockATRPG = 5,
    UnlockATRPGHeavy = 6,
    UnlockATRPGLight = 7,
    UnlockFlameTorch = 8,
    UnlockGrenadeLauncher = 9,
    UnlockGrenadeLauncherT = 10,
    UnlockISG = 11,
    UnlockLMG = 12,
    UnlockMG = 13,
    UnlockMGT = 14,
    UnlockMortar = 15,
    UnlockPistolLight = 16,
    UnlockRevolver = 17,
    UnlockRifle = 18,
    UnlockRifleAutomatic = 19,
    UnlockRifleHeavy = 20,
    UnlockRifleLight = 21,
    UnlockRifleLong = 22,
    UnlockRPG = 23,
    UnlockRPGHeavy = 24,
    UnlockRPGLight = 25,
    UnlockRPGT = 26,
    UnlockShotgun = 27,
    UnlockSMG = 28,
    UnlockSMGHeavy = 29,
    UnlockSniperRifle = 30,
    UnlockBattleTankAmmoHE = 31,
    UnlockBayonet = 32,
    UnlockBinoculars = 33,
    UnlockFirstAidKit = 34,
    UnlockGarrisonSupplies = 35,
    UnlockGasMask = 36,
    UnlockGreenAsh = 37,
    UnlockGrenadeAdapter = 38,
    UnlockHEGrenade = 39,
    UnlockATGrenade = 40,
    UnlockLightTankAmmoHE = 41,
    UnlockListeningKit = 42,
    UnlockRadioBackpack = 43,
    UnlockRocketBooster = 44,
    UnlockSatchelCharge = 45,
    UnlockExplosiveLight = 46,
    UnlockSledgeHammer = 47,
    UnlockSmokeGrenade = 48,
    UnlockSoulstoneTier2 = 49,
    UnlockSoulstoneTier3 = 50,
    UnlockStickyBomb = 51,
    UnlockTankMine = 52,
    UnlockTraumaKit = 53,
    UnlockMortarAmmoAP = 54,
    UnlockWarhead = 55,
    UnlockATGarrison = 56,
    UnlockBunkerBases = 57,
    UnlockConcreteMixer = 58,
    UnlockEmplacedATGun = 59,
    UnlockEmplacedATLarge = 60,
    UnlockEmplacedCannonLarge = 61,
    UnlockEmplacedFieldMG = 62,
    UnlockEmplacedHeavyArtillery = 63,
    UnlockEmplacedIndirect = 64,
    UnlockEmplacedLightArtillery = 65,
    UnlockEmplacedMulti = 66,
    UnlockFieldBridge = 67,
    UnlockFieldHospital = 68,
    UnlockFort = 69,
    UnlockFortStaticArtillery = 70,
    UnlockFoxholeTier2 = 71,
    UnlockGarrisonBuilding = 72,
    UnlockGateTier2 = 73,
    UnlockGateTier3 = 74,
    UnlockGunTurret = 75,
    UnlockLongRangeArtillery = 76,
    UnlockMGGarrison = 77,
    UnlockPillboxTier2 = 78,
    UnlockRifleGarrison = 79,
    UnlockScrapMine = 80,
    UnlockShippingContainer = 81,
    UnlockStaticArtillery = 82,
    UnlockSulfurMine = 83,
    UnlockSunkenPillbox = 84,
    UnlockTankStop = 85,
    UnlockTunnelNetwork = 86,
    UnlockWallTier2 = 87,
    UnlockWallTier3 = 88,
    UnlockMGPillbox = 89,
    UnlockATPillbox = 90,
    UnlockAmbulance = 91,
    UnlockArmoredCar = 92,
    UnlockArmoredCarAT = 93,
    UnlockArmoredCarFlame = 94,
    UnlockArmoredCarMobility = 95,
    UnlockArmoredCarOffensive = 96,
    UnlockArmoredCarTwin = 97,
    UnlockBarge = 98,
    UnlockBattleTank = 99,
    UnlockBattleTankDefensive = 100,
    UnlockBattleTankOffensive = 101,
    UnlockBus = 102,
    UnlockDestroyerTank = 103,
    UnlockDestroyerTankFlame = 104,
    UnlockFieldArtillery = 105,
    UnlockFieldATGun = 106,
    UnlockFieldATLarge = 107,
    UnlockFieldATDamageGun = 108,
    UnlockFieldCannon = 109,
    UnlockFieldCannonDamage = 110,
    UnlockFieldCannonLarge = 111,
    UnlockFieldMG = 112,
    UnlockFieldMortar = 113,
    UnlockFieldMulti = 114,
    UnlockFlatbedTruck = 115,
    UnlockFreighter = 116,
    UnlockGunboat = 117,
    UnlockGunboatOffensive = 118,
    UnlockHalfTrack = 119,
    UnlockHalfTrackDefensive = 120,
    UnlockHalfTrackOffensive = 121,
    UnlockHalfTrackArtillery = 122,
    UnlockHalfTrackMulti = 123,
    UnlockHarvester = 124,
    UnlockLandingCraft = 125,
    UnlockLandingCraftDefensive = 126,
    UnlockLandingCraftOffensive = 127,
    UnlockLightTank = 128,
    UnlockLightTank2Infantry = 129,
    UnlockLightTankArtillery = 130,
    UnlockLightTankFlame = 131,
    UnlockLightTankMobility = 132,
    UnlockLightTankDefensive = 133,
    UnlockLightTankOffensive = 134,
    UnlockMech = 135,
    UnlockMediumTank = 136,
    UnlockMediumTankLarge = 137,
    UnlockMediumTank2 = 138,
    UnlockMediumTank2Indirect = 139,
    UnlockMediumTank2Multi = 140,
    UnlockMediumTank2Range = 141,
    UnlockMediumTank2Twin = 142,
    UnlockMediumTankOffensive = 143,
    UnlockMediumTankSiege = 144,
    UnlockMortarTank = 145,
    UnlockMotorcycle = 146,
    UnlockMotorcycleOffensive = 147,
    UnlockRelicLightTank = 148,
    UnlockRelicMediumTank = 149,
    UnlockRelicScoutVehicle = 150,
    UnlockRelicTruck = 151,
    UnlockScoutTank = 152,
    UnlockScoutTankOffensive = 153,
    UnlockScoutVehicle = 154,
    UnlockScoutVehicleMobility = 155,
    UnlockScoutVehicleOffensive = 156,
    UnlockScoutVehicleUtility = 157,
    UnlockSuperTank = 158,
    UnlockTanketteFlame = 159,
    UnlockTanketteOffensive = 160,
    UnlockTrainEngine = 161,
    UnlockTroopShip = 162,
    UnlockTruckDefensive = 163,
    UnlockTruckDump = 164,
    UnlockTruckMobility = 165,
    UnlockTruckMulti = 166,
    UnlockTruckOffensive = 167,
    UnlockAdvancedConstruction = 168,
    UnlockFacilityTier2 = 169,
    UnlockFacilityTier3 = 170,
    UnlockAmmoUniform = 171,
    UnlockArmourUniform = 172,
    UnlockChemicalUniform = 173,
    UnlockEngineerUniform = 174,
    UnlockGrenadeUniform = 175,
    UnlockMedicUniform = 176,
    UnlockOfficerUniform = 177,
    UnlockRainUniform = 178,
    UnlockScoutUniform = 179,
    UnlockSnowUniform = 180,
    UnlockTankUniform = 181,
    Count = 182,
    ETechID_MAX = 183,
};

enum class ETravelResult {
    Success = 1,
    FailureInvalidRequest = 2,
    FailureServerError = 3,
    FailureProfileSave = 4,
    FailureProfileLoad = 5,
    FailureServerFull = 6,
    FailureNoLocation = 7,
    FailureServerUnavailable = 8,
    FailureTimeout = 9,
    FailureEnemyPresent = 10,
    FailureTooManyRequests = 11,
    FailureNestedCargo = 12,
    FailureDead = 13,
    FailureWarServiceUnavailable = 14,
    FailureTooManyRailPassengers = 15,
    Count = 16,
    ETravelResult_MAX = 17,
};

enum EDeploymentState {
    Idle = 0,
    Deploying = 1,
    Undeploying = 2,
    Deployed = 3,
    FullyDeployed = 4,
    Failed = 5,
    EDeploymentState_MAX = 6,
};

enum class ETunnelConnectionState {
    Disconnected = 0,
    DisconnectedStarved = 1,
    Connected = 2,
    ETunnelConnectionState_MAX = 3,
};

enum class ETunnelNodeType {
    Source = 0,
    Terminal = 1,
    ETunnelNodeType_MAX = 2,
};

enum class EUniformType {
    Default = 0,
    AmmoW = 1,
    ArmourC = 2,
    ArmourW = 3,
    ChemicalW = 4,
    EngineerC = 5,
    EngineerW = 6,
    GrenadeC = 7,
    MedicC = 8,
    MedicW = 9,
    OfficerC = 10,
    OfficerW = 11,
    RainC = 12,
    ScoutC = 13,
    ScoutW = 14,
    SnowC = 15,
    SnowW = 16,
    SoldierC = 17,
    SoldierW = 18,
    TankC = 19,
    TankW = 20,
    MAX = 21,
};

enum class EVehicleMovementProfileType {
    Default = 0,
    Truck = 1,
    ScoutVehicle = 2,
    Halftrack = 3,
    FulltrackLight = 4,
    FulltrackLightTanks = 5,
    Fulltrack = 6,
    FulltrackMediumTanks = 7,
    Motorcycle = 8,
    Bicycle = 9,
    FieldWalked = 10,
    LightTruck = 11,
    BattleTank = 12,
    ArmoredCar = 13,
    ConstructionTracked = 14,
    Mech = 15,
    SuperTankW = 16,
    Count = 17,
    EVehicleMovementProfileType_MAX = 18,
};

enum class EVehicleProfileType {
    Default = 0,
    WheeledTransport = 1,
    OpenRoofWheeledTransport = 2,
    WheeledArmoured = 3,
    TrackedTransport = 4,
    Tank = 5,
    FieldWeapon = 6,
    BeachableShip = 7,
    Ship = 8,
    CombatShip = 9,
    Construction = 10,
    Bicycle = 11,
    Rail = 12,
    RailCar = 13,
    MAX = 14,
};

enum class ESeatDirection {
    None = 0,
    Bow = 1,
    Center = 2,
    Front = 3,
    Left = 4,
    Rear = 5,
    Right = 6,
    Stern = 7,
    Port = 8,
    Starboard = 9,
    MAX = 10,
};

enum class EVehicleSubsystem {
    Track = 0,
    FuelTank = 1,
    Turret = 2,
    Turret2 = 3,
    Turret3 = 4,
    NumSubsystems = 5,
    None = 6,
    EVehicleSubsystem_MAX = 7,
};

enum class EViolationLogType {
    VoteKick = 0,
    VoteBan = 1,
    ModKick = 2,
    ModBan = 3,
    Unban = 4,
    DIDBan = 5,
    UnbanDID = 6,
    ExcessiveFriendlyFire = 7,
    Note = 8,
    EViolationLogType_MAX = 9,
};

enum class EVoiceChannelType {
    Local = 0,
    Squad = 1,
    EVoiceChannelType_MAX = 2,
};

enum class EWarAchievementType {
    MajorOffensive = 0,
    Offensive = 1,
    Fortified = 2,
    HoldTheLine = 3,
    LastStand = 4,
    Rebellion = 5,
    TurningPoint = 6,
    Liberation = 7,
    SpecialOperation = 8,
    Count = 9,
    EWarAchievementType_MAX = 10,
};

enum class EWarBalancerRegionTypeFactor {
    NotAvailable = 0,
    NeutralStarterContested = 1,
    FriendlyStarterContested = 2,
    MostlyFriendlyStarterContested = 3,
    NeutralStarterNotContested = 4,
    FriendlyStarterNotContested = 5,
    MostlyFriendlyStarterNotContested = 6,
    EWarBalancerRegionTypeFactor_MAX = 7,
};

enum class EWarBalancerPopulationFactor {
    NotAvailable = 0,
    RoughlyEqualPlayers = 1,
    MoreColonialPlayers = 2,
    MoreWardenPlayers = 3,
    EWarBalancerPopulationFactor_MAX = 4,
};

enum class EWarBalancerWinFactor {
    NotAvailable = 0,
    NeitherFactionWinning = 1,
    ColonialsWinning = 2,
    WardensWinning = 3,
    ColonialsNearVictory = 4,
    WardensNearVictory = 5,
    EWarBalancerWinFactor_MAX = 6,
};

enum class EModeType {
    UseDefault = 0,
    Build = 1,
    Crane = 2,
    Package = 3,
    Retrieve = 4,
    Placement = 5,
    EModeType_MAX = 6,
};

enum class ETankArmourEffectBehaviour {
    Default = 0,
    DoNotPlayEffect = 1,
    ETankArmourEffectBehaviour_MAX = 2,
};

enum class EServerTravelStatusOnClient {
    Invalid = 0,
    TravelStarted = 1,
    TravelFinished = 2,
    EServerTravelStatusOnClient_MAX = 3,
};

enum class EReservedPlayerStatus {
    Reserved = 0,
    ReservedButServerIsFull = 1,
    NotReserved = 2,
    EReservedPlayerStatus_MAX = 3,
};

enum class EHUDMode {
    Visible = 0,
    OnlyPlayerNames = 1,
    Hidden = 2,
    Count = 3,
    EHUDMode_MAX = 4,
};

enum class ETestEnum {
    Test1 = 0,
    Test2 = 1,
    Test3 = 2,
    ETestEnum_MAX = 3,
};

enum class EClassRepNodeMapping {
    NotRouted = 0,
    RelevantAllConnections = 1,
    RailVehicle = 2,
    Spatialize_Static = 3,
    Spatialize_Dynamic = 4,
    Spatialize_Dormancy = 5,
    EClassRepNodeMapping_MAX = 6,
};

enum class ERichTextFontType {
    Regular10Pt = 0,
    Regular12Pt = 1,
    Regular24Pt = 2,
    Italic10Pt = 3,
    Italic12Pt = 4,
    Bold10Pt = 5,
    Bold12Pt = 6,
    Count = 7,
    ERichTextFontType_MAX = 8,
};

enum class ERichTextColour {
    Orange = 0,
    Colonial = 1,
    Warden = 2,
    Green = 3,
    Red = 4,
    Beige = 5,
    Count = 6,
    ERichTextColour_MAX = 7,
};

enum class EWarPhase {
    PreConquest = 0,
    Conquest = 1,
    Victory = 2,
    Resistance = 3,
    Completed = 4,
    EWarPhase_MAX = 5,
};

enum class ETimeDiscrepancyType {
    AntiLag = 0,
    AntiCheat = 1,
    Custom = 2,
    ETimeDiscrepancyType_MAX = 3,
};

enum class ETooltipDetailType {
    Default = 0,
    HighestVisibility = 1,
    MediumVisibility = 2,
    LowVisibility = 3,
    ETooltipDetailType_MAX = 4,
};

enum class EMapBoundaryBuildRule {
    NotBuildableNearBorder = 0,
    OnlyBuildableNearBorder = 1,
    OptionallyBuildableNearBorder = 2,
    EMapBoundaryBuildRule_MAX = 3,
};

enum class EFullRepairResponse {
    Success = 0,
    SuccessArmour = 1,
    NotEnoughMaterials = 2,
    NoVehicleFound = 3,
    VehicleNotRepairable = 4,
    IncorrectFaction = 5,
    Error = 6,
    EFullRepairResponse_MAX = 7,
};

enum class EMainMenuPromptType {
    None = 0,
    Update = 1,
    Rejoin = 2,
    RejoinResistance = 3,
    WaitForRestart = 4,
    WaitForRestartUpgrade = 5,
    VipMode = 6,
    EMainMenuPromptType_MAX = 7,
};

enum class ETestFlags {
    VehicleCameraForwardPan = 0,
    VehicleCameraForwardPan2 = 1,
    TownTest = 2,
    NumTestFlags = 3,
    ETestFlags_MAX = 4,
};

enum class ECardinalDirection {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
    ECardinalDirection_MAX = 4,
};

enum class EServerTravelOriginType {
    Client = 0,
    HomeRegion = 1,
    WarServer = 2,
    Invalid = 3,
    EServerTravelOriginType_MAX = 4,
};

enum class EUnlockStatus {
    Unlocked = 0,
    RequiresTech = 1,
    RequiresSameItemInOrder = 2,
    Error = 3,
    EUnlockStatus_MAX = 4,
};

enum class ERegionType {
    All = 0,
    Global = 1,
    Americas = 2,
    China = 3,
    Europe = 4,
    Germany = 5,
    Russia = 6,
    NumRegionTypes = 7,
    ERegionType_MAX = 8,
};

enum class ELanguageType {
    English = 0,
    Chinese = 1,
    French = 2,
    German = 3,
    Portuguese = 4,
    Russian = 5,
    ELanguageType_MAX = 6,
};

enum class EWarCollisionIgnoreFlags {
    BridgeWaterAccess = 1,
    MovementSweep = 2,
    DefenseMods = 4,
    RailwayTrack = 8,
    UnusedIgnoreFlag5 = 16,
    UnusedIgnoreFlag6 = 32,
    EWarCollisionIgnoreFlags_MAX = 33,
};

enum class EHUDNotification {
    None = 0,
    SetSpawnPointReminder = 1,
    OccupyLocationBlocked = 2,
    StructureInvulnerable = 3,
    StructureNoDamage = 4,
    StructureNoFriendlyFire = 5,
    TooFarFromFriendlyTownHall = 6,
    TooSoonToUnlockFriendlyVehicle = 7,
    CantAccessFromLocation = 8,
    StockpileFailure = 9,
    OutOfFuel = 10,
    CantRespawnAtNearestSpawnPoint = 11,
    RespawnUnavailable = 12,
    ItemDropped = 13,
    ItemSubmitted = 14,
    MustBeUprightOrCrouched = 15,
    MustBeUpright = 16,
    MustBeCrouched = 17,
    ExitBlocked = 18,
    AmbulanceOrHospitalOnly = 19,
    ModificationAlreadyExists = 20,
    ModificationAlreadyExistsHidden = 21,
    ModificationDoesNotExist = 22,
    ModificationWouldBeHidden = 23,
    ModificationUnremovable = 24,
    ModificationRemovalBlockedByVehicle = 25,
    NotEnoughMaterials = 26,
    CannotOperateOnBarge = 27,
    CannotConvertCratesStackSize = 28,
    CannotConvertCratesInventory = 29,
    CannotConvertCratesAmmo = 30,
    InventoryFull = 31,
    WoundedPlayerIsEncumbered = 32,
    TemperatureDropping = 33,
    TemperatureCritical = 34,
    TemperatureRising = 35,
    TemperatureBurning = 36,
    EncumberedByMud = 37,
    MissingMountedWeapon = 38,
    MissingFoundation = 39,
    InventoryTooSmall = 40,
    Claimed = 41,
    ClaimRefreshed = 42,
    ClaimReset = 43,
    ClaimExpired = 44,
    CantClaim = 45,
    NotClaimed = 46,
    CantDemolish = 47,
    CantDemolishHusked = 48,
    CantDemolishOccupied = 49,
    CantDemolishUnclaimed = 50,
    CantDemolishMustBeBuilder = 51,
    EnemiesNearby = 52,
    IslandMustBeRepaired = 53,
    IslandRequirementsMissing = 54,
    CantUnequipUniform = 55,
    ItemsDropped = 56,
    AccessObstructed = 57,
    BridgeVehicleDecayWarning = 58,
    BridgeVehicleDecay = 59,
    ModificationInProgress = 60,
    ItemsSubmitted = 61,
    ItemsFailedToSubmit = 62,
    RailVehicleNotPrimaryLocomotive = 63,
    RailVehicleMultipleDrivers = 64,
    CantResetPowerGridState = 65,
    CantAdjustPipeValve = 66,
    CantDemolishStructuresOnTop = 67,
    MAX = 68,
};

enum class EBuildResponse {
    Success = 0,
    IsObstructed = 1,
    IsObstructedByPlayer = 2,
    IsObstructedByStructure = 3,
    IsObstructedByVehicle = 4,
    NotEnoughResources = 5,
    NoBuildKit = 6,
    Restricted = 7,
    Error = 8,
    RequiresVehicle = 9,
    DoesntRequireVehicle = 10,
    TechRequired = 11,
    ComponentTechRequired = 12,
    TownComponentTechRequired = 13,
    SmallGarrisonRequired = 14,
    LargeGarrisonRequired = 15,
    MaxUpgradeReached = 16,
    EnemyOwned = 17,
    RequiresBlueprint = 18,
    IsScorched = 19,
    AsyncBuildRequested = 20,
    FrontierBaseInvalidBorder = 21,
    FrontierBaseCurrentZoneIsFriendly = 22,
    FrontierBaseTooCloseToAnother = 23,
    RequiresShovel = 24,
    UpgradeRequirementsNotSatisfied = 25,
    TooSteep = 26,
    AdjacentToFortUpgrade = 27,
    JoiningEnemyStructure = 28,
    UpgradeFailedDueToDamage = 29,
    ConnectorFailed = 30,
    SignPostTooClose = 31,
    SignPostRestricted = 32,
    RequiresTownConnection = 33,
    Claimed = 34,
    EnemyBaseNearby = 35,
    MustRemoveModifications = 36,
    InvalidatesDependantStructureRequirements = 37,
    TooManySameStructure = 38,
    JoiningBurningStructure = 39,
    NumTypes = 40,
    EBuildResponse_MAX = 41,
};

enum class EPlacementStatus {
    Valid = 0,
    Invalid = 1,
    ValidFarFromOutpost = 2,
    IsObstructed = 3,
    BadFoundation = 4,
    TooFarFromBuilder = 5,
    TooCloseToEnemyTownHall = 6,
    TooFarFromFriendlyTownHall = 7,
    LimitReached = 8,
    NotEnoughResources = 9,
    TooCloseToBorder = 10,
    TooFarFromBorder = 11,
    ValidNotTunnelConnected = 12,
    SurfaceNotSuitable = 13,
    TooCloseToResourceField = 14,
    FrontierBaseInvalidBorder = 15,
    FrontierBaseCurrentZoneIsFriendly = 16,
    FrontierBaseTooCloseToAnother = 17,
    TooFarToDeploy = 18,
    RequiresAttachment = 19,
    TooSteep = 20,
    TooFarFromLandscape = 21,
    JoiningEnemyStructure = 22,
    TooCloseToBridge = 23,
    ConnectorNotConnected = 24,
    SignPostTooClose = 25,
    SignPostRestricted = 26,
    ConnectorConfigurationInvalid = 27,
    ConnectorTooLong = 28,
    ConnectorTooShort = 29,
    IsFloating = 30,
    RequiresLinearAttachment = 31,
    InUse = 32,
    TooCloseToFieldBridge = 33,
    ExtensionIsObstructed = 34,
    ObstructsRoad = 35,
    SplineTooSteep = 36,
    TooManySameStructure = 37,
    TooFarFromResourceField = 38,
    TooManyNearResourceField = 39,
    PathSocketTooClose = 40,
    PathSocketTooCloseToEnd = 41,
    PathSocketTooSteep = 42,
    TooFarFromWater = 43,
    TooFarFromFoundation = 44,
    ConnectorRadiusInvalid = 45,
    JoiningBurningStructure = 46,
    StructureUnderLandscape = 47,
    MustBeBuiltOnRailwayTrack = 48,
    PathSocketTooCloseToBorder = 49,
    TrackStartEndObstructsRoad = 50,
    TrackCrossingRoadNotLevel = 51,
    TooCloseToWater = 52,
    SurfaceSamplesTooHigh = 53,
    TooCloseToSameStructure = 54,
    SurfaceSamplesAboveWater = 55,
    SplineExtendsTooFarThroughBorder = 56,
    TooCloseToEnemyTrack = 57,
    EPlacementStatus_MAX = 58,
};

enum class EWarServerType {
    Skirmish = 0,
    WorldConquest = 1,
    Event = 3,
    Training = 4,
    HomeRegionC = 5,
    HomeRegionW = 6,
    EWarServerType_MAX = 7,
};

enum class EFoot {
    Left = 0,
    Right = 1,
    NumTypes = 2,
    None = 3,
    EFoot_MAX = 4,
};

enum class ELimbIK {
    LeftHand = 0,
    RightHand = 1,
    LeftFoot = 2,
    RightFoot = 3,
    NumTypes = 4,
    None = 5,
    ELimbIK_MAX = 6,
};

enum class EChatLanguage {
    English = 1,
    Russian = 2,
    Korean = 4,
    Chinese = 8,
    EChatLanguage_MAX = 9,
};

enum class EWearableSlot {
    Head = 0,
    Chest = 1,
    Feet = 2,
    Utility = 3,
    Back = 4,
    NumSlots = 5,
    None = 6,
    EWearableSlot_MAX = 7,
};

enum class EEquipmentSlot {
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    Head = 3,
    Body = 4,
    Accessory = 5,
    Utility = 6,
    Large = 7,
    NumSlots = 8,
    None = 9,
    EEquipmentSlot_MAX = 10,
};

enum class EEquippedWeaponGripType {
    None = 0,
    Rifle = 1,
    Pistol = 2,
    RPG = 3,
    Sniper = 4,
    HeavyMachinegun = 5,
    Mortar = 6,
    VehicleFieldArtillery = 7,
    VehicleHalfTrack = 8,
    VehicleMotorCycleDriver = 9,
    StaticArtilleryGunner = 10,
    SingleHandItem = 11,
    VehicleFieldMachineGunDriver = 12,
    VehicleFieldMachineGunGunner = 13,
    ClimbingLadder = 14,
    VehicleGunboatHmgGunner = 15,
    VehicleGunboatCannonGunner = 16,
    LargeProneRifle = 17,
    VehicleMotorboatDriver = 18,
    LargeDeployableItem = 19,
    HeavySingleHandItem = 20,
    CarryingPlayer = 21,
    DeployedTwoHandedWeapon = 22,
    Shovel = 23,
    LightMachineGun = 24,
    SeatedDoubleHandedCrank = 25,
    BicycleDriver = 26,
    VehicleLmgGunner = 27,
    VehicleSeatedLmgGunner = 28,
    VehicleRpgGunner = 29,
    VehicleDriver = 30,
    VehicleDriverNarrow = 31,
    VehicleSeatedVerticalMoveOnlyGunner = 32,
    CarryingCriticalSoldier = 33,
    CarriedPlayer = 34,
    SeatedLeftSideCrank = 35,
    StandingLeftSideCrank = 36,
    RPGHeavy = 37,
    RPGLight = 38,
    VehicleTrainDriver = 39,
    VehicleSmallTrainDriver = 40,
    Flamethrower = 41,
    EEquippedWeaponGripType_MAX = 42,
};

enum class ECharacterActivityState {
    Idle = 0,
    Equipping = 1,
    UnEquipping = 2,
    Firing = 3,
    Reloading = 4,
    ToProne = 5,
    Throwing = 6,
    Dying = 7,
    UsingBinoculars = 8,
    KarateAttack = 9,
    PlacingBuildSite = 10,
    Vaulting = 11,
    Climbing = 12,
    WallClimbing = 13,
    PullingPin = 14,
    DoWork = 15,
    Wheelbarrow = 16,
    Deploying = 17,
    ShortWallStep = 18,
    UsingBandages = 19,
    ApplyingFirstAid = 20,
    EncumberedFall = 21,
    Wounded = 22,
    WoundedRecover = 23,
    Revive = 24,
    Retrieving = 25,
    LightingBomb = 26,
    PlacingBomb = 27,
    AttachingAccessory = 28,
    DettachingAccessory = 29,
    SlowWounds = 30,
    SlowWoundsComplete = 31,
    SwitchingSeats = 32,
    EnterLadderBottom = 33,
    EnterLadderTop = 34,
    ExitLadderBottom = 35,
    ExitLadderTop = 36,
    FromProne = 37,
    EmoteGoFoward = 38,
    EmoteHalt = 39,
    EmoteSalute = 40,
    EmoteWave = 41,
    EmoteRallyPoint = 42,
    EmoteSurrender = 43,
    EmoteCheer = 44,
    EnteringVehicle = 45,
    ZombieAttack = 46,
    CommanderFiring = 47,
    EnteringStructure = 48,
    EngineerRepair = 49,
    ExitingVehicle = 50,
    TransmittingLaunchCodes = 51,
    Packaging = 52,
    ZombieSpawning = 53,
    Excavating = 54,
    Modifying = 55,
    DeployingLargeItem = 56,
    UsingSoulstone = 57,
    ZombieSecondaryT2 = 58,
    ZombieSecondaryT3 = 59,
    WoundedCarried = 60,
    Freezing = 61,
    AdjustingValve = 62,
    FiremanShovel = 63,
    NumStates = 64,
    ECharacterActivityState_MAX = 65,
};

enum class ESimCharacterStance {
    Standing = 0,
    Crouched = 1,
    Prone = 2,
    Sprinting = 3,
    NumStates = 4,
    ESimCharacterStance_MAX = 5,
};

enum class EItemSubtype {
    None = 0,
    ArmorPiercing = 1,
    Flare = 2,
    GreenAsh = 3,
    HighExplosive = 4,
    Shrapnel = 5,
    Smoke = 6,
    NumTypes = 7,
    EItemSubtype_MAX = 8,
};

enum class EItemRequisitionType {
    Open = 0,
    Coalition = 1,
    MainEquipment = 2,
    ExtraEquipment = 3,
    Ammo = 4,
    Consumable = 5,
    NumTypes = 6,
    EItemRequisitionType_MAX = 7,
};

enum class EQueueType {
    Regular = 0,
    Mod = 1,
    ServerTravel = 2,
    Unselected = 3,
    EQueueType_MAX = 4,
};

enum class EJoinWarResponse {
    Success = 0,
    AskToJoinModQueue = 1,
    Banned = 2,
    PasswordIncorrect = 3,
    TooManyLogins = 4,
    NoFactionSwitch = 5,
    FactionLockedSelfServeUnlockAvailable = 6,
    FactionLimitReached = 7,
    EarlyWarRestricted = 8,
    TravelGroupSizeTooLarge = 9,
    TravelGroupHasEnemy = 10,
    UnknownError = 11,
    EnteringQueueDisabled = 12,
    InvalidFaction = 13,
    ConquestPending = 14,
    VersionCheckFailed = 15,
    OfflineCharacterUnavailable = 16,
    OfflineCharacterServerQueued = 17,
    TravelPointDestroyed = 18,
    TravelPointLacksGarrisonSize = 19,
    TravelOnCooldown = 20,
    ReservedButFull = 21,
    EnteringQueueDisabledVipMode = 22,
    EJoinWarResponse_MAX = 23,
};

enum class EWorldConquestMapId {
    Invalid = 0,
    HomeRegionC = 1,
    HomeRegionW = 2,
    DeadLandsHex = 3,
    CallahansPassageHex = 4,
    MarbanHollow = 5,
    UmbralWildwoodHex = 6,
    MooringCountyHex = 7,
    HeartlandsHex = 8,
    LochMorHex = 9,
    LinnMercyHex = 10,
    ReachingTrailHex = 11,
    StonecradleHex = 12,
    FarranacCoastHex = 13,
    WestgateHex = 14,
    FishermansRowHex = 15,
    OarbreakerHex = 16,
    GreatMarchHex = 17,
    TempestIslandHex = 18,
    GodcroftsHex = 19,
    EndlessShoreHex = 20,
    AllodsBightHex = 21,
    WeatheredExpanseHex = 22,
    DrownedValeHex = 23,
    ShackledChasmHex = 24,
    ViperPitHex = 25,
    Westgate = 26,
    FishermansRowFCL = 27,
    FoxholeFestivalMap = 28,
    NevishLineHex = 29,
    AcrithiaHex = 30,
    RedRiverHex = 31,
    CallumsCapeHex = 32,
    SpeakingWoodsHex = 33,
    BasinSionnachHex = 34,
    HowlCountyHex = 35,
    ClansheadValleyHex = 36,
    MorgensCrossingHex = 37,
    TheFingersHex = 38,
    TerminusHex = 39,
    KalokaiHex = 40,
    AshFieldsHex = 41,
    OriginHex = 42,
    Count = 43,
    EWorldConquestMapId_MAX = 44,
};

enum class ETownHallState {
    Built = 0,
    NotBuilt = 1,
    ETownHallState_MAX = 2,
};

enum class EGameplayFlag {
    TrainingGrounds = 0,
    Festival = 1,
    Zombie = 2,
    Stronghold = 3,
    LetItSnow = 4,
    Relic = 5,
    MAX = 6,
};

enum class ETemperatureState {
    Burning = 0,
    Hot = 1,
    None = 2,
    Cold = 3,
    Freezing = 4,
    Frozen = 5,
    MAX = 6,
};

enum class EWeatherType {
    None = 0,
    RainStorm = 1,
    SnowStorm = 2,
    MAX = 3,
};

enum class EZombieType {
    None = 0,
    Regular = 1,
    Spitter = 2,
    Tank = 3,
    Count = 4,
    EZombieType_MAX = 5,
};

enum class EZombieSecondaryAttack {
    None = 0,
    Ranged = 1,
    FrontalAOE = 2,
    EZombieSecondaryAttack_MAX = 3,
};

