#ifndef UE4SS_SDK_ReplicationGraph_HPP
#define UE4SS_SDK_ReplicationGraph_HPP

class UReplicationGraph : public UReplicationDriver
{
    TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;
    class UNetDriver* NetDriver;
    TArray<class UNetReplicationGraphConnection*> Connections;
    TArray<class UNetReplicationGraphConnection*> PendingConnections;
    TArray<class UReplicationGraphNode*> GlobalGraphNodes;
    TArray<class UReplicationGraphNode*> PrepareForReplicationNodes;

};

struct FConnectionAlwaysRelevantNodePair
{
    class UNetConnection* NetConnection;
    class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;

};

class UBasicReplicationGraph : public UReplicationGraph
{
    class UReplicationGraphNode_GridSpatialization2D* GridNode;
    class UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;
    TArray<class AActor*> ActorsWithoutNetConnection;

};

class UReplicationGraphNode : public UObject
{
    TArray<class UReplicationGraphNode*> AllChildNodes;

};

class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
};

class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
};

class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
};

class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
};

class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
};

class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
    class UReplicationGraphNode* DynamicNode;
    class UReplicationGraphNode_DormancyNode* DormancyNode;

};

class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
};

class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
    class UReplicationGraphNode* ChildNode;

};

struct FAlwaysRelevantActorInfo
{
    class UNetConnection* Connection;
    class AActor* LastViewer;
    class AActor* LastViewTarget;

};

class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
    TArray<FAlwaysRelevantActorInfo> PastRelevantActors;
    class AActor* LastViewer;
    class AActor* LastViewTarget;

};

struct FTearOffActorInfo
{
    class AActor* Actor;

};

class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
    TArray<FTearOffActorInfo> TearOffActors;

};

struct FLastLocationGatherInfo
{
    class UNetConnection* Connection;
    FVector LastLocation;

};

class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
    class UNetConnection* NetConnection;
    class AReplicationGraphDebugActor* DebugActor;
    TArray<FLastLocationGatherInfo> LastGatherLocations;
    TArray<class UReplicationGraphNode*> ConnectionGraphNodes;
    class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;

};

class AReplicationGraphDebugActor : public AActor
{
    class UReplicationGraph* ReplicationGraph;
    class UNetReplicationGraphConnection* ConnectionManager;

    void ServerStopDebugging();
    void ServerStartDebugging();
    void ServerSetPeriodFrameForClass(UClass* Class, int32 PeriodFrame);
    void ServerSetCullDistanceForClass(UClass* Class, float CullDistance);
    void ServerSetConditionalActorBreakpoint(class AActor* Actor);
    void ServerPrintCullDistances();
    void ServerPrintAllActorInfo(FString Str);
    void ServerCellInfo();
    void ClientCellInfo(FVector CellLocation, FVector CellExtent, const TArray<class AActor*>& Actors);
};

#endif
