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
//		Name   -> Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.UpdateFriendAvailability
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Inbox_Subscreen_C::UpdateFriendAvailability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.UpdateFriendAvailability");

	UTBP_UI_Social_Inbox_Subscreen_C_UpdateFriendAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Social_Inbox_Subscreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnOpen");

	UTBP_UI_Social_Inbox_Subscreen_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Social_Inbox_Subscreen_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnClose");

	UTBP_UI_Social_Inbox_Subscreen_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnFriendServiceStatusChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerOnlineServiceStatus                    InServiceStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Inbox_Subscreen_C::OnFriendServiceStatusChanged(Tiger_ETigerOnlineServiceStatus InServiceStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnFriendServiceStatusChanged");

	UTBP_UI_Social_Inbox_Subscreen_C_OnFriendServiceStatusChanged_Params params;
	params.InServiceStatus = InServiceStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Inbox_Subscreen_C::ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen");

	UTBP_UI_Social_Inbox_Subscreen_C_ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
