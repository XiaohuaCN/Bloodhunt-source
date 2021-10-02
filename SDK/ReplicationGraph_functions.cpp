// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00B8CB40
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");

	AReplicationGraphDebugActor_ServerStopDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8CB20
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");

	AReplicationGraphDebugActor_ServerStartDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8CA50
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PeriodFrame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass");

	AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params params;
	params.Class = Class;
	params.PeriodFrame = PeriodFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C970
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CullDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");

	AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params params;
	params.Class = Class;
	params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C8E0
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint");

	AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C8C0
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances");

	AReplicationGraphDebugActor_ServerPrintCullDistances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C820
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		struct FString                                     Str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const struct FString& Str)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");

	AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C800
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
void AReplicationGraphDebugActor::ServerCellInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");

	AReplicationGraphDebugActor_ServerCellInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B8C6B0
//		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
//		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
//		struct FVector                                     CellLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     CellExtent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");

	AReplicationGraphDebugActor_ClientCellInfo_Params params;
	params.CellLocation = CellLocation;
	params.CellExtent = CellExtent;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
