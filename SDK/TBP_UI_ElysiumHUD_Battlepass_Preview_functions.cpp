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
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.IsDataLoaded
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InTigerPlayerController                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_ElysiumHUD_Battlepass_Preview_C::IsDataLoaded(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.IsDataLoaded");

	UTBP_UI_ElysiumHUD_Battlepass_Preview_C_IsDataLoaded_Params params;
	params.InTigerPlayerController = InTigerPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.Update Battlepass Reward
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_Preview_C::Update_Battlepass_Reward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.Update Battlepass Reward");

	UTBP_UI_ElysiumHUD_Battlepass_Preview_C_Update_Battlepass_Reward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.OnDataLoaded
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_Preview_C::OnDataLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.OnDataLoaded");

	UTBP_UI_ElysiumHUD_Battlepass_Preview_C_OnDataLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.ListenToDataLoadingEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_Preview_C::ListenToDataLoadingEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.ListenToDataLoadingEvent");

	UTBP_UI_ElysiumHUD_Battlepass_Preview_C_ListenToDataLoadingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.Data Listen Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Battlepass_Preview_C::Data_Listen_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.Data Listen Event");

	UTBP_UI_ElysiumHUD_Battlepass_Preview_C_Data_Listen_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Preview
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Battlepass_Preview_C::ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Preview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Battlepass_Preview.TBP_UI_ElysiumHUD_Battlepass_Preview_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Preview");

	UTBP_UI_ElysiumHUD_Battlepass_Preview_C_ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass_Preview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
