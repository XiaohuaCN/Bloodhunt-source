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
// Parameters
//---------------------------------------------------------------------------

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
struct AReplicationGraphDebugActor_ServerStopDebugging_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
struct AReplicationGraphDebugActor_ServerStartDebugging_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PeriodFrame;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullDistance;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
struct AReplicationGraphDebugActor_ServerPrintCullDistances_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
	struct FString                                     Str;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
struct AReplicationGraphDebugActor_ServerCellInfo_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct AReplicationGraphDebugActor_ClientCellInfo_Params
{
	struct FVector                                     CellLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CellExtent;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                    // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
