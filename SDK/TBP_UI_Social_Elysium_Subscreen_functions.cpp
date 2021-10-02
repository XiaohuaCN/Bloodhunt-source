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
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerListIfNeeded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Elysium_Subscreen_C::RefreshPlayerListIfNeeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerListIfNeeded");

	UTBP_UI_Social_Elysium_Subscreen_C_RefreshPlayerListIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayerEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerElysiumPlayerState*                    PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Elysium_Subscreen_C::AddPlayerEntry(class ATigerElysiumPlayerState* PlayerState, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayerEntry");

	UTBP_UI_Social_Elysium_Subscreen_C_AddPlayerEntry_Params params;
	params.PlayerState = PlayerState;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerList
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Elysium_Subscreen_C::RefreshPlayerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerList");

	UTBP_UI_Social_Elysium_Subscreen_C_RefreshPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Social_Elysium_Subscreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnOpen");

	UTBP_UI_Social_Elysium_Subscreen_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Social_Elysium_Subscreen_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnClose");

	UTBP_UI_Social_Elysium_Subscreen_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Elysium_Subscreen_C::AddPlayer(class ATigerPlayerState* PlayerState, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayer");

	UTBP_UI_Social_Elysium_Subscreen_C_AddPlayer_Params params;
	params.PlayerState = PlayerState;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnPartyUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_Elysium_Subscreen_C::OnPartyUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnPartyUpdated");

	UTBP_UI_Social_Elysium_Subscreen_C_OnPartyUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Elysium_Subscreen_C::ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen");

	UTBP_UI_Social_Elysium_Subscreen_C_ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
