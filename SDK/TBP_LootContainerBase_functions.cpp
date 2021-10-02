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
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTS_PingableActorInfo                       OutInfo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootContainerBase_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingInfo");

	ATBP_LootContainerBase_C_GetPingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       OutCategory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootContainerBase_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingCategory");

	ATBP_LootContainerBase_C_GetPingCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnAnimateOpen
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_LootContainerBase_C::OnAnimateOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnAnimateOpen");

	ATBP_LootContainerBase_C_OnAnimateOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnSpawnLoot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootContainerBase_C::OnSpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnSpawnLoot");

	ATBP_LootContainerBase_C_OnSpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteractFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootContainerBase_C::OnInteractFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteractFinished");

	ATBP_LootContainerBase_C_OnInteractFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_LootContainerBase_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.UserConstructionScript");

	ATBP_LootContainerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_LootContainerBase_C::HeightenedSensesTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__FinishedFunc");

	ATBP_LootContainerBase_C_HeightenedSensesTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_LootContainerBase_C::HeightenedSensesTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__UpdateFunc");

	ATBP_LootContainerBase_C_HeightenedSensesTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootContainerBase_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveTick");

	ATBP_LootContainerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnLeaveHeightenedSenseArea
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootContainerBase_C::OnLeaveHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnLeaveHeightenedSenseArea");

	ATBP_LootContainerBase_C_OnLeaveHeightenedSenseArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseAreaInitial
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootContainerBase_C::OnEnterHeightenedSenseAreaInitial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseAreaInitial");

	ATBP_LootContainerBase_C_OnEnterHeightenedSenseAreaInitial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseArea
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootContainerBase_C::OnEnterHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseArea");

	ATBP_LootContainerBase_C_OnEnterHeightenedSenseArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteract
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_EInteractiveObjectState                      ActivatedTrigger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootContainerBase_C::OnInteract(Tiger_EInteractiveObjectState ActivatedTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteract");

	ATBP_LootContainerBase_C_OnInteract_Params params;
	params.ActivatedTrigger = ActivatedTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnBecameClosestLootContainerInHeightenedSenses
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_LootContainerBase_C::OnBecameClosestLootContainerInHeightenedSenses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnBecameClosestLootContainerInHeightenedSenses");

	ATBP_LootContainerBase_C_OnBecameClosestLootContainerInHeightenedSenses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnStoppedBeingClosestLootContainerInHeightenedSenses
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_LootContainerBase_C::OnStoppedBeingClosestLootContainerInHeightenedSenses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnStoppedBeingClosestLootContainerInHeightenedSenses");

	ATBP_LootContainerBase_C_OnStoppedBeingClosestLootContainerInHeightenedSenses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnJumpToFinalState
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_LootContainerBase_C::OnJumpToFinalState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnJumpToFinalState");

	ATBP_LootContainerBase_C_OnJumpToFinalState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_LootContainerBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveBeginPlay");

	ATBP_LootContainerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootContainerBase.TBP_LootContainerBase_C.ExecuteUbergraph_TBP_LootContainerBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootContainerBase_C::ExecuteUbergraph_TBP_LootContainerBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootContainerBase.TBP_LootContainerBase_C.ExecuteUbergraph_TBP_LootContainerBase");

	ATBP_LootContainerBase_C_ExecuteUbergraph_TBP_LootContainerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
