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
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableBuffDuration
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerConsumableAsset*                       InConsumable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutDuration                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::GetConsumableBuffDuration(class UTigerConsumableAsset* InConsumable, float* OutDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableBuffDuration");

	UTBP_BuffPostProcessHandler_C_GetConsumableBuffDuration_Params params;
	params.InConsumable = InConsumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDuration != nullptr)
		*OutDuration = params.OutDuration;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableID
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerConsumableAsset*                       InConsumable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OutID                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::GetConsumableID(class UTigerConsumableAsset* InConsumable, int* OutID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableID");

	UTBP_BuffPostProcessHandler_C_GetConsumableID_Params params;
	params.InConsumable = InConsumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutID != nullptr)
		*OutID = params.OutID;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.AddPostProcess
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      PostProcess                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATBP_BuffPostProcess_Master_C*               PostProcessActor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::AddPostProcess(class UClass* PostProcess, float Duration, int ID, class ATBP_BuffPostProcess_Master_C** PostProcessActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.AddPostProcess");

	UTBP_BuffPostProcessHandler_C_AddPostProcess_Params params;
	params.PostProcess = PostProcess;
	params.Duration = Duration;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PostProcessActor != nullptr)
		*PostProcessActor = params.PostProcessActor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_BuffPostProcessHandler_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ReceiveBeginPlay");

	UTBP_BuffPostProcessHandler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffAdded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffAdded");

	UTBP_BuffPostProcessHandler_C_OnBuffAdded_Params params;
	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRefreshed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRefreshed");

	UTBP_BuffPostProcessHandler_C_OnBuffRefreshed_Params params;
	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRemoved
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  Buff                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRemoved");

	UTBP_BuffPostProcessHandler_C_OnBuffRemoved_Params params;
	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnClientBuffIdUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OldId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NewId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnClientBuffIdUpdated(int OldId, int NewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnClientBuffIdUpdated");

	UTBP_BuffPostProcessHandler_C_OnClientBuffIdUpdated_Params params;
	params.OldId = OldId;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       Consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnUseConsumableStarted(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableStarted");

	UTBP_BuffPostProcessHandler_C_OnUseConsumableStarted_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       Consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnUseConsumableFinished(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableFinished");

	UTBP_BuffPostProcessHandler_C_OnUseConsumableFinished_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableCancelled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       Consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::OnUseConsumableCancelled(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableCancelled");

	UTBP_BuffPostProcessHandler_C_OnUseConsumableCancelled_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ExecuteUbergraph_TBP_BuffPostProcessHandler
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BuffPostProcessHandler_C::ExecuteUbergraph_TBP_BuffPostProcessHandler(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ExecuteUbergraph_TBP_BuffPostProcessHandler");

	UTBP_BuffPostProcessHandler_C_ExecuteUbergraph_TBP_BuffPostProcessHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
