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
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.IsDataLoaded
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InTigerPlayerController                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_ElysiumHUD_Battlepass_C::IsDataLoaded(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.IsDataLoaded");

	UTBP_UI_ElysiumHUD_Battlepass_C_IsDataLoaded_Params params;
	params.InTigerPlayerController = InTigerPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Update Rank
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::Update_Rank()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Update Rank");

	UTBP_UI_ElysiumHUD_Battlepass_C_Update_Rank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Update Progress Bar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::Update_Progress_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Update Progress Bar");

	UTBP_UI_ElysiumHUD_Battlepass_C_Update_Progress_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Listen To Level Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::Listen_To_Level_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Listen To Level Up");

	UTBP_UI_ElysiumHUD_Battlepass_C_Listen_To_Level_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.OnDataLoaded
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::OnDataLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.OnDataLoaded");

	UTBP_UI_ElysiumHUD_Battlepass_C_OnDataLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.ListenToDataLoadingEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::ListenToDataLoadingEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.ListenToDataLoadingEvent");

	UTBP_UI_ElysiumHUD_Battlepass_C_ListenToDataLoadingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Data Listen Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::Data_Listen_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Data Listen Event");

	UTBP_UI_ElysiumHUD_Battlepass_C_Data_Listen_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.OnTransactionalDataChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerTransactionalData     TransactionalPlayerData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumHUD_Battlepass_C::OnTransactionalDataChanged(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.OnTransactionalDataChanged");

	UTBP_UI_ElysiumHUD_Battlepass_C_OnTransactionalDataChanged_Params params;
	params.TransactionalPlayerData = TransactionalPlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.On Completed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_C::On_Completed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.On Completed");

	UTBP_UI_ElysiumHUD_Battlepass_C_On_Completed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Battlepass_C::ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass");

	UTBP_UI_ElysiumHUD_Battlepass_C_ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
