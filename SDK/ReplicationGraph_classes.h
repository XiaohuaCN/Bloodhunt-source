#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ReplicationGraph.ReplicationGraph
// 0x0470 (FullSize[0x0498] - InheritedSize[0x0028])
class UReplicationGraph : public UReplicationDriver
{
public:
	class UClass*                                      ReplicationConnectionManagerClass;                         // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                                  NetDriver;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*>      Connections;                                               // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*>      PendingConnections;                                        // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q7KP[0x40];                                    // 0x0058(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UReplicationGraphNode*>               GlobalGraphNodes;                                          // 0x0098(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReplicationGraphNode*>               PrepareForReplicationNodes;                                // 0x00A8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DOGW[0x3E0];                                   // 0x00B8(0x03E0) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraph");
		return ptr;
	}



};

// Class ReplicationGraph.BasicReplicationGraph
// 0x0038 (FullSize[0x04D0] - InheritedSize[0x0498])
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                  // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                        // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConnectionAlwaysRelevantNodePair>   AlwaysRelevantForConnectionList;                           // 0x04A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsWithoutNetConnection;                                // 0x04B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7LER[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.BasicReplicationGraph");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>               AllChildNodes;                                             // 0x0028(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5OTX[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x00A8 (FullSize[0x00F8] - InheritedSize[0x0050])
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData_UWKA[0xA8];                                    // 0x0050(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorList");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x00E8 (FullSize[0x0138] - InheritedSize[0x0050])
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData_72SN[0xE8];                                    // 0x0050(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x0030 (FullSize[0x0128] - InheritedSize[0x00F8])
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData_0UWB[0x30];                                    // 0x00F8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// 0x0098 (FullSize[0x0190] - InheritedSize[0x00F8])
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData_T137[0x98];                                    // 0x00F8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData_4HJR[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DormancyNode");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0058 (FullSize[0x0150] - InheritedSize[0x00F8])
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData_FM1R[0x48];                                    // 0x00F8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UReplicationGraphNode*                       DynamicNode;                                               // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_DormancyNode*          DormancyNode;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridCell");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x01E0 (FullSize[0x0230] - InheritedSize[0x0050])
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	unsigned char                                      UnknownData_OM2J[0x1E0];                                   // 0x0050(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                       ChildNode;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JJNC[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0028 (FullSize[0x0120] - InheritedSize[0x00F8])
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData_3RT0[0x18];                                    // 0x00F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAlwaysRelevantActorInfo>            PastRelevantActors;                                        // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>                   TearOffActors;                                             // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLE6[0x18];                                    // 0x0060(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
		return ptr;
	}



};

// Class ReplicationGraph.NetReplicationGraphConnection
// 0x0210 (FullSize[0x0238] - InheritedSize[0x0028])
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                              NetConnection;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FHG5[0x140];                                   // 0x0030(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AReplicationGraphDebugActor*                 DebugActor;                                                // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LN0Y[0x10];                                    // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLastLocationGatherInfo>             LastGatherLocations;                                       // 0x0188(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KDU6[0x8];                                     // 0x0198(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UReplicationGraphNode*>               ConnectionGraphNodes;                                      // 0x01A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                               // 0x01B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1OBD[0x80];                                    // 0x01B8(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.NetReplicationGraphConnection");
		return ptr;
	}



};

// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                           ReplicationGraph;                                          // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetReplicationGraphConnection*              ConnectionManager;                                         // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphDebugActor");
		return ptr;
	}



	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame);
	void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerPrintCullDistances();
	void ServerPrintAllActorInfo(const struct FString& Str);
	void ServerCellInfo();
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
